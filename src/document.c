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
  ((int)VAR < HOEDOWN_##NAME##__MIN ? HOEDOWN_##NAME##__MIN : \
  ((int)VAR > HOEDOWN_##NAME##__MAX ? HOEDOWN_##NAME##__MAX : \
VAR))


// TAG
// Methods to create and destroy tag objects

void init_tag(hoedown_tag *tag, size_t max_attributes) {
  tag->attributes = hoedown_calloc(max_attributes, sizeof(hoedown_tag_attribute));
  for (size_t a = 0; a < max_attributes; a++) {
    tag->attributes[a].name = hoedown_buffer_new(ATTR_NAME_UNIT);
    tag->attributes[a].value = hoedown_buffer_new(ATTR_VALUE_UNIT);
  }

  tag->name = hoedown_buffer_new(TAG_NAME_UNIT);
}

void uninit_tag(hoedown_tag *tag, size_t max_attributes) {
  hoedown_buffer_free(tag->name);
  for (size_t a = 0; a < max_attributes; a++) {
    hoedown_buffer_free(tag->attributes[a].name);
    hoedown_buffer_free(tag->attributes[a].value);
  }
  free(tag->attributes);
}

void reset_tag(hoedown_tag *tag, size_t max_attributes) {
  hoedown_buffer_reset(tag->name);
  for (size_t a = 0; a < max_attributes; a++) {
    hoedown_buffer_reset(tag->attributes[a].name);
    hoedown_buffer_reset(tag->attributes[a].value);
  }
}

void copy_tag(hoedown_tag *dst, const hoedown_tag *src) {
  dst->level = src->level;
  hoedown_buffer_set(dst->name, src->name->data, src->name->size);

  for (size_t a = 0; a < src->attributes_count; a++) {
    hoedown_tag_attribute *src_attr = &src->attributes[a];
    hoedown_tag_attribute *dst_attr = &dst->attributes[a];

    hoedown_buffer_set(dst_attr->name, src_attr->name->data, src_attr->name->size);
    hoedown_buffer_set(dst_attr->value, src_attr->value->data, src_attr->value->size);
    dst_attr->has_value = src_attr->has_value;
  }
  dst->attributes_count = src->attributes_count;

  dst->tag_type = src->tag_type;
  dst->type = src->type;
}


// TAG STACK
// Holds the fixed-size stack of elements nested.

hoedown_tag_stack *new_tag_stack(size_t max_nesting, size_t max_attributes) __attribute__ ((malloc));
hoedown_tag_stack *new_tag_stack(size_t max_nesting, size_t max_attributes) {
  hoedown_tag_stack *stack = hoedown_malloc(sizeof(hoedown_tag_stack));
  stack->max_attributes = max_attributes;
  stack->asize = max_nesting;

  stack->tags = hoedown_calloc(max_nesting, sizeof(hoedown_tag));
  stack->orig = hoedown_calloc(max_nesting, sizeof(hoedown_tag));

  for (size_t i = 0; i < max_nesting; i++) {
    init_tag(&stack->tags[i], max_attributes);
    init_tag(&stack->orig[i], max_attributes);
  }

  return stack;
}

void free_tag_stack(hoedown_tag_stack *stack) {
  for (size_t i = 0; i < stack->asize; i++) {
    uninit_tag(&stack->tags[i], stack->max_attributes);
    uninit_tag(&stack->orig[i], stack->max_attributes);
  }

  free(stack->tags);
  free(stack->orig);

  free(stack);
}

void reset_tag_stack(hoedown_tag_stack *stack) {
  for (size_t i = 0; i < stack->asize; i++) {
    reset_tag(&stack->tags[i], stack->max_attributes);
    reset_tag(&stack->orig[i], stack->max_attributes);
  }
}


// MAIN INSTANCE
// Definition of hoedown_document and its (de)constructor

struct hoedown_document {
  hoedown_callback callback;
  void *opaque;
  hoedown_flags flags;
  size_t levels;

  // extracted flags
  int escape_secure;

  // preallocated resources for render
  hoedown_buffer *ob;
  hoedown_buffer **levelbuf;
  hoedown_tag_stack *stack;
};

