#if __STDC_VERSION__ >= 199901L
#define _XOPEN_SOURCE 600
#else
#define _XOPEN_SOURCE 500
#endif /* __STDC_VERSION__ */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include <time.h>

#include "document.h"
#include "version.h"
#include "callbacks/strict_post.h"


// UTILITIES

#define str(x) __str(x)
#define __str(x) #x

#define count_of(array) (sizeof(array) / sizeof(0[array]))

int parse_int(const char *string, long *result) {
  char *end;
  errno = 0;
  *result = strtol(string, &end, 10);
  return !(*end || errno);
}

const char *strprefix(const char *str, const char *prefix) {
  while (*prefix) {
    if (!(*str && *str == *prefix)) return 0;
    prefix++;
    str++;
  }
  return str;
}


// ADDITIONAL CALLBACKS
// Various additional callbacks

#define SIMPLE_CALLBACK(name, action)                                         \
  hoedown_action callback_##name(                                             \
    hoedown_tag *tag,                                                         \
    const hoedown_tag_stack *stack,                                           \
    void *opaque                                                              \
  ) {                                                                         \
    return HOEDOWN_ACTION_##action;                                           \
  }

SIMPLE_CALLBACK(accept, ACCEPT);
SIMPLE_CALLBACK(escape, ESCAPE);
SIMPLE_CALLBACK(skip, SKIP);
SIMPLE_CALLBACK(ignore, IGNORE);
SIMPLE_CALLBACK(verbatim, VERBATIM);


// FEATURES INFO
// Information about available features (callbacks, flags, etc.)

struct callback_entry {
  hoedown_callback callback;
  const char *option_name;
  const char *description;
};
typedef struct callback_entry callback_entry;

struct flag_entry {
  hoedown_flags flag;
  const char *option_name;
  const char *description;
};
typedef struct flag_entry flag_entry;

static callback_entry callbacks_info[] = {
  {hoedown_callback_strict_post, "strict-post", "Very strict callback intended for posts and static content."},
  {callback_accept, "accept", "Simple callback that accepts any tag."},
  {callback_escape, "escape", "Simple callback that escapes any tag."},
  {callback_skip, "skip", "Simple callback that skips any tag."},
  {callback_ignore, "ignore", "Simple callback that ignores any tag."},
  {callback_ignore, "verbatim", "Simple callback that copies tags verbatim. Insecure, mainly for testing purposes."},
};

static flag_entry flags_info[] = {
  {HOEDOWN_FLAG_COMMENTS_PARSE, "parse-comments", "Parse and maintain comments."},
  {HOEDOWN_FLAG_COMMENTS_SKIP, "skip-comments", "Skip comments. Requires '--parse-comments' to be active as well."},
  {HOEDOWN_FLAG_INVALID_SKIP, "skip-invalid", "Skip parsed, but invalid HTML."},
  {HOEDOWN_FLAG_ESCAPE_SECURE, "secure-escape", "Use \"secure\" mode when escaping HTML."},
  {HOEDOWN_FLAG_LEVELS_STRICT, "strict-levels", "When using levels, don't allow a level to leave open tags to superior levels."},
};


// DEFAULTS
// Default values for parameters

#define DEFAULT_CLOCK CLOCK_PROCESS_CPUTIME_ID

#define DEFAULT_IUNIT 64
#define DEFAULT_OUNIT 64

#define DEFAULT_CALLBACK hoedown_callback_strict_post

#define DEFAULT_FLAGS ( HOEDOWN_FLAG_COMMENTS_PARSE \
                      | HOEDOWN_FLAG_COMMENTS_SKIP )
#define DEFAULT_LEVELS 0
#define DEFAULT_MAX_NESTING 16
#define DEFAULT_MAX_ATTRIBUTES 8


// HELP MESSAGE
// Logic for printing the help and version messages

void print_version() {
  int major, minor, revision;
  hoedown_version(&major, &minor, &revision);
  printf("Built with Hoedown v%d.%d.%d.\n", major, minor, revision);
}

void print_option(char short_opt, const char *long_opt, const char *description) {
  if (short_opt)
    printf("  -%c, ", short_opt);
  else
    printf("      ");

  printf("--%-15s  %s\n", long_opt, description);
}

