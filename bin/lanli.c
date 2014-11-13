#if __STDC_VERSION__ >= 199901L
#define _XOPEN_SOURCE 600
#else
#define _XOPEN_SOURCE 500
#endif /* __STDC_VERSION__ */

#include "document.h"
#include "callbacks/strict_post.h"

#include "common.h"

#include <time.h>


/* ADDITIONAL CALLBACKS */

#define SIMPLE_CALLBACK(name, action)                                         \
  lanli_action callback_##name(                                               \
    lanli_tag *tag,                                                           \
    const lanli_tag_stack *stack,                                             \
    void *opaque                                                              \
  ) {                                                                         \
    return LANLI_ACTION_##action;                                             \
  }

SIMPLE_CALLBACK(accept, ACCEPT);
SIMPLE_CALLBACK(escape, ESCAPE);
SIMPLE_CALLBACK(skip, SKIP);
SIMPLE_CALLBACK(ignore, IGNORE);
SIMPLE_CALLBACK(verbatim, VERBATIM);


/* FEATURES INFO / DEFAULTS */

enum callback_type {
  CALLBACK_STRICT_POST,
  CALLBACK_ACCEPT,
  CALLBACK_ESCAPE,
  CALLBACK_SKIP,
  CALLBACK_IGNORE,
  CALLBACK_VERBATIM
};

struct callback_info {
  enum callback_type callback;
  const char *option_name;
  const char *description;
};

struct flag_info {
  lanli_flags flag;
  const char *option_name;
  const char *description;
};

static struct callback_info callbacks_info[] = {
  {CALLBACK_STRICT_POST, "strict-post", "Very strict callback intended for posts and static content. [default]"},
  {CALLBACK_ACCEPT, "accept", "Simple callback that accepts any tag."},
  {CALLBACK_ESCAPE, "escape", "Simple callback that escapes any tag."},
  {CALLBACK_SKIP, "skip", "Simple callback that skips any tag."},
  {CALLBACK_IGNORE, "ignore", "Simple callback that ignores any tag."},
  {CALLBACK_VERBATIM, "verbatim", "Simple callback that copies tags verbatim. Insecure, mainly for testing purposes."}
};

static struct flag_info flags_info[] = {
  {LANLI_FLAG_COMMENTS_PARSE, "parse-comments", "Parse and maintain comments. [default]"},
  {LANLI_FLAG_COMMENTS_SKIP, "skip-comments", "Skip comments. Requires '--parse-comments' to be active as well. [default]"},
  {LANLI_FLAG_INVALID_SKIP, "skip-invalid", "Skip parsed, but invalid HTML."},
  {LANLI_FLAG_LEVELS_STRICT, "strict-levels", "When using levels, don't allow a level to leave open tags to superior levels."}
};

static const char *negative_prefix = "no-";

#define DEF_FLAGS (LANLI_FLAG_COMMENTS_PARSE | LANLI_FLAG_COMMENTS_SKIP)
#define DEF_IUNIT 1024
#define DEF_OUNIT 64
#define DEF_CALLBACK CALLBACK_STRICT_POST
#define DEF_LEVELS 0
#define DEF_MAX_NESTING 16
#define DEF_MAX_ATTRIBUTES 8


/* PRINT HELP */

static void print_help(const char *basename) {
  size_t i;

  /* usage */
  printf("Usage: %s [OPTION]... [FILE]\n\n", basename);

  /* description */
  printf("Process the HTML in FILE (or standard input), and sanitize it using the Lanli library. "
         "The result is written to standard output. Parsing and filtering can be controlled through the options below.\n\n");

  /* main options */
  printf("Main options:\n");
  print_option('l', "levels=N", "Number of additional levels. Zero disables the feature. Default is " str(DEF_LEVELS) ".");
  print_option('n', "max-nesting=N", "Size of the tag nesting stack. Default is " str(DEF_MAX_NESTING) ".");
  print_option('a', "max-attributes=N", "Maximum number of attributes accepted in a tag. Default is " str(DEF_MAX_ATTRIBUTES) ".");
  print_option('T', "time", "Show time spent in rendering.");
  print_option('i', "input-unit=N", "Reading block size. Default is " str(DEF_IUNIT) ".");
  print_option('o', "output-unit=N", "Writing block size. Default is " str(DEF_OUNIT) ".");
  print_option('h', "help", "Print this help text.");
  print_option('v', "version", "Print Lanli version.");
  printf("\n");

  /* callbacks */
  printf("Callback selection:\n");
  for (i = 0; i < count_of(callbacks_info); i++) {
    struct callback_info *callback = &callbacks_info[i];
    print_option(  0, callback->option_name, callback->description);
  }
  printf("\n");

  /* features */
  printf("Flags:\n");
  for (i = 0; i < count_of(flags_info); i++) {
    struct flag_info *flag = &flags_info[i];
    print_option(  0, flag->option_name, flag->description);
  }
  printf("\n");

  /* ending */
  printf("Flags can be negated by prepending 'no' to them, as in '--no-parse-comments' or '--no-skip-invalid'. "
         "Options are processed in order, so in case of contradictory options the last specified stands.\n\n");

  printf("When FILE is '-', read standard input. If no FILE was given, read standard input. Use '--' to signal end of option parsing. "
         "Exit status is 0 if no errors occured, 1 with option parsing errors or 5 with I/O errors.\n\n");
}


