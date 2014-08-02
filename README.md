# Hoedown

Hoedown is an HTML5 sanitizer with unique features. You should use it when you
have HTML coming from an untrusted source (like user input). Hoedown will then
return valid HTML that you can process and display safely.

It was made as a companion to [Hoedown][], and they share some code, but are
independent projects. Their [phylosophy](TODO) is very similar.

 * **Secure.** Hoedown's main objective is security. It has strict parsing
   guidelines and it re-escapes everything else. No security bugs have been
   found yet. How cool is that?

 * **Flexible.** Most sanitizers use whitelists to filter tags, but Hoedown
   goes farther: it uses a callback to determine wether a tag gets accepted.
   This allows for smart and customizable filtering. It also accepts
   various flags to customize parsing, and has [levels][#levels]!

 * **Lightweight.** Hoedown shares memory as much as possible, and it parses,
   filters and outputs on the fly, so it's really fast and has a relatively
   low memory footprint.

 * **Portable.** It's written in C and has no dependencies. It can be
   bound to any language with a C interface, and runs almost everywhere.

 * **Easy to use.** Either `make` it into a library, or drop the files at
   `src` directly onto your project. And its API is three methods. Really.

 * **Unicode friendly.** Hoedown is fully UTF-8 aware. It expects the input to
   be valid UTF-8, and outputs UTF-8.


### What it does

 * Hoedown will always output well-formed HTML. No unmatched tags, duplicate
   attributes, or any other bad syntax will ever be output.
 * Hoedown will always output normalized HTML. Tag names and attribute names
   get always lowercased, attributes use the double quote syntax and spacing
   is consistent.
 * Hoedown will always re-escape all text. That means the text is unescaped,
   and then escaped again before being output. That ensures any `&ambiguous;`
   character references or spare HTML-sensitive characters get escaped.

### What it doesn't do

 * Hoedown is not a compressor. It will leave whitespace untouched other than
   inside tags, so output will always display the same way. You can feed the
   sanitized HTML to a compressor, though.
 * Hoedown doesn't process text inside tags, and cannot insert or displace tags
   to enhance the HTML. That kind of processing should be done *once* HTML has
   been sanitized by Hoedown.
 * Hoedown has [minor caveats][#caveats] when parsing HTML, that in no way
   affect security of the output.
 * Hoedown was designed to process HTML snippets, not whole pages.


## Usage

Here we're using the standard "Strict post" callback that comes with Hoedown.  
First, create a document processor instance:

``` c
#include <hoedown/document.h>
#include <hoedown/callbacks/strict_post.h>

hoedown_document *processor = hoedown_document_new(
  hoedown_callback_strict_post, NULL, 0, 0, 0, 0
);
```

Don't worry about the options for now; the defaults are sane.  
Now you can use the instance to process HTML snippets:

``` c
// Make a buffer to receive the sanitized HTML
hoedown_buffer *output = hoedown_buffer_new(16);

hoedown_document_render(processor, output, "<p>Some HTML</p>\n", 17);
```

That's it! You have the sanitized HTML at `output->data`, and the size is at
`output->size`. To print the sanitized HTML to stdout, for example, you'd do:

``` c
fwrite(output->data, output->size, sizeof(uint8_t), stdout);
```

You can (and should) reuse the document instance any times you want.
When you have finished, don't forget to free everything:

``` c
hoedown_buffer_free(output);
hoedown_document_free(processor);
```


## Caveats

TODO