void print_help(const char *basename) {
  //FIXME: follow docopt style closely
  hoedown_buffer *desc = hoedown_buffer_new(16);

  // Usage
  printf("Usage: %s [OPTION]... [FILE]\n\n", basename);
  
  // Description
  printf("Process the HTML in FILE (or standard input), and sanitize it using the Hoedown library. "
         "The result is written to standard output. Parsing and filtering can be controlled through the options below.\n\n");
  
  // Main options
  printf("Main options:\n");
  print_option('l', "levels=N", "Number of additional levels. Zero disables the feature. [default: "str(DEFAULT_LEVELS)"]");
  print_option('n', "max-nesting=N", "Size of the tag nesting stack. [default: "str(DEFAULT_MAX_NESTING)"]");
  print_option('a', "max-attributes=N", "Maximum number of attributes accepted in a tag. [default: "str(DEFAULT_MAX_ATTRIBUTES)"]");
  print_option('T', "time", "Show time spent in rendering.");
  print_option('i', "input-unit=N", "Reading block size. [default: "str(DEFAULT_IUNIT)"]");
  print_option('o', "output-unit=N", "Writing block size. [default: "str(DEFAULT_OUNIT)"]");
  print_option('h', "help", "Print this help text.");
  print_option('v', "version", "Print Hoedown version.");
  printf("\n");

  // Callbacks
  printf("Callback selection:\n");
  for (size_t i = 0; i < count_of(callbacks_info); i++) {
    callback_entry *entry = &callbacks_info[i];
    
    hoedown_buffer_sets(desc, entry->description);
    if (entry->callback == DEFAULT_CALLBACK)
      HOEDOWN_BUFPUTSL(desc, " [default]");

    print_option( 0 , entry->option_name, hoedown_buffer_cstr(desc));
  }
  printf("\n");

  // Flags
  printf("Rendering flags:\n");
  for (size_t i = 0; i < count_of(flags_info); i++) {
    flag_entry *entry = &flags_info[i];
    
    hoedown_buffer_sets(desc, entry->description);
    if (DEFAULT_FLAGS & entry->flag)
      HOEDOWN_BUFPUTSL(desc, " [default]");

    print_option( 0 , entry->option_name, hoedown_buffer_cstr(desc));
  }
  printf("\n");
  
  // Ending
  printf("Flags can be negated by prepending 'no' to them, as in '--no-parse-comments' or '--no-skip-invalid'. "
         "Options are processed in order, so in case of contradictory options the last specified stands.\n\n");
  
  printf("When FILE is '-', read standard input. If no FILE was given, read standard input. Use '--' to signal end of option parsing. "
         "Exit status is 0 if no errors occured, 1 with option parsing errors or 5 with I/O errors.\n\n");
}


// MAIN
// Code where the magic happens

