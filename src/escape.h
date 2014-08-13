/* escape.h - escape utilities */

#ifndef LANLI_ESCAPE_H
#define LANLI_ESCAPE_H

#include "buffer.h"

#ifdef __cplusplus
extern "C" {
#endif


/*************
 * FUNCTIONS *
 *************/

/* lanli_escape_html: escape HTML */
void lanli_escape_html(lanli_buffer *ob, const uint8_t *data, size_t size, int secure);

/* lanli_unescape_html: unescape HTML */
void lanli_unescape_html(lanli_buffer *ob, const uint8_t *data, size_t size);


#ifdef __cplusplus
}
#endif

#endif /** LANLI_ESCAPE_H **/
