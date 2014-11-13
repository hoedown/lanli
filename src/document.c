#include "document.h"

#include "escape.h"

#include <stdlib.h>
#include <string.h>

#include "_element_type.h"


#define TOKEN_UNIT 16
#define LEVELBUF_UNIT 16
#define LEVELBUF_MAX_SIZE 400

#define TAG_NAME_UNIT TOKEN_UNIT
#define ATTR_NAME_UNIT TOKEN_UNIT
#define ATTR_VALUE_UNIT TOKEN_UNIT

#define RESTRICT_VALUE(VAR, NAME) \
  ((int)VAR < LANLI_##NAME##__MIN ? LANLI_##NAME##__MIN : \
  ((int)VAR > LANLI_##NAME##__MAX ? LANLI_##NAME##__MAX : \
VAR))


// TAG
// Methods to create and destroy tag objects

static inline void init_tag(lanli_tag *tag, size_t max_attributes) {
  tag->attributes = lanli_calloc(max_attributes, sizeof(lanli_tag_attribute));
  for (size_t a = 0; a < max_attributes; a++) {
    tag->attributes[a].name = lanli_buffer_new(ATTR_NAME_UNIT);
    tag->attributes[a].value = lanli_buffer_new(ATTR_VALUE_UNIT);
  }

  tag->name = lanli_buffer_new(TAG_NAME_UNIT);
}

static inline void uninit_tag(lanli_tag *tag, size_t max_attributes) {
  lanli_buffer_free(tag->name);
  for (size_t a = 0; a < max_attributes; a++) {
    lanli_buffer_free(tag->attributes[a].name);
    lanli_buffer_free(tag->attributes[a].value);
  }
  free(tag->attributes);
}

static inline void reset_tag(lanli_tag *tag, size_t max_attributes) {
  lanli_buffer_reset(tag->name);
  for (size_t a = 0; a < max_attributes; a++) {
    lanli_buffer_reset(tag->attributes[a].name);
    lanli_buffer_reset(tag->attributes[a].value);
  }
}

static void copy_tag(lanli_tag *dst, const lanli_tag *src) {
  dst->level = src->level;
  lanli_buffer_set(dst->name, src->name->data, src->name->size);

  for (size_t a = 0; a < src->attributes_count; a++) {
    lanli_tag_attribute *src_attr = &src->attributes[a];
    lanli_tag_attribute *dst_attr = &dst->attributes[a];

    lanli_buffer_set(dst_attr->name, src_attr->name->data, src_attr->name->size);
    lanli_buffer_set(dst_attr->value, src_attr->value->data, src_attr->value->size);
    dst_attr->has_value = src_attr->has_value;
  }
  dst->attributes_count = src->attributes_count;

  dst->tag_type = src->tag_type;
  dst->type = src->type;
}


// TAG STACK
// Holds the fixed-size stack of elements nested.

static lanli_tag_stack *new_tag_stack(size_t max_nesting, size_t max_attributes) __attribute__ ((malloc));
static lanli_tag_stack *new_tag_stack(size_t max_nesting, size_t max_attributes) {
  lanli_tag_stack *stack = lanli_malloc(sizeof(lanli_tag_stack));
  stack->max_attributes = max_attributes;
  stack->asize = max_nesting;

  stack->tags = lanli_calloc(max_nesting, sizeof(lanli_tag));
  stack->orig = lanli_calloc(max_nesting, sizeof(lanli_tag));

  for (size_t i = 0; i < max_nesting; i++) {
    init_tag(&stack->tags[i], max_attributes);
    init_tag(&stack->orig[i], max_attributes);
  }

  return stack;
}

static void free_tag_stack(lanli_tag_stack *stack) {
  for (size_t i = 0; i < stack->asize; i++) {
    uninit_tag(&stack->tags[i], stack->max_attributes);
    uninit_tag(&stack->orig[i], stack->max_attributes);
  }

  free(stack->tags);
  free(stack->orig);

  free(stack);
}

static void reset_tag_stack(lanli_tag_stack *stack) {
  for (size_t i = 0; i < stack->asize; i++) {
    reset_tag(&stack->tags[i], stack->max_attributes);
    reset_tag(&stack->orig[i], stack->max_attributes);
  }
}


// MAIN INSTANCE
// Definition of lanli_document and its (de)constructor

struct lanli_document {
  lanli_callback callback;
  void *opaque;
  lanli_flags flags;
  size_t levels;

  // preallocated resources for render
  lanli_buffer *ob;
  lanli_buffer **levelbuf;
  lanli_tag_stack *stack;
};

