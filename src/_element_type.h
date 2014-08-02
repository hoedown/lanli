/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -S1 -m100 -l -C -7 -E -N match_element_type -t src/_element_type.gperf  */
/* Computed positions: -k'1-2' */

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

#line 1 "src/_element_type.gperf"
struct element_entry {
  const char *name;
  hoedown_element_type type;
};
typedef struct element_entry element_entry;
/* maximum key range = 19, duplicates = 0 */

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
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
      22, 22, 22, 22, 22, 22, 22,  7,  4,  8,
      22,  2, 22, 22, 12,  0, 22, 12,  0,  0,
      14,  0,  4, 22,  7,  3,  0, 22, 22,  7,
      22, 22, 22, 22, 22, 22, 22, 22
    };
  return len + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct element_entry *
match_element_type (str, len)
     register const char *str;
     register unsigned int len;
{
  enum
    {
      TOTAL_KEYWORDS = 19,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 8,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 21
    };

  static const struct element_entry wordlist[] =
    {
#line 14 "src/_element_type.gperf"
      {"img", HOEDOWN_EL_VOID},
#line 17 "src/_element_type.gperf"
      {"link", HOEDOWN_EL_VOID},
#line 28 "src/_element_type.gperf"
      {"title", HOEDOWN_EL_RAW_ESCAPABLE},
#line 18 "src/_element_type.gperf"
      {"meta", HOEDOWN_EL_VOID},
#line 12 "src/_element_type.gperf"
      {"embed", HOEDOWN_EL_VOID},
#line 25 "src/_element_type.gperf"
      {"style", HOEDOWN_EL_RAW},
#line 20 "src/_element_type.gperf"
      {"source", HOEDOWN_EL_VOID},
#line 27 "src/_element_type.gperf"
      {"textarea", HOEDOWN_EL_RAW_ESCAPABLE},
#line 11 "src/_element_type.gperf"
      {"col", HOEDOWN_EL_VOID},
#line 21 "src/_element_type.gperf"
      {"track", HOEDOWN_EL_VOID},
#line 10 "src/_element_type.gperf"
      {"br", HOEDOWN_EL_VOID},
#line 22 "src/_element_type.gperf"
      {"wbr", HOEDOWN_EL_VOID},
#line 9 "src/_element_type.gperf"
      {"base", HOEDOWN_EL_VOID},
#line 19 "src/_element_type.gperf"
      {"param", HOEDOWN_EL_VOID},
#line 24 "src/_element_type.gperf"
      {"script", HOEDOWN_EL_RAW},
#line 8 "src/_element_type.gperf"
      {"area", HOEDOWN_EL_VOID},
#line 15 "src/_element_type.gperf"
      {"input", HOEDOWN_EL_VOID},
#line 16 "src/_element_type.gperf"
      {"keygen", HOEDOWN_EL_VOID},
#line 13 "src/_element_type.gperf"
      {"hr", HOEDOWN_EL_VOID}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct element_entry *resword;

          switch (key - 3)
            {
              case 0:
                if (len == 3)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 1:
                if (len == 4)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 2:
                if (len == 5)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 3:
                if (len == 4)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 4:
                if (len == 5)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 5)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 6:
                if (len == 6)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 8)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 8:
                if (len == 3)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 9:
                if (len == 5)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 2)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 11:
                if (len == 3)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 4)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 5)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 6)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 4)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 5)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 6)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 18:
                if (len == 2)
                  {
                    resword = &wordlist[18];
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