hoedown_document *hoedown_document_new(
  hoedown_callback callback,
  void *opaque,
  hoedown_flags flags,
  size_t levels,
  size_t max_nesting,
  size_t max_attributes
) {
  hoedown_document *doc = hoedown_malloc(sizeof(hoedown_document));

  doc->callback = callback;
  doc->opaque = opaque;
  doc->flags = flags;
  doc->levels = RESTRICT_VALUE(levels, LEVELS);

  doc->escape_secure = flags & HOEDOWN_FLAG_ESCAPE_SECURE;

  size_t length = levels + 1;
  doc->levelbuf = hoedown_calloc(length, sizeof(hoedown_buffer *));
  for (size_t i = 0; i < length; i++)
    doc->levelbuf[i] = hoedown_buffer_new(LEVELBUF_UNIT);

  max_nesting = RESTRICT_VALUE(max_nesting, MAX_NESTING);
  max_attributes = RESTRICT_VALUE(max_attributes, MAX_ATTRIBUTES);
  doc->stack = new_tag_stack(max_nesting, max_attributes);

  return doc;
}

void hoedown_document_free(hoedown_document *doc) {
  free_tag_stack(doc->stack);

  size_t length = doc->levels + 1;
  for (size_t i = 0; i < length; i++)
    hoedown_buffer_free(doc->levelbuf[i]);
  free(doc->levelbuf);

  free(doc);
}



// RENDERING LOGIC
// ---------------

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


// HTML PARSING & VALIDATION

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

// Parse an attribute value if there's one, according to the HTML5 spec.
// Sets parsed value to the buffer passed.
// Returns 0 if there's no value, size of the value otherwise.
size_t parse_attribute_value(hoedown_buffer *value, const uint8_t *data, size_t size) {
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
    hoedown_buffer_set(value, data + mark, i - mark);

    return i + 1;
  }

  // Unquoted attribute
  mark = i;
  while (i < size && !is_space(data[i]) && !is_attr_sensitive(data[i])) i++;
  if (mark == i) return 0;
  hoedown_buffer_set(value, data + mark, i - mark);

  return i;
}