lanli_document *lanli_document_new(
  lanli_callback callback,
  void *opaque,
  lanli_flags flags,
  size_t levels,
  size_t max_nesting,
  size_t max_attributes
) {
  lanli_document *doc = lanli_malloc(sizeof(lanli_document));

  doc->callback = callback;
  doc->opaque = opaque;
  doc->flags = flags;
  doc->levels = RESTRICT_VALUE(levels, LEVELS);

  size_t length = levels + 1;
  doc->levelbuf = lanli_calloc(length, sizeof(lanli_buffer *));
  for (size_t i = 0; i < length; i++)
    doc->levelbuf[i] = lanli_buffer_new(LEVELBUF_UNIT);

  max_nesting = RESTRICT_VALUE(max_nesting, MAX_NESTING);
  max_attributes = RESTRICT_VALUE(max_attributes, MAX_ATTRIBUTES);
  doc->stack = new_tag_stack(max_nesting, max_attributes);

  return doc;
}

void lanli_document_free(lanli_document *doc) {
  free_tag_stack(doc->stack);

  size_t length = doc->levels + 1;
  for (size_t i = 0; i < length; i++)
    lanli_buffer_free(doc->levelbuf[i]);
  free(doc->levelbuf);

  free(doc);
}



// LOW-LEVEL HTML UTILS

// Checks if the char is an ASCII digit,
// according to the HTML5 spec.
static inline int is_digit_ascii(uint8_t ch) {
  return ch >= '0' && ch <= '9';
}

// Checks if the char is an uppercase ASCII letter,
// according to the HTML5 spec.
static inline int is_upper_ascii(uint8_t ch) {
  return ch >= 'A' && ch <= 'Z';
}

// Checks if the char is an lowercase ASCII letter,
// according to the HTML5 spec.
static inline int is_lower_ascii(uint8_t ch) {
  return ch >= 'a' && ch <= 'z';
}

// Checks if the char is an alphanumeric ASCII character,
// according to the HTML5 spec.
static inline int is_alnum_ascii(uint8_t ch) {
  return is_lower_ascii(ch) || is_upper_ascii(ch) || is_digit_ascii(ch);
}

// Checks if the char is a valid space character,
// according to the HTML5 spec.
static inline int is_space(uint8_t ch) {
  return ch == 0x20 // space
      || ch == 0x09 // tab
      || ch == 0x0a // linefeed
      || ch == 0x0c // form feed
      || ch == 0x0d // carriage return
      ;
}

// Replaces all uppercase ASCII letters in the string
// with their lowercase counterparts.
static inline void to_lower_ascii(uint8_t *data, size_t size) {
  for (size_t i = 0; i < size; i++) {
    if (is_upper_ascii(data[i]))
      data[i] += 0x20;
  }
}


// Checks if the char can be part of an attribute name,
// according to the HTML5 spec.
static inline int is_attr_name_char(uint8_t ch) {
  // If we wanted to be 100% HTML-compliant, we should allow
  // more characters to be part of attribute names.
  return is_alnum_ascii(ch)
      || ch == '-' || ch == '_' || ch == ':'
      || ch == '.' || ch == ',' || ch == ';'
      || ch == '$' || ch == '!' || ch == '?'
      || ch == '@' || ch == '%' || ch == '&';
}

// Checks if the char is sensitive and can't be found inside
// unquoted attribute values, according to the HTML5 spec.
static inline int is_attr_sensitive(uint8_t ch) {
  return ch == '<' || ch == '>' || ch == '='
      || ch == '"' || ch == '`' || ch == '\'';
}



// HTML PARSING & VALIDATION

// Parse an attribute value if there's one, according to the HTML5 spec.
// Sets parsed value to the buffer passed.
// Returns 0 if there's no value, size of the value otherwise.
static size_t parse_attribute_value(lanli_buffer *value, const uint8_t *data, size_t size) {
  size_t i = 0, mark;
  while (i < size && is_space(data[i])) i++;

  if (!(i < size)) return 0;
  uint8_t delimiter = data[i];

  if (delimiter == '\'' || delimiter == '"') {
    i++;
    // Quoted attribute
    mark = i;
    while (i < size && data[i] != delimiter) i++;
    if (!(i < size)) return 0;
    lanli_buffer_set(value, data + mark, i - mark);

    return i + 1;
  }

  // Unquoted attribute
  mark = i;
  while (i < size && !is_space(data[i]) && !is_attr_sensitive(data[i])) i++;
  if (mark == i) return 0;
  lanli_buffer_set(value, data + mark, i - mark);

  return i;
}

