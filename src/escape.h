/* escape.h - escape utilities */

#ifndef HOEDOWN_ESCAPE_H
#define HOEDOWN_ESCAPE_H

#include "buffer.h"

#ifdef __cplusplus
extern "C" {
#endif


/*************
 * FUNCTIONS *
 *************/

/* hoedown_escape_html: escape HTML */
void hoedown_escape_html(hoedown_buffer *ob, const uint8_t *data, size_t size, int secure);

/* hoedown_unescape_html: unescape HTML */
void hoedown_unescape_html(hoedown_buffer *ob, const uint8_t *data, size_t size);

/* hoedown_escape_href: escape (part of) a URL */
void hoedown_escape_href(hoedown_buffer *ob, const uint8_t *data, size_t size);


#ifdef __cplusplus
}
#endif

#endif /** HOEDOWN_ESCAPE_H **/