int main(int argc, char **argv) {
  // Time measuring
  int show_time = 0;

  // Input file
  const char *filename = NULL;

  // Buffers
  size_t iunit = DEFAULT_IUNIT;
  size_t ounit = DEFAULT_OUNIT;

  // Callback
  hoedown_callback callback = DEFAULT_CALLBACK;

  // Document
  hoedown_flags flags = DEFAULT_FLAGS;
  size_t levels = DEFAULT_LEVELS;
  size_t max_nesting = DEFAULT_MAX_NESTING;
  size_t max_attributes = DEFAULT_MAX_ATTRIBUTES;


  // Option parsing
  int just_args = 0;
  int args_parsed = 0;
  for (int i = 1; i < argc; i++) {
    char *arg = argv[i];
    if (!arg[0]) continue;

    if (just_args || arg[0] != '-') {
      // regular argument
      if (args_parsed >= 1) {
        fprintf(stderr, "Too many arguments.\n");
        return 1;
      }
      args_parsed++;
      filename = arg;
      continue;
    }

    if (!arg[1]) {
      // arg is "-"
      if (args_parsed >= 1) {
        fprintf(stderr, "Too many arguments.\n");
        return 1;
      }
      args_parsed++;
      filename = NULL;
      continue;
    }

    if (arg[1] != '-') {
      // parse short options
      char opt;
      const char *val;
      for (size_t j = 1; (opt = arg[j]); j++) {
        if (opt == 'h') {
          print_help(argv[0]);
          return 1;
        }

        if (opt == 'v') {
          print_version();
          return 1;
        }

        if (opt == 'T') {
          show_time = 1;
          continue;
        }

        /* options requiring value */
        if (arg[++j]) val = arg + j;
        else if (argv[++i]) val = argv[i];
        else {
          fprintf(stderr, "Wrong option '-%c' found.\n", opt);
          return 1;
        }

        long int num;
        int isNum = parse_int(val, &num);

        if (opt == 'l' && isNum) {
          levels = num;
          break;
        }

        if (opt == 'n' && isNum) {
          max_nesting = num;
          break;
        }

        if (opt == 'a' && isNum) {
          max_attributes = num;
          break;
        }

        if (opt == 'i' && isNum) {
          iunit = num;
          break;
        }

        if (opt == 'o' && isNum) {
          ounit = num;
          break;
        }

        fprintf(stderr, "Wrong option '-%c' found.\n", opt);
        return 1;
      }
      continue;
    }

    if (!arg[2]) {
      // arg is "--"
      just_args = 1;
      continue;
    }

    // parse long option
    char opt [100];
    strncpy(opt, arg + 2, 100);
    opt[99] = 0;

    char *val = strchr(opt, '=');

    long int num = 0;
    int isNum = 0;

    if (val) {
      *val = 0;
      val++;

      if (*val)
        isNum = parse_int(val, &num);
    }

    int opt_parsed = 0;

    if (strcmp(opt, "time") == 0) {
      opt_parsed = 1;
      show_time = 1;
    }

    if (strcmp(opt, "help") == 0) {
      print_help(argv[0]);
      return 1;
    }

    if (strcmp(opt, "version") == 0) {
      print_version();
      return 1;
    }

    if (strcmp(opt, "levels") == 0 && isNum) {
      opt_parsed = 1;
      levels = num;
    }
    if (strcmp(opt, "max-nesting") == 0 && isNum) {
      opt_parsed = 1;
      max_nesting = num;
    }
    if (strcmp(opt, "max-attributes") == 0 && isNum) {
      opt_parsed = 1;
      max_attributes = num;
    }
    if (strcmp(opt, "input-unit") == 0 && isNum) {
      opt_parsed = 1;
      iunit = num;
    }
    if (strcmp(opt, "output-unit") == 0 && isNum) {
      opt_parsed = 1;
      ounit = num;
    }

    //const char *name;

    // extensions
    for (size_t i = 0; i < count_of(callbacks_info); i++) {
      struct callback_entry *entry = &callbacks_info[i];
      if (strcmp(opt, entry->option_name) == 0) {
        opt_parsed = 1;
        callback = entry->callback;
        break;
      }
    }

    // flags
    for (size_t i = 0; i < count_of(flags_info); i++) {
      struct flag_entry *entry = &flags_info[i];
      if (strcmp(opt, entry->option_name) == 0) {
        opt_parsed = 1;
        flags |= entry->flag;
        break;
      }
    }

    // negations
    const char *name = strprefix(opt, "no-");
    if (name) {
      for (size_t i = 0; i < count_of(flags_info); i++) {
        struct flag_entry *entry = &flags_info[i];
        if (strcmp(name, entry->option_name) == 0) {
          opt_parsed = 1;
          flags &= ~(entry->flag);
          break;
        }
      }
    }

    if (!opt_parsed) {
      fprintf(stderr, "Wrong option '%s' found.\n", arg);
      return 1;
    }
  }


  // Create everything
  struct timespec start, end;

  hoedown_buffer *ib = hoedown_buffer_new(iunit);
  hoedown_buffer *ob = hoedown_buffer_new(ounit);
  
  hoedown_document *doc = hoedown_document_new(
      callback,
      NULL,
      flags,
      levels,
      max_nesting,
      max_attributes
  );


  // Read input file
  FILE *file = stdin;
  if (filename) {
    file = fopen(filename, "rb");
    if (!file) {
      fprintf(stderr, "Unable to open input file: %s\n", strerror(errno));
      return 5;
    }
  }

  while (!feof(file) && !ferror(file)) {
    hoedown_buffer_grow(ib, ib->size + ib->unit);
    ib->size += fread(ib->data + ib->size, sizeof(uint8_t), ib->unit, file);
  }
  if (ferror(file)) {
    fprintf(stderr, "I/O error when reading input.\n");
    return 5;
  }
  
  if (filename) fclose(file);


  // RENDER!
  clock_gettime(DEFAULT_CLOCK, &start);
  hoedown_document_render(doc, ob, ib->data, ib->size);
  clock_gettime(DEFAULT_CLOCK, &end);


  // Write output
  if (ob->size && ob->data[ob->size-1] != '\n')
    hoedown_buffer_putc(ob, '\n');

  if (fwrite(ob->data, sizeof(uint8_t), ob->size, stdout) != ob->size) {
    fprintf(stderr, "I/O error writing output.\n");
    return 5;
  }


  // Show time
  if (show_time) {
    long long time = (end.tv_nsec-start.tv_nsec) + (end.tv_sec-start.tv_sec)*1e9;
    fprintf(stderr, "Time spent on rendering: %7.2fms\n", (double)time / 1e6);
  }


  // Free everything
  hoedown_buffer_free(ib);
  hoedown_buffer_free(ob);
  hoedown_document_free(doc);

  return 0;
}