// Parse an attribute if there's one, according to the HTML5 spec.
// Returns 0 if there's no valid attribute, size of the attribute otherwise.
static size_t parse_attribute(lanli_tag_attribute *attr, const uint8_t *data, size_t size) {
  size_t i = 0, mark;

  // There must be at least one space character as separation
  mark = i;
  while (i < size && is_space(data[i])) i++;
  if (mark == i) return 0;

  // Collect attribute name
  mark = i;
  while (i < size && is_attr_name_char(data[i])) i++;
  if (mark == i) return 0;
  lanli_buffer_set(attr->name, data + mark, i - mark);

  // Collect attribute value, if there is
  mark = i;
  while (i < size && is_space(data[i])) i++;
  if (i < size && data[i] == '=') {
    i++;
    // Attribute with value
    attr->has_value = 1;
    mark = i;
    i += parse_attribute_value(attr->value, data + i, size - i);
    if (mark == i) return 0;
    return i;
  } else {
    // Attribute without value
    attr->has_value = 0;
    attr->value->size = 0;
    return mark;
  }

  // If we wanted to be 100% HTML-compliant, we should enforce
  // an unquoted attribute to have at least one space character
  // next, if it's followed by a slash.
}

// Parse a start tag if there's one, according to the HTML5 spec.
// This method assumes that data[0] == '<', so check that before calling it.
// Returns 0 if there's no start tag, size of the tag otherwise.
static size_t parse_start_tag(lanli_tag *tag, size_t max_attributes, const uint8_t *data, size_t size) {
  size_t i = 1, mark;

  // Collect the tag name
  mark = i;
  while (i < size && is_alnum_ascii(data[i])) i++;
  if (mark == i) return 0;
  lanli_buffer_set(tag->name, data + mark, i - mark);

  // Collect the attributes
  size_t a;
  for (a = 0; a < max_attributes; a++) {
    mark = i;
    i += parse_attribute(&tag->attributes[a], data + i, size - i);
    if (mark == i) break;
  }
  tag->attributes_count = a;

  // Collect optional spacing
  while (i < size && is_space(data[i])) i++;

  // Optional slash
  tag->tag_type = LANLI_TAG_OPEN;
  if (i < size && data[i] == '/') {
    tag->tag_type = LANLI_TAG_SELFCLOSE;
    i++;
  }

  // Ending angle bracket
  if (i < size && data[i] == '>')
    return i + 1;
  return 0;
}

// Parse an end tag if there's one, according to the HTML5 spec.
// This method assumes that data[0] == '<', so check that before calling it.
// Returns 0 if there's no end tag, size of the tag otherwise.
static size_t parse_end_tag(lanli_tag *tag, const uint8_t *data, size_t size) {
  size_t i = 1, mark;

  // Slash
  if (i < size && data[i] == '/') i++;
  else return 0;

  // Collect tag name
  mark = i;
  while (i < size && is_alnum_ascii(data[i])) i++;
  if (mark == i) return 0;
  lanli_buffer_set(tag->name, data + mark, i - mark);

  // Collect optional spacing
  while (i < size && is_space(data[i])) i++;

  // Ending angle bracket
  if (i < size && data[i] == '>')
    return i + 1;
  return 0;
}

// Parse a comment if there's one, according to the HTML5 spec.
// This method assumes that data[0] == '<', so check that before calling it.
// Returns 0 if there's no comment, size of the comment otherwise.
static size_t parse_comment(const uint8_t *data, size_t size) {
  size_t i = 1;
  if (size < 7) return 0;

  // Ensure starting sequence
  if (data[1] == '!' && data[2] == '-' && data[3] == '-') i = 4;
  else return 0;

  // Validate start of comment content
  if (i+2 >= size) return 0;
  if (data[i] == '>') return 0;
  if (data[i] == '-' && data[i+1] == '>') return 0;

  // Collect content
  while (i+2 < size && !(data[i] == '-' && data[i+1] == '-')) i++;
  if (i+2 >= size) return 0;

  // Verify end of comment
  if (data[i+2] != '>') return 0;
  return i + 3;
}

