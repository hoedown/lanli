/* document.h - HTML postprocessor */

#ifndef LANLI_DOCUMENT_H
#define LANLI_DOCUMENT_H

#include "buffer.h"

#ifdef __cplusplus
extern "C" {
#endif


/*********
 * FLAGS *
 *********/

typedef enum lanli_tag_type {
  LANLI_TAG_OPEN,
  LANLI_TAG_CLOSE,
  LANLI_TAG_SELFCLOSE
} lanli_tag_type;

typedef enum lanli_element_type {
  LANLI_EL_NORMAL,
  LANLI_EL_VOID,
  LANLI_EL_RAW,
  LANLI_EL_RAW_ESCAPABLE
} lanli_element_type;

typedef enum lanli_flags {
  LANLI_FLAG_COMMENTS_PARSE = (1 << 0),
  LANLI_FLAG_COMMENTS_SKIP = (1 << 1),
  LANLI_FLAG_INVALID_SKIP = (1 << 2),
  LANLI_FLAG_ESCAPE_SECURE = (1 << 3),
  LANLI_FLAG_LEVELS_STRICT = (1 << 4)
} lanli_flags;

typedef enum lanli_action {
  LANLI_ACTION_ACCEPT,
  LANLI_ACTION_ESCAPE,
  LANLI_ACTION_SKIP,
  LANLI_ACTION_IGNORE,
  LANLI_ACTION_VERBATIM
} lanli_action;


/*********
 * TYPES *
 *********/

struct lanli_tag_attribute {
  lanli_buffer *name;
  lanli_buffer *value;
  int has_value;
};
typedef struct lanli_tag_attribute lanli_tag_attribute;

struct lanli_tag {
  size_t level;
  lanli_buffer *name;
  lanli_tag_attribute *attributes;
  size_t attributes_count;
  lanli_tag_type tag_type;
  lanli_element_type type;
  void *opaque;
};
typedef struct lanli_tag lanli_tag;

struct lanli_tag_stack {
  lanli_tag *tags;
  lanli_tag *orig;
  size_t size;
  size_t asize;
  size_t max_attributes;
};
typedef struct lanli_tag_stack lanli_tag_stack;

typedef lanli_action (*lanli_callback)(lanli_tag *tag, const lanli_tag_stack *stack, void *opaque);

struct lanli_document;
typedef struct lanli_document lanli_document;


/*************
 * FUNCTIONS *
 *************/

/* lanli_document_new: allocate a new document processor */
lanli_document *lanli_document_new(
  lanli_callback callback,
  void *opaque,
  lanli_flags flags,
  size_t levels,
  size_t max_nesting,
  size_t max_attributes
) __attribute__ ((malloc));

/* lanli_document_render: process HTML using the document processor */
void lanli_document_render(
  lanli_document *doc,
  lanli_buffer *ob,
  const uint8_t *data,
  size_t size
);

/* lanli_document_free: free the document processor */
void lanli_document_free(lanli_document *doc);


#define LANLI_MAX_NESTING__MAX 64
#define LANLI_MAX_NESTING__MIN  1
#define LANLI_MAX_ATTRIBUTES__MAX 64
#define LANLI_MAX_ATTRIBUTES__MIN 0
#define LANLI_LEVELS__MAX 10
#define LANLI_LEVELS__MIN 0


#ifdef __cplusplus
}
#endif

#endif /** LANLI_DOCUMENT_H **/
