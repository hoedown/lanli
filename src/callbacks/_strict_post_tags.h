/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -S1 -m100 -l -C -7 -E -N find_tag -t data/strict_post_tags.gperf  */
/* Computed positions: -k'1-2,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "data/strict_post_tags.gperf"

typedef enum semantic_type {
  SEMANTIC_TYPE_BLOCK = (1 << 0),
  SEMANTIC_TYPE_INLINE = (1 << 1),

  SEMANTIC_TYPE_LISTITEM = (1 << 2),

  SEMANTIC_TYPE_DESCITEM = (1 << 3),

  SEMANTIC_TYPE_TABLESECTION = (1 << 4),
  SEMANTIC_TYPE_TABLEROW = (1 << 5),
  SEMANTIC_TYPE_TABLECELL = (1 << 6)
} semantic_type;

struct attribute_entry {
  int optional;
  const char *name;
  int needs_value;
};
typedef struct attribute_entry attribute_entry;
#line 22 "data/strict_post_tags.gperf"
struct tag_entry {
  const char *name;
  // Name to replace (NULL for original)
  const char *new_name;
  // Semantic type of the tag
  semantic_type type;
  // Permitted semantic types for immediate children
  semantic_type accepted_types;
  // Allowed attributes for the tag
  attribute_entry attributes [4];
  size_t attributes_count;
};
typedef struct tag_entry tag_entry;
/* maximum key range = 48, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned char asso_values[] =
    {
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 22,
      21, 20, 19, 18, 17, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49, 49, 49, 49,
      49, 49, 49, 49, 49, 49, 49,  0,  3,  4,
       1,  9, 31,  7,  2, 13, 49, 15,  3,  9,
      14, 18,  7, 18,  4,  4,  0, 10, 49, 49,
      49, 25, 49, 49, 49, 49, 49, 49
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct tag_entry *
find_tag (str, len)
     register const char *str;
     register unsigned int len;
{
  enum
    {
      TOTAL_KEYWORDS = 42,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 10,
      MIN_HASH_VALUE = 1,
      MAX_HASH_VALUE = 48
    };

  static const struct tag_entry wordlist[] =
    {
#line 83 "data/strict_post_tags.gperf"
      {"a", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {{0,"href",1}}, 1},
#line 57 "data/strict_post_tags.gperf"
      {"dt", NULL, SEMANTIC_TYPE_DESCITEM, SEMANTIC_TYPE_INLINE, {}, 0},
#line 67 "data/strict_post_tags.gperf"
      {"td", NULL, SEMANTIC_TYPE_TABLECELL, SEMANTIC_TYPE_BLOCK | SEMANTIC_TYPE_INLINE, {{1,"colspan",1}, {1,"rowspan",1}}, 2},
#line 58 "data/strict_post_tags.gperf"
      {"dd", NULL, SEMANTIC_TYPE_DESCITEM, SEMANTIC_TYPE_INLINE, {}, 0},
#line 66 "data/strict_post_tags.gperf"
      {"th", NULL, SEMANTIC_TYPE_TABLECELL, SEMANTIC_TYPE_BLOCK | SEMANTIC_TYPE_INLINE, {{1,"colspan",1}, {1,"rowspan",1}}, 2},
#line 87 "data/strict_post_tags.gperf"
      {"b", "strong", SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 62 "data/strict_post_tags.gperf"
      {"thead", NULL, SEMANTIC_TYPE_TABLESECTION, SEMANTIC_TYPE_TABLEROW, {}, 0},
#line 56 "data/strict_post_tags.gperf"
      {"dl", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_DESCITEM, {}, 0},
#line 65 "data/strict_post_tags.gperf"
      {"tr", NULL, SEMANTIC_TYPE_TABLEROW, SEMANTIC_TYPE_TABLECELL, {}, 0},
#line 84 "data/strict_post_tags.gperf"
      {"abbr", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {{0,"title",1}}, 1},
#line 94 "data/strict_post_tags.gperf"
      {"hr", NULL, SEMANTIC_TYPE_BLOCK, 0, {}, 0},
#line 93 "data/strict_post_tags.gperf"
      {"br", NULL, SEMANTIC_TYPE_INLINE, 0, {}, 0},
#line 61 "data/strict_post_tags.gperf"
      {"table", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_TABLESECTION | SEMANTIC_TYPE_TABLEROW, {}, 0},
#line 44 "data/strict_post_tags.gperf"
      {"p", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 75 "data/strict_post_tags.gperf"
      {"del", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 70 "data/strict_post_tags.gperf"
      {"strong", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 51 "data/strict_post_tags.gperf"
      {"ul", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_LISTITEM, {}, 0},
#line 89 "data/strict_post_tags.gperf"
      {"strike", "del", SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 80 "data/strict_post_tags.gperf"
      {"sub", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 72 "data/strict_post_tags.gperf"
      {"u", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 78 "data/strict_post_tags.gperf"
      {"kbd", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 45 "data/strict_post_tags.gperf"
      {"pre", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 81 "data/strict_post_tags.gperf"
      {"sup", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 48 "data/strict_post_tags.gperf"
      {"blockquote", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_BLOCK | SEMANTIC_TYPE_INLINE, {}, 0},
#line 52 "data/strict_post_tags.gperf"
      {"ol", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_LISTITEM, {}, 0},
#line 88 "data/strict_post_tags.gperf"
      {"i", "em", SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 76 "data/strict_post_tags.gperf"
      {"mark", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 71 "data/strict_post_tags.gperf"
      {"em", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 79 "data/strict_post_tags.gperf"
      {"cite", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 53 "data/strict_post_tags.gperf"
      {"li", NULL, SEMANTIC_TYPE_LISTITEM, SEMANTIC_TYPE_BLOCK | SEMANTIC_TYPE_INLINE, {}, 0},
#line 92 "data/strict_post_tags.gperf"
      {"img", NULL, SEMANTIC_TYPE_INLINE, 0, {{0,"src",1}, {1,"alt",1}}, 2},
#line 63 "data/strict_post_tags.gperf"
      {"tbody", NULL, SEMANTIC_TYPE_TABLESECTION, SEMANTIC_TYPE_TABLEROW, {}, 0},
#line 74 "data/strict_post_tags.gperf"
      {"ins", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 77 "data/strict_post_tags.gperf"
      {"code", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 64 "data/strict_post_tags.gperf"
      {"tfoot", NULL, SEMANTIC_TYPE_TABLESECTION, SEMANTIC_TYPE_TABLEROW, {}, 0},
#line 73 "data/strict_post_tags.gperf"
      {"q", NULL, SEMANTIC_TYPE_INLINE, SEMANTIC_TYPE_INLINE, {}, 0},
#line 43 "data/strict_post_tags.gperf"
      {"h6", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 42 "data/strict_post_tags.gperf"
      {"h5", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 41 "data/strict_post_tags.gperf"
      {"h4", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 40 "data/strict_post_tags.gperf"
      {"h3", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 39 "data/strict_post_tags.gperf"
      {"h2", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0},
#line 38 "data/strict_post_tags.gperf"
      {"h1", NULL, SEMANTIC_TYPE_BLOCK, SEMANTIC_TYPE_INLINE, {}, 0}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct tag_entry *resword;

          switch (key - 1)
            {
              case 0:
                if (len == 1)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 2:
                if (len == 2)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 3:
                if (len == 2)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 4:
                if (len == 2)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 2)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 6:
                if (len == 1)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 5)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 8:
                if (len == 2)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 9:
                if (len == 2)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 4)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 11:
                if (len == 2)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 2)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 5)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 1)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 3)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 6)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 2)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 18:
                if (len == 6)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 3)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
              case 20:
                if (len == 1)
                  {
                    resword = &wordlist[19];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 3)
                  {
                    resword = &wordlist[20];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 3)
                  {
                    resword = &wordlist[21];
                    goto compare;
                  }
                break;
              case 23:
                if (len == 3)
                  {
                    resword = &wordlist[22];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 10)
                  {
                    resword = &wordlist[23];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 2)
                  {
                    resword = &wordlist[24];
                    goto compare;
                  }
                break;
              case 26:
                if (len == 1)
                  {
                    resword = &wordlist[25];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 4)
                  {
                    resword = &wordlist[26];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 2)
                  {
                    resword = &wordlist[27];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 4)
                  {
                    resword = &wordlist[28];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 2)
                  {
                    resword = &wordlist[29];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 3)
                  {
                    resword = &wordlist[30];
                    goto compare;
                  }
                break;
              case 32:
                if (len == 5)
                  {
                    resword = &wordlist[31];
                    goto compare;
                  }
                break;
              case 33:
                if (len == 3)
                  {
                    resword = &wordlist[32];
                    goto compare;
                  }
                break;
              case 34:
                if (len == 4)
                  {
                    resword = &wordlist[33];
                    goto compare;
                  }
                break;
              case 35:
                if (len == 5)
                  {
                    resword = &wordlist[34];
                    goto compare;
                  }
                break;
              case 36:
                if (len == 1)
                  {
                    resword = &wordlist[35];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 2)
                  {
                    resword = &wordlist[36];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 2)
                  {
                    resword = &wordlist[37];
                    goto compare;
                  }
                break;
              case 41:
                if (len == 2)
                  {
                    resword = &wordlist[38];
                    goto compare;
                  }
                break;
              case 43:
                if (len == 2)
                  {
                    resword = &wordlist[39];
                    goto compare;
                  }
                break;
              case 45:
                if (len == 2)
                  {
                    resword = &wordlist[40];
                    goto compare;
                  }
                break;
              case 47:
                if (len == 2)
                  {
                    resword = &wordlist[41];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return resword;
          }
        }
    }
  return 0;
}