// Augment a start tag with information about the element it represents,
// and normalize all parameters (lowercase tag name and attribute names)
// as well as validation (duplicate attributes, invalid selfclose).
static int validate_start_tag(lanli_tag *tag) {
  // Lowercase name
  to_lower_ascii(tag->name->data, tag->name->size);

  // Lowercase attribute names
  for (size_t a = 0; a < tag->attributes_count; a++) {
    lanli_buffer *attrname = tag->attributes[a].name;
    to_lower_ascii(attrname->data, attrname->size);

    // Make sure there's no duplicate with previous names
    for (size_t b = 0; b < a; b++) {
      if (lanli_buffer_eq(tag->attributes[b].name, attrname->data, attrname->size))
        return 0;
    }
  }

  // Match name against element type
  const element_entry *entry = match_element_type((const char *)tag->name->data, tag->name->size);
  tag->type = entry ? entry->type : LANLI_EL_NORMAL;

  // Only void (or foreign) elements can selfclose
  if (tag->tag_type == LANLI_TAG_SELFCLOSE && tag->type != LANLI_EL_VOID)
    return 0;

  // Initialize opaque to `NULL`
  tag->opaque = NULL;

  return 1;
}



// RENDERING
// Handles the actual processing of HTML snippets.

static void output_start_tag(lanli_document *doc, lanli_buffer *levelbuf, const lanli_tag *tag) {
  lanli_buffer_putc(doc->ob, '<');
  lanli_buffer_put(doc->ob, tag->name->data, tag->name->size);

  for (size_t a = 0; a < tag->attributes_count; a++) {
    lanli_buffer_putc(doc->ob, ' ');
    lanli_tag_attribute *attr = &tag->attributes[a];

    // Attribute name
    lanli_buffer_put(doc->ob, attr->name->data, attr->name->size);

    // Attribute value
    if (attr->has_value) {
      lanli_buffer_putc(doc->ob, '=');
      lanli_buffer_putc(doc->ob, '"');
      levelbuf->size = 0;
      lanli_unescape_html(levelbuf, attr->value->data, attr->value->size);
      lanli_escape_html(doc->ob, levelbuf->data, levelbuf->size);
      lanli_buffer_putc(doc->ob, '"');
    }
  }

  // Selfclose slash
  if (tag->tag_type == LANLI_TAG_SELFCLOSE)
    LANLI_BUFPUTSL(doc->ob, " /");

  lanli_buffer_putc(doc->ob, '>');
}

static inline void close_tag(lanli_document *doc) {
  lanli_tag_stack *stack = doc->stack;
  lanli_tag *tag = &stack->tags[--stack->size];

  LANLI_BUFPUTSL(doc->ob, "</");
  lanli_buffer_put(doc->ob, tag->name->data, tag->name->size);
  lanli_buffer_putc(doc->ob, '>');
}

// Find the ending tag of a raw (or raw escapable) element, according to the
// HTML5 spec. Once found, the content is output accordingly, and the element
// closed. Returns the position where the ending tag ends.
static size_t search_and_close_raw(
  lanli_document *doc,
  lanli_buffer *levelbuf,
  const lanli_tag *tag,
  const uint8_t *data,
  size_t size
) {
  size_t i = 0, mark;

  // Find the end
  lanli_buffer *name = tag->name;
  lanli_tag *otag = &doc->stack->tags[doc->stack->size];
  while (1) {
    while (i < size && data[i] != '<') i++;
    mark = i;
    if (i >= size) break;

    i += parse_end_tag(otag, data + i, size - i);
    if (i > mark) {
      if (lanli_buffer_eq(otag->name, name->data, name->size)) break;
    } else i++;
  }

  // Output content
  if (tag->type == LANLI_EL_RAW) {
    lanli_buffer_put(doc->ob, data, mark);
  } else { // LANLI_EL_RAW_ESCAPABLE
    levelbuf->size = 0;
    lanli_unescape_html(levelbuf, data, mark);
    lanli_escape_html(doc->ob, levelbuf->data, levelbuf->size);
  }

  // Finally, close tag
  close_tag(doc);
  return i;

  // This is actually a bit more permissive than the HTML5 writing part says.
  // FIXME: is this a security risk?
}

static inline size_t match_closing(lanli_tag_stack *stack, const lanli_tag *tag, size_t level) {
  // Lowercase name of end tag
  lanli_buffer *name = tag->name;
  to_lower_ascii(name->data, name->size);

  // Iterate over stack tags
  lanli_tag *orig = stack->orig + stack->size;
  for (size_t i = 0; i < stack->size; i++) {
    --orig;
    if (orig->level < level) break;
    if (orig->level == level && lanli_buffer_eq(orig->name, name->data, name->size))
      return i+1;
  }
  return 0;
}

