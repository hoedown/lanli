#include "escape.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>


#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)

#define _isxdigit(c) (strchr("0123456789ABCDEFabcdef", (c)) != NULL)
#define _isdigit(c) ((c) >= '0' && (c) <= '9')

#include "_html_entities.h"


/**
 * According to the OWASP rules:
 *
 * & --> &amp;
 * < --> &lt;
 * > --> &gt;
 * " --> &quot;
 * ' --> &#x27;     &apos; is not recommended
 * / --> &#x2F;     forward slash is included as it helps end an HTML entity
 *
 */
static const uint8_t HTML_ESCAPE_TABLE[UINT8_MAX+1] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const char *HTML_ESCAPES[] = {
        "",
        "&quot;",
        "&amp;",
        "&#39;",
        "&lt;",
        "&gt;"
};

void lanli_escape_html(lanli_buffer *ob, const uint8_t *data, size_t size) {
  size_t i = 0, mark;

  while (1) {
    mark = i;
    while (i < size && HTML_ESCAPE_TABLE[data[i]] == 0) i++;

    /* Optimization for cases where there's nothing to escape */
    if (mark == 0 && i >= size) {
      lanli_buffer_put(ob, data, size);
      return;
    }

    if (likely(i > mark))
      lanli_buffer_put(ob, data + mark, i - mark);

    if (i >= size) break;

    lanli_buffer_puts(ob, HTML_ESCAPES[HTML_ESCAPE_TABLE[data[i]]]);
    i++;
  }
}



static size_t unescape_entity(lanli_buffer *ob, const uint8_t *data, size_t size) {
  size_t i = 0;

  if (size > 3 && data[0] == '#') {
    int codepoint = 0;

    if (_isdigit(data[1])) {
      for (i = 1; i < size && _isdigit(data[i]); ++i)
        codepoint = (codepoint * 10) + (data[i] - '0');
    }

    else if (data[1] == 'x' || data[1] == 'X') {
      for (i = 2; i < size && _isxdigit(data[i]); ++i)
        codepoint = (codepoint * 16) + ((data[i] | 32) % 39 - 9);
      if (i == 2) return 0;
    }

    if (i < size && data[i] == ';') {
      lanli_buffer_put_utf8(ob, codepoint);
      return i + 1;
    }
  }

  else {
    if (size > MAX_WORD_LENGTH)
      size = MAX_WORD_LENGTH;

    for (i = MIN_WORD_LENGTH; i < size; ++i) {
      if (data[i] == ' ')
        break;

      if (data[i] == ';') {
        const struct html_entity *entity = find_entity((const char *)data, i);

        if (entity != NULL) {
          lanli_buffer_put(ob, entity->utf8, entity->size);
          return i + 1;
        }

        break;
      }
    }
  }

  lanli_buffer_putc(ob, '&');
  return 0;
}

void lanli_unescape_html(lanli_buffer *ob, const uint8_t *data, size_t size) {
  size_t i = 0, mark;

  while (1) {
    mark = i;
    while (i < size && data[i] != '&') i++;

    /* Optimization for cases where there's nothing to escape */
    if (mark == 0 && i >= size) {
      lanli_buffer_put(ob, data, size);
      return;
    }

    if (likely(i > mark))
      lanli_buffer_put(ob, data + mark, i - mark);

    if (i >= size) break;

    i++;
    i += unescape_entity(ob, data + i, size - i);
  }
}