/* OPTION PARSING */

struct option_data {
  char *basename;
  int done;

  /* time reporting */
  int show_time;

  /* I/O */
  size_t iunit;
  size_t ounit;
  const char *filename;

  /* parsing */
  enum callback_type callback;
  lanli_flags flags;
  size_t levels;
  size_t max_nesting;
  size_t max_attributes;
};

static int parse_short_option(char opt, char *next, void *opaque) {
  struct option_data *data = opaque;
  long int num;
  int isNum = next ? parseint(next, &num) : 0;

  if (opt == 'h') {
    print_help(data->basename);
    data->done = 1;
    return 0;
  }

  if (opt == 'v') {
    print_version();
    data->done = 1;
    return 0;
  }

  if (opt == 'T') {
    data->show_time = 1;
    return 1;
  }

  /* options requiring value */
  /* FIXME: add validation */

  if (opt == 'l' && isNum) {
    data->levels = num;
    return 2;
  }

  if (opt == 'n' && isNum) {
    data->max_nesting = num;
    return 2;
  }

  if (opt == 'a' && isNum) {
    data->max_attributes = num;
    return 2;
  }

  if (opt == 'i' && isNum) {
    data->iunit = num;
    return 2;
  }

  if (opt == 'o' && isNum) {
    data->ounit = num;
    return 2;
  }

  fprintf(stderr, "Wrong option '-%c' found.\n", opt);
  return 0;
}

static int parse_callback_option(char *opt, struct option_data *data) {
  size_t i;

  for (i = 0; i < count_of(callbacks_info); i++) {
    struct callback_info *callback = &callbacks_info[i];
    if (strcmp(opt, callback->option_name)==0) {
      data->callback = callback->callback;
      return 1;
    }
  }

  return 0;
}

static int parse_flag_option(char *opt, struct option_data *data) {
  size_t i;

  for (i = 0; i < count_of(flags_info); i++) {
    struct flag_info *flag = &flags_info[i];
    if (strcmp(opt, flag->option_name)==0) {
      data->flags |= flag->flag;
      return 1;
    }
  }

  return 0;
}

static int parse_negative_option(char *opt, struct option_data *data) {
  size_t i;
  const char *name = strprefix(opt, negative_prefix);
  if (!name) return 0;

  for (i = 0; i < count_of(flags_info); i++) {
    struct flag_info *flag = &flags_info[i];
    if (strcmp(name, flag->option_name)==0) {
      data->flags &= ~(flag->flag);
      return 1;
    }
  }

  return 0;
}

static int parse_long_option(char *opt, char *next, void *opaque) {
  struct option_data *data = opaque;
  long int num;
  int isNum = next ? parseint(next, &num) : 0;

  if (strcmp(opt, "help")==0) {
    print_help(data->basename);
    data->done = 1;
    return 0;
  }

  if (strcmp(opt, "version")==0) {
    print_version();
    data->done = 1;
    return 0;
  }

  if (strcmp(opt, "time")==0) {
    data->show_time = 1;
    return 1;
  }

  /* FIXME: validation */

  if (strcmp(opt, "levels")==0 && isNum) {
    data->levels = num;
    return 2;
  }
  if (strcmp(opt, "max-nesting")==0 && isNum) {
    data->max_nesting = num;
    return 2;
  }
  if (strcmp(opt, "max-attributes")==0 && isNum) {
    data->max_attributes = num;
    return 2;
  }
  if (strcmp(opt, "input-unit")==0 && isNum) {
    data->iunit = num;
    return 2;
  }
  if (strcmp(opt, "output-unit")==0 && isNum) {
    data->ounit = num;
    return 2;
  }

  if (parse_callback_option(opt, data) || parse_flag_option(opt, data) || parse_negative_option(opt, data))
    return 1;

  fprintf(stderr, "Wrong option '--%s' found.\n", opt);
  return 0;
}