// Parse an attribute if there's one, according to the HTML5 spec.
// Returns 0 if there's no valid attribute, size of the attribute otherwise.
size_t parse_attribute(hoedown_tag_attribute *attr, const uint8_t *data, size_t size) {
  size_t i = 0, mark;

  // There must be at least one space character as separation
  mark = i;
  while (i < size && is_space(data[i])) i++;
  if (mark == i) return 0;

  // Collect attribute name
  mark = i;
  while (i < size && is_attr_name_char(data[i])) i++;
  if (mark == i) return 0;
  hoedown_buffer_set(attr->name, data + mark, i - mark);

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
size_t parse_start_tag(hoedown_tag *tag, size_t max_attributes, const uint8_t *data, size_t size) {
  size_t i = 1, mark;

  // Collect the tag name
  mark = i;
  while (i < size && is_alnum_ascii(data[i])) i++;
  if (mark == i) return 0;
  hoedown_buffer_set(tag->name, data + mark, i - mark);

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
  tag->tag_type = HOEDOWN_TAG_OPEN;
  if (i < size && data[i] == '/') {
    tag->tag_type = HOEDOWN_TAG_SELFCLOSE;
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
size_t parse_end_tag(hoedown_tag *tag, const uint8_t *data, size_t size) {
  size_t i = 1, mark;

  // Slash
  if (i < size && data[i] == '/') i++;
  else return 0;

  // Collect tag name
  mark = i;
  while (i < size && is_alnum_ascii(data[i])) i++;
  if (mark == i) return 0;
  hoedown_buffer_set(tag->name, data + mark, i - mark);

  // Collect optional spacing
  while (i < size && is_space(data[i])) i++;

  // Ending angle bracket
  if (i < size && data[i] == '>')
    return i + 1;
  return 0;
}

// Validate that a comment's content is allowed, according to the HTML5 spec.
static inline int is_valid_comment_content(const uint8_t *data, size_t size) {
  if (size == 0) return 1;
  if (data[0] == '>') return 0;
  if (data[size - 1] == '-') return 0;

  if (size == 1) return 1;
  if (data[0] == '-' && data[1] == '>') return 0;

  for (size_t i = 0; i+1 < size; i++)
    if (data[i] == '-' && data[i+1] == '-') return 0;
  return 1;
}

// Parse a comment if there's one, according to the HTML5 spec.
// This method assumes that data[0] == '<', so check that before calling it.
// Returns 0 if there's no comment, size of the comment otherwise.
size_t parse_comment(const uint8_t *data, size_t size) {
  size_t i = 1, mark;
  if (size < 7) return 0;

  // Ensure starting sequence
  if (data[1] == '!' && data[2] == '-' && data[3] == '-') i = 4;
  else return 0;

  // Collect content
  mark = i;
  while (1) {
    if (i+2 >= size) return 0;
    if (data[i] == '-' && data[i+1] == '-' && data[i+2] == '>') break;
    i++;
  }

  // Validate content
  if (is_valid_comment_content(data + mark, i - mark))
    return i + 3;
  return 0;
}

// Augment a start tag with information about the element it represents,
// and normalize all parameters (lowercase tag name and attribute names)
// as well as validation (duplicate attributes, invalid selfclose).
int validate_start_tag(hoedown_tag *tag) {
  // Lowercase name
  to_lower_ascii(tag->name->data, tag->name->size);

  // Lowercase attribute names
  for (size_t a = 0; a < tag->attributes_count; a++) {
    hoedown_buffer *attrname = tag->attributes[a].name;
    to_lower_ascii(attrname->data, attrname->size);

    // Make sure there's no duplicate with previous names
    for (size_t b = 0; b < a; b++) {
      if (hoedown_buffer_eq(tag->attributes[b].name, attrname->data, attrname->size))
        return 0;
    }
  }

  // Match name against element type
  const element_entry *entry = match_element_type((const char *)tag->name->data, tag->name->size);
  tag->type = entry ? entry->type : HOEDOWN_EL_NORMAL;

  // Only void (or foreign) elements can selfclose
  if (tag->tag_type == HOEDOWN_TAG_SELFCLOSE && tag->type != HOEDOWN_EL_VOID)
    return 0;

  return 1;
}


// RENDERING
// Handles the actual processing of HTML snippets.

void output_start_tag(hoedown_document *doc, hoedown_buffer *levelbuf, const hoedown_tag *tag) {
  hoedown_buffer_putc(doc->ob, '<');
  hoedown_buffer_put(doc->ob, tag->name->data, tag->name->size);

  for (size_t a = 0; a < tag->attributes_count; a++) {
    hoedown_buffer_putc(doc->ob, ' ');
    hoedown_tag_attribute *attr = &tag->attributes[a];

    // Attribute name
    hoedown_buffer_put(doc->ob, attr->name->data, attr->name->size);

    // Attribute value
    if (attr->has_value) {
      hoedown_buffer_putc(doc->ob, '=');
      hoedown_buffer_putc(doc->ob, '"');
      levelbuf->size = 0;
      hoedown_unescape_html(levelbuf, attr->value->data, attr->value->size);
      hoedown_escape_html(doc->ob, levelbuf->data, levelbuf->size, doc->escape_secure);
      hoedown_buffer_putc(doc->ob, '"');
    }
  }

  // Selfclose slash
  if (tag->tag_type == HOEDOWN_TAG_SELFCLOSE)
    HOEDOWN_BUFPUTSL(doc->ob, " /");

  hoedown_buffer_putc(doc->ob, '>');
}

static inline void close_tag(hoedown_document *doc) {
  hoedown_tag_stack *stack = doc->stack;
  hoedown_tag *tag = &stack->tags[--stack->size];

  HOEDOWN_BUFPUTSL(doc->ob, "</");
  hoedown_buffer_put(doc->ob, tag->name->data, tag->name->size);
  hoedown_buffer_putc(doc->ob, '>');
}

// Find the ending tag of a raw (or raw escapable) element, according to the
// HTML5 spec. Once found, the content is output accordingly, and the element
// closed. Returns the position where the ending tag ends.
size_t search_and_close_raw(
  hoedown_document *doc,
  hoedown_buffer *levelbuf,
  const hoedown_tag *tag,
  const uint8_t *data,
  size_t size
) {
  size_t i = 0, mark;

  // Find the end
  hoedown_buffer *name = tag->name;
  hoedown_tag *otag = &doc->stack->tags[doc->stack->size];
  while (1) {
    while (i < size && data[i] != '<') i++;
    mark = i;
    if (i >= size) break;

    i += parse_end_tag(otag, data + i, size - i);
    if (i > mark) {
      if (hoedown_buffer_eq(otag->name, name->data, name->size)) break;
    } else i++;
  }

  // Output content
  if (tag->type == HOEDOWN_EL_RAW) {
    hoedown_buffer_put(doc->ob, data, mark);
  } else { // HOEDOWN_EL_RAW_ESCAPABLE
    levelbuf->size = 0;
    hoedown_unescape_html(levelbuf, data, mark);
    hoedown_escape_html(doc->ob, levelbuf->data, levelbuf->size, doc->escape_secure);
  }

  // Finally, close tag
  close_tag(doc);
  return i;

  // This is actually a bit more permissive than the HTML5 writing part says.
  // FIXME: is this a security risk?
}

static inline size_t match_closing(hoedown_tag_stack *stack, const hoedown_tag *tag, size_t level) {
  // Lowercase name of end tag
  hoedown_buffer *name = tag->name;
  to_lower_ascii(name->data, name->size);

  // Iterate over stack tags
  hoedown_tag *orig = stack->orig + stack->size;
  for (size_t i = 0; i < stack->size; i++) {
    --orig;
    if (orig->level == level && hoedown_buffer_eq(orig->name, name->data, name->size))
      return i+1;
  }
  return 0;
}

void process(hoedown_document *doc, const uint8_t *data, size_t size, size_t level) {
  hoedown_buffer *levelbuf = doc->levelbuf[level];
  hoedown_tag_stack *stack = doc->stack;
  size_t next_level = (doc->levels > level) ? level+1 : 0;

  size_t i = 0, mark;
  while (1) {
    // Skip until '<' or end of file
    mark = i;
    while (i < size && data[i] != '<') i++;

    // Process chunk
    if (i > mark) {
      levelbuf->size = 0;
      hoedown_unescape_html(levelbuf, data + mark, i - mark);
      if (next_level)
        process(doc, levelbuf->data, levelbuf->size, next_level);
      else
        hoedown_escape_html(doc->ob, levelbuf->data, levelbuf->size, doc->escape_secure);
    }

    if (i >= size) break;
    mark = i;
    hoedown_tag *tag = &stack->tags[stack->size];

    // Try to parse start tag
    if (stack->size+1 < stack->asize) {
      i += parse_start_tag(tag, stack->max_attributes, data + mark, size - mark);
      if (i > mark) {
        // Start tag parsed, validate it
        if (!validate_start_tag(tag)) {
          if (!(doc->flags & HOEDOWN_FLAG_INVALID_SKIP))
            hoedown_escape_html(doc->ob, data + mark, i - mark, doc->escape_secure);
          continue;
        }
        tag->level = level;
        // Make a copy and call callback
        copy_tag(&stack->orig[stack->size], tag);
        hoedown_action action = doc->callback(tag, stack, doc->opaque);
        // Take pertinent actions
        switch (action) {
        case HOEDOWN_ACTION_ACCEPT:
          output_start_tag(doc, levelbuf, tag);
          if (tag->type == HOEDOWN_EL_VOID || tag->tag_type == HOEDOWN_TAG_SELFCLOSE) break;
          stack->size++;
          if (tag->type == HOEDOWN_EL_RAW || tag->type == HOEDOWN_EL_RAW_ESCAPABLE)
            i += search_and_close_raw(doc, levelbuf, tag, data + i, size - i);
          break;
        case HOEDOWN_ACTION_ESCAPE:
          hoedown_escape_html(doc->ob, data + mark, i - mark, doc->escape_secure);
          break;
        case HOEDOWN_ACTION_SKIP:
          break;
        case HOEDOWN_ACTION_IGNORE:
          i = mark;
          HOEDOWN_BUFPUTSL(doc->ob, "&lt;");
          i++;
          break;
        case HOEDOWN_ACTION_VERBATIM:
          hoedown_buffer_put(doc->ob, data + mark, i - mark);
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
      if (!tags_to_close && !(doc->flags & HOEDOWN_FLAG_INVALID_SKIP))
        hoedown_escape_html(doc->ob, data + mark, i - mark, doc->escape_secure);
      continue;
    }

    // Try to parse comment
    if (doc->flags & HOEDOWN_FLAG_COMMENTS_PARSE) {
      i += parse_comment(data + mark, size - mark);
      if (i > mark) {
        if (!(doc->flags & HOEDOWN_FLAG_COMMENTS_SKIP))
          hoedown_buffer_put(doc->ob, data + mark, i - mark);
        continue;
      }
    }

    // Couldn't parse anything, output escaped entity
    HOEDOWN_BUFPUTSL(doc->ob, "&lt;");
    i++;
  }

  // If strict levels are enabled, close open tags before exit
  if (doc->flags & HOEDOWN_FLAG_LEVELS_STRICT) {
    while (stack->size && stack->tags[stack->size-1].level >= level)
      close_tag(doc);
  }
}


// PUBLIC INTERFACE
// Public entry point for HTML processing

void hoedown_document_render(
  hoedown_document *doc,
  hoedown_buffer *ob,
  const uint8_t *data,
  size_t size
) {
  // Prepare the document instance
  doc->ob = ob;
  hoedown_buffer_grow(ob, ob->size + size);

  size_t length = doc->levels + 1;
  size_t asize = LEVELBUF_MAX_SIZE;
  if (asize > size) asize = size;
  for (size_t i = 0; i < length; i++)
    hoedown_buffer_grow(doc->levelbuf[i], asize);

  doc->stack->size = 0;

  // GO!!
  process(doc, data, size, 0);

  // Close any tags that remain
  while (doc->stack->size)
    close_tag(doc);

  // Free buffer data
  for (size_t i = 0; i < length; i++)
    hoedown_buffer_reset(doc->levelbuf[i]);

  reset_tag_stack(doc->stack);
}