static void process(lanli_document *doc, const uint8_t *data, size_t size, size_t level) {
  lanli_buffer *levelbuf = doc->levelbuf[level];
  lanli_tag_stack *stack = doc->stack;
  size_t next_level = (doc->levels > level) ? level+1 : 0;

  size_t i = 0, mark;
  while (1) {
    // Skip until '<' or end of file
    mark = i;
    while (i < size && data[i] != '<') i++;

    // Process chunk
    if (i > mark) {
      levelbuf->size = 0;
      lanli_unescape_html(levelbuf, data + mark, i - mark);
      if (next_level)
        process(doc, levelbuf->data, levelbuf->size, next_level);
      else
        lanli_escape_html(doc->ob, levelbuf->data, levelbuf->size);
    }

    if (i >= size) break;
    mark = i;
    lanli_tag *tag = &stack->tags[stack->size];

    // Try to parse start tag
    if (stack->size+1 < stack->asize) {
      i += parse_start_tag(tag, stack->max_attributes, data + mark, size - mark);
      if (i > mark) {
        // Start tag parsed, validate it
        if (!validate_start_tag(tag)) {
          if (!(doc->flags & LANLI_FLAG_INVALID_SKIP))
            lanli_escape_html(doc->ob, data + mark, i - mark);
          continue;
        }
        tag->level = level;
        // Make a copy and call callback
        copy_tag(&stack->orig[stack->size], tag);
        lanli_action action = doc->callback(tag, stack, doc->opaque);
        // Take pertinent actions
        switch (action) {
        case LANLI_ACTION_ACCEPT:
          output_start_tag(doc, levelbuf, tag);
          if (tag->type == LANLI_EL_VOID || tag->tag_type == LANLI_TAG_SELFCLOSE) break;
          stack->size++;
          if (tag->type == LANLI_EL_RAW || tag->type == LANLI_EL_RAW_ESCAPABLE)
            i += search_and_close_raw(doc, levelbuf, tag, data + i, size - i);
          break;
        case LANLI_ACTION_ESCAPE:
          lanli_escape_html(doc->ob, data + mark, i - mark);
          break;
        case LANLI_ACTION_SKIP:
          break;
        case LANLI_ACTION_IGNORE:
          i = mark;
          LANLI_BUFPUTSL(doc->ob, "&lt;");
          i++;
          break;
        case LANLI_ACTION_VERBATIM:
          lanli_buffer_put(doc->ob, data + mark, i - mark);
          break;
        }
        continue;
      }
    }

    // Try to parse end tag
    i += parse_end_tag(tag, data + mark, size - mark);
    if (i > mark) {
      // End tag parsed
      size_t tags_to_close = match_closing(stack, tag, level);
      for (size_t n = 0; n < tags_to_close; n++)
        close_tag(doc);
      if (!tags_to_close && !(doc->flags & LANLI_FLAG_INVALID_SKIP))
        lanli_escape_html(doc->ob, data + mark, i - mark);
      continue;
    }

    // Try to parse comment
    if (doc->flags & LANLI_FLAG_COMMENTS_PARSE) {
      i += parse_comment(data + mark, size - mark);
      if (i > mark) {
        if (!(doc->flags & LANLI_FLAG_COMMENTS_SKIP))
          lanli_buffer_put(doc->ob, data + mark, i - mark);
        continue;
      }
    }

    // Couldn't parse anything, output escaped entity
    LANLI_BUFPUTSL(doc->ob, "&lt;");
    i++;
  }

  // If strict levels are enabled, close open tags before exit
  if (doc->flags & LANLI_FLAG_LEVELS_STRICT) {
    while (stack->size && stack->tags[stack->size-1].level >= level)
      close_tag(doc);
  }
}



// PUBLIC INTERFACE
// Public entry point for HTML processing

void lanli_document_render(
  lanli_document *doc,
  lanli_buffer *ob,
  const uint8_t *data,
  size_t size
) {
  // Prepare the document instance
  doc->ob = ob;
  lanli_buffer_grow(ob, ob->size + size);

  size_t length = doc->levels + 1;
  size_t asize = LEVELBUF_MAX_SIZE;
  if (asize > size) asize = size;
  for (size_t i = 0; i < length; i++)
    lanli_buffer_grow(doc->levelbuf[i], asize);

  doc->stack->size = 0;

  // GO!!
  process(doc, data, size, 0);

  // Close any tags that remain
  while (doc->stack->size)
    close_tag(doc);

  // Free buffer data
  for (size_t i = 0; i < length; i++)
    lanli_buffer_reset(doc->levelbuf[i]);

  reset_tag_stack(doc->stack);
}
