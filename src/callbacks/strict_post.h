/**
 * This callback is officially supported and maintained with Lanli.
 * At the same time, it serves as reference and showcase of callback features.
 *
 * The callback enforces a strict HTML structure, and is designed for use
 * in HTML that describes static content such as a post or a comment.
 *
 * Tags need to be valid within their context (a <li> must be inside a <ul> or
 * <ol>) and they need to have only valid attributes with valid values.
 **/

#ifndef LANLI_CALLBACKS_STRICT_POST_H
#define LANLI_CALLBACKS_STRICT_POST_H

#include "../document.h"

#ifdef __cplusplus
extern "C" {
#endif


lanli_action lanli_callback_strict_post(
  lanli_tag *tag,
  const lanli_tag_stack *stack,
  void *opaque
);


#ifdef __cplusplus
}
#endif

#endif /** LANLI_CALLBACKS_STRICT_POST_H **/
