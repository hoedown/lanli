#include "strict_post.h"

#include <string.h>
#include <ctype.h>

// The list of allowed tags & attributes can be found at
// _strict_post_tags.gperf. If you modify it, remember to
// regenerate the header file by running:
//
//     make src/callbacks/_strict_post_tags.h
//
#include "_strict_post_tags.h"


// GENERAL UTILITIES

int is_safe_link(const uint8_t *data, size_t size) {
  static const size_t valid_uris_count = 5;
  static const char *valid_uris[] = {
    "/", "http://", "https://", "ftp://", "mailto:"
  };

  for (size_t i = 0; i < valid_uris_count; ++i) {
    const char *prefix = valid_uris[i];
    size_t prefix_size = strlen(prefix);

    if (size > prefix_size &&
      strncmp((char *)data, prefix, prefix_size) == 0 &&
      isalnum(data[prefix_size]))
    return 1;
  }

  return 0;
}


// ACTUAL CALLBACK CODE

hoedown_tag_attribute *find_attribute(const hoedown_tag *tag, const attribute_entry *attr) {
  for (size_t a = 0; a < tag->attributes_count; a++) {
    const char *name = hoedown_buffer_cstr(tag->attributes[a].name);
    if (strcmp(name, attr->name)==0) return tag->attributes + a;
  }
  return NULL;
}

int validate_attribute(hoedown_tag *tag, hoedown_tag_attribute *attr) {
  const char *name = hoedown_buffer_cstr(attr->name);

  // Attribute is a URL, validate it
  if (strcmp(name, "src")==0 || strcmp(name, "href")==0) {
    if (!is_safe_link(attr->value->data, attr->value->size)) return 0;
  }

  return 1;
}

#define ENFORCE(CONDITION) if (!(CONDITION)) return HOEDOWN_ACTION_ESCAPE

hoedown_action hoedown_callback_strict_post(
  hoedown_tag *tag,
  const hoedown_tag_stack *stack,
  void *opaque
) {
  // Try to match the current tag against our list
  const tag_entry *current = find_tag((const char *)tag->name->data, tag->name->size);
  ENFORCE(current);
  tag->opaque = (void *)current;

  // This tag must be of type accepted by the parent
  semantic_type accepted_types;
  if (stack->size) {
    const hoedown_tag *parent_tag = stack->tags[stack->size-1];
    const tag_entry *parent = (const tag_entry *) parent_tag->opaque;
    accepted_types = parent->accepted_types;
  } else {
    accepted_types = SEMANTIC_TYPE_BLOCK;
  }
  ENFORCE(current->type & accepted_types);

  // Validate attributes
  size_t present_attributes = 0;
  for (size_t a = 0; a < current->attributes_count; a++) {
    const attribute_entry *attr = current->attributes + a;
    // Try to find the attribute in the tag
    hoedown_tag_attribute *orig_attr = find_attribute(tag, attr);
    if (!orig_attr) {
      ENFORCE(attr->optional);
      continue;
    }
    // Validate the attribute
    if (attr->needs_value) ENFORCE(orig_attr->has_value);
    ENFORCE(validate_attribute(tag, orig_attr));
    present_attributes++;
  }

  // If there are other attributes in the tag (not in our allowed list), fail
  ENFORCE(present_attributes == tag->attributes_count);

  // Replace the name if necessary
  if (current->new_name) hoedown_buffer_sets(tag->name, current->new_name);

  // If it's a void element, make it selfclose
  if (tag->type == HOEDOWN_EL_VOID)
    tag->tag_type = HOEDOWN_TAG_SELFCLOSE;

  // The tag survived! Yay!
  return HOEDOWN_ACTION_ACCEPT;
}
