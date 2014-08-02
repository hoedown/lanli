/**
 * This callback is officially supported and maintained with Hoedown.
 * At the same time, it serves as reference and showcase of callback features.
 *
 * The callback enforces a strict HTML structure, and is designed for use
 * in HTML that describes static content such as a post or a comment.
 *
 * Tags need to be valid within their context (a <li> must be inside a <ul> or
 * <ol>) and they need to have only valid attributes with valid values.
 **/

#ifndef HOEDOWN_CALLBACKS_STRICT_POST_H
#define HOEDOWN_CALLBACKS_STRICT_POST_H

#include "../document.h"

#ifdef __cplusplus
extern "C" {
#endif


hoedown_action hoedown_callback_strict_post(
  hoedown_tag *tag,
  const hoedown_tag_stack *stack,
  void *opaque
);


#ifdef __cplusplus
}
#endif

#endif /** HOEDOWN_CALLBACKS_STRICT_POST_H **/
