/* document.h - HTML postprocessor */

#ifndef HOEDOWN_DOCUMENT_H
#define HOEDOWN_DOCUMENT_H

#include "buffer.h"

#ifdef __cplusplus
extern "C" {
#endif


/*********
 * FLAGS *
 *********/

typedef enum hoedown_tag_type {
  HOEDOWN_TAG_OPEN,
  HOEDOWN_TAG_CLOSE,
  HOEDOWN_TAG_SELFCLOSE
} hoedown_tag_type;

typedef enum hoedown_element_type {
  HOEDOWN_EL_NORMAL,
  HOEDOWN_EL_VOID,
  HOEDOWN_EL_RAW,
  HOEDOWN_EL_RAW_ESCAPABLE
} hoedown_element_type;

typedef enum hoedown_flags {
  HOEDOWN_FLAG_COMMENTS_PARSE = (1 << 0),
  HOEDOWN_FLAG_COMMENTS_SKIP = (1 << 1),
  HOEDOWN_FLAG_INVALID_SKIP = (1 << 2),
  HOEDOWN_FLAG_ESCAPE_SECURE = (1 << 3),
  HOEDOWN_FLAG_LEVELS_STRICT = (1 << 4)
} hoedown_flags;

typedef enum hoedown_action {
  HOEDOWN_ACTION_ACCEPT,
  HOEDOWN_ACTION_ESCAPE,
  HOEDOWN_ACTION_SKIP,
  HOEDOWN_ACTION_IGNORE,
  HOEDOWN_ACTION_VERBATIM
} hoedown_action;


/*********
 * TYPES *
 *********/

struct hoedown_tag_attribute {
  hoedown_buffer *name;
  hoedown_buffer *value;
  int has_value;
};
typedef struct hoedown_tag_attribute hoedown_tag_attribute;

struct hoedown_tag {
  size_t level;
  hoedown_buffer *name;
  hoedown_tag_attribute *attributes;
  size_t attributes_count;
  hoedown_tag_type tag_type;
  hoedown_element_type type;
  void *opaque;
};
typedef struct hoedown_tag hoedown_tag;

struct hoedown_tag_stack {
  hoedown_tag *tags;
  hoedown_tag *orig;
  size_t size;
  size_t asize;
  size_t max_attributes;
};
typedef struct hoedown_tag_stack hoedown_tag_stack;

typedef hoedown_action (*hoedown_callback)(hoedown_tag *tag, const hoedown_tag_stack *stack, void *opaque);

struct hoedown_document;
typedef struct hoedown_document hoedown_document;


/*************
 * FUNCTIONS *
 *************/

/* hoedown_document_new: allocate a new document processor */
hoedown_document *hoedown_document_new(
  hoedown_callback callback,
  void *opaque,
  hoedown_flags flags,
  size_t levels,
  size_t max_nesting,
  size_t max_attributes
) __attribute__ ((malloc));

/* hoedown_document_render: process HTML using the document processor */
void hoedown_document_render(
  hoedown_document *doc,
  hoedown_buffer *ob,
  const uint8_t *data,
  size_t size
);

/* hoedown_document_free: free the document processor */
void hoedown_document_free(hoedown_document *doc);


#ifdef __cplusplus
}
#endif

#endif /** HOEDOWN_DOCUMENT_H **/
