#include "buffer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void lanli_buffer_init(
  lanli_buffer *buf,
  size_t unit,
  lanli_realloc_callback data_realloc,
  lanli_free_callback data_free,
  lanli_free_callback buffer_free
) {
  assert(buf);

  buf->data = NULL;
  buf->size = buf->asize = 0;
  buf->unit = unit;
  buf->data_realloc = data_realloc;
  buf->data_free = data_free;
  buf->buffer_free = buffer_free;
}

lanli_buffer *lanli_buffer_new(size_t unit) {
  lanli_buffer *ret = lanli_malloc(sizeof (lanli_buffer));
  lanli_buffer_init(ret, unit, lanli_realloc, free, free);
  return ret;
}

void lanli_buffer_free(lanli_buffer *buf) {
  if (!buf) return;

  buf->data_free(buf->data);

  if (buf->buffer_free)
    buf->buffer_free(buf);
}

void lanli_buffer_reset(lanli_buffer *buf) {
  assert(buf && buf->unit);

  buf->data_free(buf->data);
  buf->data = NULL;
  buf->size = buf->asize = 0;
}

void lanli_buffer_grow(lanli_buffer *buf, size_t neosz) {
  size_t neoasz;
  assert(buf && buf->unit);

  if (buf->asize >= neosz)
    return;

  neoasz = buf->asize + buf->unit;
  while (neoasz < neosz)
    neoasz += buf->unit;

  buf->data = buf->data_realloc(buf->data, neoasz);
  buf->asize = neoasz;
}

void lanli_buffer_put(lanli_buffer *buf, const uint8_t *data, size_t size) {
  assert(buf && buf->unit);

  if (buf->size + size > buf->asize)
    lanli_buffer_grow(buf, buf->size + size);

  memcpy(buf->data + buf->size, data, size);
  buf->size += size;
}

void lanli_buffer_puts(lanli_buffer *buf, const char *str) {
  lanli_buffer_put(buf, (const uint8_t *)str, strlen(str));
}

void lanli_buffer_putc(lanli_buffer *buf, uint8_t c) {
  assert(buf && buf->unit);

  if (buf->size >= buf->asize)
    lanli_buffer_grow(buf, buf->size + 1);

  buf->data[buf->size] = c;
  buf->size += 1;
}

void lanli_buffer_set(lanli_buffer *buf, const uint8_t *data, size_t size) {
  assert(buf && buf->unit);

  if (size > buf->asize)
    lanli_buffer_grow(buf, size);

  memcpy(buf->data, data, size);
  buf->size = size;
}

void lanli_buffer_sets(lanli_buffer *buf, const char *str) {
  lanli_buffer_set(buf, (const uint8_t *)str, strlen(str));
}

int lanli_buffer_eq(const lanli_buffer *buf, const uint8_t *data, size_t size) {
  if (buf->size != size) return 0;
  return memcmp(buf->data, data, size) == 0;
}

int lanli_buffer_eqs(const lanli_buffer *buf, const char *str) {
  return lanli_buffer_eq(buf, (const uint8_t *)str, strlen(str));
}

int lanli_buffer_prefix(const lanli_buffer *buf, const char *prefix) {
  assert(buf && buf->unit);

  for (size_t i = 0; i < buf->size; ++i) {
    if (prefix[i] == 0)
      return 0;

    if (buf->data[i] != prefix[i])
      return buf->data[i] - prefix[i];
  }

  return 0;
}

void lanli_buffer_slurp(lanli_buffer *buf, size_t size) {
  assert(buf && buf->unit);

  if (size >= buf->size) {
    buf->size = 0;
    return;
  }

  buf->size -= size;
  memmove(buf->data, buf->data + size, buf->size);
}

const char *lanli_buffer_cstr(lanli_buffer *buf) {
  assert(buf && buf->unit);

  if (buf->size < buf->asize && buf->data[buf->size] == 0)
    return (char *)buf->data;

  lanli_buffer_grow(buf, buf->size + 1);
  buf->data[buf->size] = 0;

  return (char *)buf->data;
}

void lanli_buffer_printf(lanli_buffer *buf, const char *fmt, ...) {
  va_list ap;
  int n;

  assert(buf && buf->unit);

  if (buf->size >= buf->asize)
    lanli_buffer_grow(buf, buf->size + 1);

  va_start(ap, fmt);
  n = vsnprintf((char *)buf->data + buf->size, buf->asize - buf->size, fmt, ap);
  va_end(ap);

  if (n < 0) {
#ifndef _MSC_VER
    return;
#else
    va_start(ap, fmt);
    n = _vscprintf(fmt, ap);
    va_end(ap);
#endif
  }

  if ((size_t)n >= buf->asize - buf->size) {
    lanli_buffer_grow(buf, buf->size + n + 1);

    va_start(ap, fmt);
    n = vsnprintf((char *)buf->data + buf->size, buf->asize - buf->size, fmt, ap);
    va_end(ap);
  }

  if (n < 0)
    return;

  buf->size += n;
}

void lanli_buffer_put_utf8(lanli_buffer *ob, unsigned int c) {
  unsigned char unichar[4];

  if (c < 0x80) {
    lanli_buffer_putc(ob, c);
  }
  else if (c < 0x800) {
    unichar[0] = 192 + (c / 64);
    unichar[1] = 128 + (c % 64);
    lanli_buffer_put(ob, unichar, 2);
  }
  else if (c - 0xd800u < 0x800) {
    LANLI_BUFPUTSL(ob, "\xef\xbf\xbd");
  }
  else if (c < 0x10000) {
    unichar[0] = 224 + (c / 4096);
    unichar[1] = 128 + (c / 64) % 64;
    unichar[2] = 128 + (c % 64);
    lanli_buffer_put(ob, unichar, 3);
  }
  else if (c < 0x110000) {
    unichar[0] = 240 + (c / 262144);
    unichar[1] = 128 + (c / 4096) % 64;
    unichar[2] = 128 + (c / 64) % 64;
    unichar[3] = 128 + (c % 64);
    lanli_buffer_put(ob, unichar, 4);
  }
  else {
    LANLI_BUFPUTSL(ob, "\xef\xbf\xbd");
  }
}

