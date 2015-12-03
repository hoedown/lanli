# Lanli

Lanli is an HTML5 sanitizer with unique features. You should use it when you
have HTML coming from an untrusted source (like user input). Lanli will
produce valid HTML that you can process and display safely.

It was made as a companion to [Hoedown][], and they share some code, but are
independent projects. Their [phylosophy](TODO) is very similar.

 * **Secure.** Lanli's top priority is security. It has strict parsing
   guidelines and it re-escapes everything else. No security bugs have been
   found to date. How cool is that?

 * **Flexible.** Most sanitizers use whitelists to filter tags, but Lanli
   goes farther: it uses a callback to determine wether a tag gets accepted.
   This allows for smart and customizable filtering. It also accepts
   various flags to customize parsing, and has [levels](#levels)!

 * **Performant.** Lanli shares memory as much as possible, and it parses,
   filters and outputs on the fly, so it's really fast and efficient.

 * **Portable.** It's written in C and has no dependencies. It can be
   bound to any language with a C interface, and runs almost everywhere.

 * **Easy to use.** Either CMake it into a library, or drop the files at
   `src` directly onto your project. And its main API is three methods. Really.

 * **Unicode friendly.** Lanli is fully UTF-8 aware. It expects the input to
   be valid UTF-8, and outputs UTF-8.


### What it does

 * Lanli will always output well-formed HTML. No unmatched tags, duplicate
   attributes, or any other bad syntax will ever be output.

 * Lanli will always output normalized HTML. Tag names and attribute names
   get always lowercased, attributes use the double quote syntax and spacing
   is consistent.

 * Lanli will always re-escape all text. That means the text is unescaped,
   and then escaped again before being output. This ensures any `&ambiguous;`
   character references or spare HTML-sensitive characters get escaped.

   This also has the effect that unnecessary entities like `&acute;` get
   changed to their UTF-8 representations, `á`.

### What it doesn't do

 * Lanli is not a compressor. It will leave whitespace untouched other than
   inside tags, so output will always display the same way. You can feed the
   sanitized HTML to a compressor, though.

 * Lanli doesn't process text inside tags, and cannot insert or displace tags
   to enhance the HTML. That kind of processing should be done *once* HTML has
   been sanitized by Lanli.

 * Lanli has [minor caveats](#caveats) when parsing HTML, that in no way
   affect security of the output.

 * Lanli was designed to process HTML snippets, not whole pages.


## Install

The standard way to install, test and develop Lanli is using CMake:

    $ cmake -D CMAKE_BUILD_TYPE=Release .

This will configure the build. If you want to customize build options,
you can run the `ccmake` GUI which is easy to use:

    $ ccmake .

Then, to build everything:

    $ make

By default, it builds both the library and the executable. `make install` to
install them, `make test` to test the executable.

Again, Lanli requires no specific compilation environment or flags, so you can
just copy the files at `src` to your project; it'll work equally well.


## Basic usage

Here we're using the standard "Strict post" callback that comes with Lanli.  
First, create a document processor instance:

``` c
#include <lanli/document.h>
#include <lanli/callbacks/strict_post.h>

lanli_document *processor = lanli_document_new(
  lanli_callback_strict_post, NULL, 0, 0, 16, 8
);
```

Now you can use the instance to process HTML snippets:

``` c
// Make a buffer to receive the sanitized HTML
lanli_buffer *output = lanli_buffer_new(16);

lanli_document_render(processor, output, "<p>Some HTML</p>\n", 17);
```

That's it! You have the sanitized HTML at `output->data`, and the size is at
`output->size`. To print the sanitized HTML to stdout, for example, you'd do:

``` c
fwrite(output->data, output->size, 1, stdout);
```

You can (and should) reuse the document instance any times you want.  
When you have finished, don't forget to free everything:

``` c
lanli_buffer_free(output);
lanli_document_free(processor);
```


## Customizing

Lanli has various ways of customizing the processing:

#### Callback

The callback is the most important parameter. Each time a start tag is found
the callback gets called and returns a `lanli_action` telling Lanli what to
do with the tag. Let's see a simple example:

``` c
lanli_action my_callback(lanli_tag *tag, const lanli_tag_stack *stack, void *opaque) {
  if (tag->attributes_count == 0)
    return LANLI_ACTION_ACCEPT;
  else
    return LANLI_ACTION_ESCAPE;
}

/* ... */

lanli_document *processor = lanli_document_new(
  my_callback, NULL, 0, 16, 8
);
```

Now we're telling Lanli to call `my_callback`. If the tag has no attributes,
the callback will allow it by returning `LANLI_ACTION_ACCEPT`. Otherwise, it'll
get escaped (`LANLI_ACTION_ESCAPE`). See the full list of actions in the
[docs](TODO).

As you can see, the callback gets passed three arguments:

 1. The tag which is being tested. You can access all the attributes, name and
    other data about the tag, and you can safely modify the attributes if you
    want to. Other fields can also be modified if you're careful.
 2. The *stack* of tags we're inside of; that is, tags that have been accepted
    but not closed yet. You can use this to allow certain tags, but only if they
    are in a specific context (i.e. allow a `td` only if it's inside a `tr`).
 3. The `void *` pointer that you passed as the second parameter to
    `lanli_document_new`, in this case `NULL`.

Lanli ships with some callbacks that are safe to use in most cases. One of them
is the "Strict post" callback that we used before. However, implementing your
own callback gives you more flexibility.

#### Flags

The third parameter of `lanli_document_new` is a bitmask of various flags that
tweak the parsing, validation or output a bit. Here's a list of them:

 - `LANLI_FLAG_COMMENTS_PARSE`: When enabled, comments will be parsed and kept (but see next flag).
 - `LANLI_FLAG_COMMENTS_SKIP`: Only has effect if `LANLI_FLAG_COMMENTS_PARSE` is active. Skips comments instead of keeping them.  
   We *strongly recommend* setting this flag too if you parse comments, since keeping them is a security risk (user can enter conditional comments, for example).
 - `LANLI_FLAG_INVALID_SKIP`: There's HTML that gets parsed but isn't valid, like a tag with duplicate attributes, or an end tag that doesn't match.
   If this flag is active, the invalid HTML is skipped instead of escaped.
 - `LANLI_FLAG_LEVELS_STRICT`: When levels are active, don't allow a level to leave open tags to superior levels.

We recommend to set the `LANLI_FLAG_COMMENTS_PARSE` and `LANLI_FLAG_COMMENTS_SKIP`
to let users write comments without posing a security risk:

``` c
lanli_document *processor = lanli_document_new(
  lanli_callback_strict_post, NULL,
  LANLI_FLAG_COMMENTS_PARSE | LANLI_FLAG_COMMENTS_SKIP,
  0, 16, 8
);
```

#### Levels

This is a unique feature of Lanli. Levels allow Lanli to differenciate between tags coming from trusted code (i.e. a markup parser), and tags input directly by the user.

Let's see an example. Imagine this Markdown source:

``` markdown
Here ends the **paragraph.</p> <p>And here** starts another.
```

The parser, unsuspecting, would then output the following HTML:

``` html
<p>Here ends the <strong>paragraph.</p> <p>And here</strong> starts another.</p>
```

So the sanitizer (and browser) perceives the output as two paragraphs instead
of one. This demonstrates how the user is able to mess with the rendered HTML.
If the Markdown parser was levels-aware, it'd output something like this:

``` html
<p>Here ends the <strong>paragraph.&lt;/p&gt; &lt;p&gt;And here</strong> starts another.</p>
```

As you can see, the HTML that was input by the user has been escaped.
Lanli parses the real tags (output by the parser) and assigns them level 0.
Then it *unescapes* the rest of the HTML and parses the `</p>` and `<p>` at
the middle, which are of level 1: these tags came from the user.

To parse tags up to level 1, the fourth parameter is set to 1:

``` c
lanli_document *processor = lanli_document_new(
  lanli_callback_strict_post, NULL,
  LANLI_FLAG_COMMENTS_PARSE | LANLI_FLAG_COMMENTS_SKIP,
  1, 16, 8
);
```

Now that Lanli can differenciate, the above wouldn't work. Lanli would find a
`</p>` of level 1 that tries to close a `<p>` of level 0, so it would reject it.  
Wether the next `<p>` is accepted would be left to the callback (Strict post,
for instance, wouldn't accept a `<p>` inside another `<p>`).

Why is this important? Because a markup parser is actually a *trusted* source
of HTML, since it's in your control and will never output harmful tags. The
inline HTML input by the user, however, is *untrusted*. Differenciating between
the two sources gives us a lot more flexibility.

Imagine your Markdown parser interprets footnotes, and outputs a `<div>` with
some classes. If you don't allow `<div>` and the `class` attribute when
sanitizing the HTML, footnotes won't work. If you allow it, you're giving an
enormous privilege to the user, and maybe creating security risks.

How to solve that? Levels to the rescue! Since you know which level a tag
belongs to, you can filter tags depending on that:

``` c
lanli_action my_callback(lanli_tag *tag, const lanli_tag_stack *stack, void *opaque) {
  if (tag->level == 0) {
    // The tag was output by the parser, it's safe.
    return LANLI_ACTION_ACCEPT;
  } else {
    // Tag comes from the user, do all the filtering.
    /* ... */
  }
}

/* ... */

lanli_document *processor = lanli_document_new(
  my_callback, NULL,
  LANLI_FLAG_COMMENTS_PARSE | LANLI_FLAG_COMMENTS_SKIP,
  1, 16, 8
);
```

#### Other parameters

The last two parameters are limits. They specify the maximum amount of nesting,
and the maximum number of attributes per tag, respectively.

In our example we set them to 16 and 8. Thus, if you open 15 tags without
closing them, no more tags can be opened (they won't be even parsed) until
at least a tag ends. And if a tag contains more than 8 attributes, it won't be
parsed.

The higher you set them, the more memory that will be allocated to create the
document processor.


## Caveats

HTML has some exotic features that are currently not implemented in Lanli, because parsing them is either
expensive, complex, or unneeded most of the time:

  - Foreign elements (SVG and MathML) and CDATA sections require special parsing,
    which is not implemented.

  - HTML allows one to omit the closing tag of some tags, so the following is in fact valid HTML:

    ``` html
    <p> Paragraph 1
    <p> Paragraph 2
    <ul> <li> Item 1
         <li> Item 2
    </ul>
    ```

    Lanli needs all end tags to be present.

  - Some entities don't need a semicolon at the end, like `&copy`. Lanli doesn't parse that form,
    the semicolon equivalent must be used instead: `&copy;`.

  - HTML5 is way more permissive than XML and allows attribute names to have almost any character.
    Lanli only allows a restricted set of ASCII.



[Hoedown]: https://github.com/hoedown/hoedown
