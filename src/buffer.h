/* buffer.h - simple, fast buffers */

#ifndef LANLI_BUFFER_H
#define LANLI_BUFFER_H

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#define __attribute__(x)
#define inline __inline
#endif


/*********
 * FLAGS *
 *********/

typedef enum {
  LANLI_BUF_OK = 0,
  LANLI_BUF_ENOMEM = -1
} lanli_buferror_t;


/*********
 * TYPES *
 *********/

typedef void *(*lanli_realloc_callback)(void *, size_t);
typedef void (*lanli_free_callback)(void *);

struct lanli_buffer {
  uint8_t *data;  /* actual character data */
  size_t size;    /* size of the string */
  size_t asize;   /* allocated size (0 = volatile buffer) */
  size_t unit;    /* reallocation unit size (0 = read-only buffer) */

  lanli_realloc_callback data_realloc;
  lanli_free_callback data_free;
  lanli_free_callback buffer_free;
};
typedef struct lanli_buffer lanli_buffer;

/* malloc / realloc / calloc wrappers */
#define LANLI_ALLOC_WRAPPER(sig, call)                                        \
  static inline void *lanli_##sig __attribute__ ((malloc));                   \
  static inline void *lanli_##sig {                                           \
    void *ret = call;                                                         \
    if (!ret) {                                                               \
      fprintf(stderr, "Allocation failed.\n");                                \
      abort();                                                                \
    }                                                                         \
    return ret;                                                               \
  }


/*************
 * FUNCTIONS *
 *************/

/* allocation wrappers */
LANLI_ALLOC_WRAPPER(malloc(size_t size), malloc(size));
LANLI_ALLOC_WRAPPER(calloc(size_t nmemb, size_t size), calloc(nmemb, size));
LANLI_ALLOC_WRAPPER(realloc(void *ptr, size_t size), realloc(ptr, size));

/* lanli_buffer_init: initialize a buffer with custom allocators */
void lanli_buffer_init(
  lanli_buffer *buffer,
  size_t unit,
  lanli_realloc_callback data_realloc,
  lanli_free_callback data_free,
  lanli_free_callback buffer_free
);

/* lanli_buffer_new: allocate a new buffer */
lanli_buffer *lanli_buffer_new(size_t unit) __attribute__ ((malloc));

/* lanli_buffer_reset: free internal data of the buffer */
void lanli_buffer_reset(lanli_buffer *buf);

/* lanli_buffer_grow: increase the allocated size to the given value */
void lanli_buffer_grow(lanli_buffer *buf, size_t neosz);

/* lanli_buffer_put: append raw data to a buffer */
void lanli_buffer_put(lanli_buffer *buf, const uint8_t *data, size_t size);

/* lanli_buffer_puts: append a NUL-terminated string to a buffer */
void lanli_buffer_puts(lanli_buffer *buf, const char *str);

/* lanli_buffer_putc: append a single char to a buffer */
void lanli_buffer_putc(lanli_buffer *buf, uint8_t c);

/* lanli_buffer_set: replace the buffer's contents with raw data */
void lanli_buffer_set(lanli_buffer *buf, const uint8_t *data, size_t size);

/* lanli_buffer_puts: replace the buffer's contents with a NUL-terminated string */
void lanli_buffer_sets(lanli_buffer *buf, const char *str);

/* lanli_buffer_eq: compare a buffer's data with other data for equality */
int lanli_buffer_eq(const lanli_buffer *buf, const uint8_t *data, size_t size);

/* lanli_buffer_eq: compare a buffer's data with NUL-terminated string for equality */
int lanli_buffer_eqs(const lanli_buffer *buf, const char *str);

/* lanli_buffer_prefix: compare the beginning of a buffer with a string */
int lanli_buffer_prefix(const lanli_buffer *buf, const char *prefix);

/* lanli_buffer_slurp: remove a given number of bytes from the head of the buffer */
void lanli_buffer_slurp(lanli_buffer *buf, size_t size);

/* lanli_buffer_cstr: NUL-termination of the string array (making a C-string) */
const char *lanli_buffer_cstr(lanli_buffer *buf);

/* lanli_buffer_printf: formatted printing to a buffer */
void lanli_buffer_printf(lanli_buffer *buf, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));

/* lanli_buffer_free: free the buffer */
void lanli_buffer_free(lanli_buffer *buf);


/* LANLI_BUFPUTSL: optimized lanli_buffer_puts of a string literal */
#define LANLI_BUFPUTSL(output, literal) \
  lanli_buffer_put(output, (const uint8_t *)literal, sizeof(literal) - 1)

/* LANLI_BUFSETSL: optimized lanli_buffer_sets of a string literal */
#define LANLI_BUFSETSL(output, literal) \
  lanli_buffer_set(output, (const uint8_t *)literal, sizeof(literal) - 1)

/* LANLI_BUFEQSL: optimized lanli_buffer_eqs of a string literal */
#define LANLI_BUFEQSL(output, literal) \
  lanli_buffer_eq(output, (const uint8_t *)literal, sizeof(literal) - 1)


#ifdef __cplusplus
}
#endif

#endif /** LANLI_BUFFER_H **/