static int parse_argument(int argn, char *arg, int is_forced, void *opaque) {
  struct option_data *data = opaque;

  if (argn == 0) {
    /* Input file */
    if (strcmp(arg, "-")!=0 || is_forced) data->filename = arg;
    return 1;
  }

  fprintf(stderr, "Too many arguments.\n");
  return 0;
}


/* MAIN LOGIC */

int main(int argc, char **argv) {
  struct option_data data;
  struct timespec start, end;
  FILE *file = stdin;
  lanli_buffer *ib, *ob;
  lanli_callback callback = NULL;
  void *opaque = NULL;
  lanli_document *document;

  /* Parse options */
  data.basename = argv[0];
  data.done = 0;
  data.show_time = 0;
  data.iunit = DEF_IUNIT;
  data.ounit = DEF_OUNIT;
  data.filename = NULL;
  data.callback = DEF_CALLBACK;
  data.flags = DEF_FLAGS;
  data.levels = DEF_LEVELS;
  data.max_nesting = DEF_MAX_NESTING;
  data.max_attributes = DEF_MAX_ATTRIBUTES;

  argc = parse_options(argc, argv, parse_short_option, parse_long_option, parse_argument, &data);
  if (data.done) return 0;
  if (!argc) return 1;

  /* Open input file, if needed */
  if (data.filename) {
    file = fopen(data.filename, "r");
    if (!file) {
      fprintf(stderr, "Unable to open input file \"%s\": %s\n", data.filename, strerror(errno));
      return 5;
    }
  }

  /* Read everything */
  ib = lanli_buffer_new(data.iunit);

  while (!feof(file)) {
    if (ferror(file)) {
      fprintf(stderr, "I/O errors found while reading input.\n");
      return 5;
    }
    lanli_buffer_grow(ib, ib->size + data.iunit);
    ib->size += fread(ib->data + ib->size, 1, data.iunit, file);
  }

  if (file != stdin) fclose(file);

  /* Obtain the callback */
  switch (data.callback) {
    case CALLBACK_STRICT_POST:
      callback = lanli_callback_strict_post;
      break;
    case CALLBACK_ACCEPT:
      callback = callback_accept;
      break;
    case CALLBACK_ESCAPE:
      callback = callback_escape;
      break;
    case CALLBACK_SKIP:
      callback = callback_skip;
      break;
    case CALLBACK_IGNORE:
      callback = callback_ignore;
      break;
    case CALLBACK_VERBATIM:
      callback = callback_verbatim;
      break;
  };

  /* Sanitize input HTML */
  ob = lanli_buffer_new(data.ounit);
  document = lanli_document_new(callback, opaque, data.flags, data.levels, data.max_nesting, data.max_attributes);

  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &start);
  lanli_document_render(document, ob, ib->data, ib->size);
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);

  /* Write the result to stdout */
  if (ob->size && ob->data[ob->size-1] != '\n')
    lanli_buffer_putc(ob, '\n');

  (void)fwrite(ob->data, 1, ob->size, stdout);

  /* Show rendering time */
  if (data.show_time) {
    long long elapsed = (end.tv_sec - start.tv_sec)*1e9 + (end.tv_nsec - start.tv_nsec);
    if (elapsed < 1e9)
      fprintf(stderr, "Time spent on rendering: %.2f ms.\n", ((double)elapsed)/1e6);
    else
      fprintf(stderr, "Time spent on rendering: %.3f s.\n", ((double)elapsed)/1e9);
  }

  /* Cleanup */
  lanli_buffer_free(ib);
  lanli_buffer_free(ob);
  lanli_document_free(document);

  if (ferror(stdout)) {
    fprintf(stderr, "I/O errors found while writing output.\n");
    return 5;
  }

  return 0;
}
