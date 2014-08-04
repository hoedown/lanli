/* C code produced by gperf version 3.0.3 */
/* Command-line: gperf -S1 -m100 -l -C -N find_entity -t data/html_entities.gperf  */
/* Computed positions: -k'1-7,10,12,$' */

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

#line 2 "data/html_entities.gperf"
struct html_entity {
    const char *name;
    uint8_t utf8 [6];
    size_t size;
  };

#define TOTAL_KEYWORDS 2125
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 31
#define MIN_HASH_VALUE 91
#define MAX_HASH_VALUE 15711
/* maximum key range = 15621, duplicates = 0 */

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
  static const unsigned short asso_values[] =
    {
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,    18,
         31,    32,    18,    21,    19, 15712,    44, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712,   174,   395,  1127,   417,   670,
        233,  1928,    88,   136,    54,   137,   165,   188,   181,  1008,
         33,    48,   167,    59,   265,   253,    51,   108,    50,   232,
         41, 15712,    19, 15712,    20, 15712, 15712,  3078,    34,  2621,
        398,    22,   142,  1880,  2435,   336,  1762,  4050,    20,   644,
         31,  1233,    84,   199,    18,    21,    19,    27,   102,   985,
       3403,  4238,   865,   581,   157,    18,    18, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712,
      15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712, 15712
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]+1];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]+3];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]+1];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+4];
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
const struct html_entity *
find_entity (str, len)
     register const char *str;
     register unsigned int len;
{
  static const struct html_entity wordlist[] =
    {
#line 518 "data/html_entities.gperf"
      {"lat", { 0xE2, 0xAA, 0xAB }, 3},
#line 314 "data/html_entities.gperf"
      {"npr", { 0xE2, 0x8A, 0x80 }, 3},
#line 2061 "data/html_entities.gperf"
      {"not", { 0xC2, 0xAC }, 2},
#line 1174 "data/html_entities.gperf"
      {"bot", { 0xE2, 0x8A, 0xA5 }, 3},
#line 1073 "data/html_entities.gperf"
      {"rarr", { 0xE2, 0x86, 0x92 }, 3},
#line 865 "data/html_entities.gperf"
      {"larr", { 0xE2, 0x86, 0x90 }, 3},
#line 951 "data/html_entities.gperf"
      {"nLt", { 0xE2, 0x89, 0xAA, 0xE2, 0x83, 0x92 }, 6},
#line 957 "data/html_entities.gperf"
      {"uarr", { 0xE2, 0x86, 0x91 }, 3},
#line 259 "data/html_entities.gperf"
      {"rpar", { 0x29 }, 1},
#line 468 "data/html_entities.gperf"
      {"lpar", { 0x28 }, 1},
#line 1122 "data/html_entities.gperf"
      {"spar", { 0xE2, 0x88, 0xA5 }, 3},
#line 1647 "data/html_entities.gperf"
      {"epar", { 0xE2, 0x8B, 0x95 }, 3},
#line 1532 "data/html_entities.gperf"
      {"ll", { 0xE2, 0x89, 0xAA }, 3},
#line 934 "data/html_entities.gperf"
      {"el", { 0xE2, 0xAA, 0x99 }, 3},
#line 860 "data/html_entities.gperf"
      {"npar", { 0xE2, 0x88, 0xA6 }, 3},
#line 638 "data/html_entities.gperf"
      {"roarr", { 0xE2, 0x87, 0xBE }, 3},
#line 125 "data/html_entities.gperf"
      {"loarr", { 0xE2, 0x87, 0xBD }, 3},
#line 2095 "data/html_entities.gperf"
      {"par", { 0xE2, 0x88, 0xA5 }, 3},
#line 1795 "data/html_entities.gperf"
      {"els", { 0xE2, 0xAA, 0x95 }, 3},
#line 153 "data/html_entities.gperf"
      {"uharr", { 0xE2, 0x86, 0xBE }, 3},
#line 1546 "data/html_entities.gperf"
      {"Pr", { 0xE2, 0xAA, 0xBB }, 3},
#line 1931 "data/html_entities.gperf"
      {"nharr", { 0xE2, 0x86, 0xAE }, 3},
#line 647 "data/html_entities.gperf"
      {"Hat", { 0x5E }, 1},
#line 744 "data/html_entities.gperf"
      {"tprime", { 0xE2, 0x80, 0xB4 }, 3},
#line 1331 "data/html_entities.gperf"
      {"rarrtl", { 0xE2, 0x86, 0xA3 }, 3},
#line 2028 "data/html_entities.gperf"
      {"npart", { 0xE2, 0x88, 0x82, 0xCC, 0xB8 }, 5},
#line 45 "data/html_entities.gperf"
      {"larrtl", { 0xE2, 0x86, 0xA2 }, 3},
#line 1088 "data/html_entities.gperf"
      {"nlt", { 0xE2, 0x89, 0xAE }, 3},
#line 1559 "data/html_entities.gperf"
      {"eparsl", { 0xE2, 0xA7, 0xA3 }, 3},
#line 63 "data/html_entities.gperf"
      {"ensp", { 0xE2, 0x80, 0x82 }, 3},
#line 871 "data/html_entities.gperf"
      {"tau", { 0xCF, 0x84 }, 2},
#line 2120 "data/html_entities.gperf"
      {"bprime", { 0xE2, 0x80, 0xB5 }, 3},
#line 319 "data/html_entities.gperf"
      {"nparsl", { 0xE2, 0xAB, 0xBD, 0xE2, 0x83, 0xA5 }, 6},
#line 1225 "data/html_entities.gperf"
      {"squ", { 0xE2, 0x96, 0xA1 }, 3},
#line 1648 "data/html_entities.gperf"
      {"lnap", { 0xE2, 0xAA, 0x89 }, 3},
#line 1370 "data/html_entities.gperf"
      {"nldr", { 0xE2, 0x80, 0xA5 }, 3},
#line 628 "data/html_entities.gperf"
      {"rotimes", { 0xE2, 0xA8, 0xB5 }, 3},
#line 1799 "data/html_entities.gperf"
      {"lotimes", { 0xE2, 0xA8, 0xB4 }, 3},
#line 1497 "data/html_entities.gperf"
      {"varr", { 0xE2, 0x86, 0x95 }, 3},
#line 1712 "data/html_entities.gperf"
      {"blk14", { 0xE2, 0x96, 0x91 }, 3},
#line 481 "data/html_entities.gperf"
      {"blk34", { 0xE2, 0x96, 0x93 }, 3},
#line 1731 "data/html_entities.gperf"
      {"Int", { 0xE2, 0x88, 0xAC }, 3},
#line 2074 "data/html_entities.gperf"
      {"lne", { 0xE2, 0xAA, 0x87 }, 3},
#line 1631 "data/html_entities.gperf"
      {"pr", { 0xE2, 0x89, 0xBA }, 3},
#line 987 "data/html_entities.gperf"
      {"rlarr", { 0xE2, 0x87, 0x84 }, 3},
#line 22 "data/html_entities.gperf"
      {"llarr", { 0xE2, 0x87, 0x87 }, 3},
#line 842 "data/html_entities.gperf"
      {"slarr", { 0xE2, 0x86, 0x90 }, 3},
#line 944 "data/html_entities.gperf"
      {"nparallel", { 0xE2, 0x88, 0xA6 }, 3},
#line 100 "data/html_entities.gperf"
      {"nGt", { 0xE2, 0x89, 0xAB, 0xE2, 0x83, 0x92 }, 6},
#line 948 "data/html_entities.gperf"
      {"bne", { 0x3D, 0xE2, 0x83, 0xA5 }, 4},
#line 580 "data/html_entities.gperf"
      {"nlarr", { 0xE2, 0x86, 0x9A }, 3},
#line 523 "data/html_entities.gperf"
      {"blk12", { 0xE2, 0x96, 0x92 }, 3},
#line 496 "data/html_entities.gperf"
      {"rrarr", { 0xE2, 0x87, 0x89 }, 3},
#line 915 "data/html_entities.gperf"
      {"lrarr", { 0xE2, 0x87, 0x86 }, 3},
#line 1526 "data/html_entities.gperf"
      {"srarr", { 0xE2, 0x86, 0x92 }, 3},
#line 1666 "data/html_entities.gperf"
      {"erarr", { 0xE2, 0xA5, 0xB1 }, 3},
#line 1667 "data/html_entities.gperf"
      {"rharu", { 0xE2, 0x87, 0x80 }, 3},
#line 1019 "data/html_entities.gperf"
      {"lharu", { 0xE2, 0x86, 0xBC }, 3},
#line 2118 "data/html_entities.gperf"
      {"nrarr", { 0xE2, 0x86, 0x9B }, 3},
#line 256 "data/html_entities.gperf"
      {"rharul", { 0xE2, 0xA5, 0xAC }, 3},
#line 364 "data/html_entities.gperf"
      {"lharul", { 0xE2, 0xA5, 0xAA }, 3},
#line 885 "data/html_entities.gperf"
      {"Not", { 0xE2, 0xAB, 0xAC }, 3},
#line 69 "data/html_entities.gperf"
      {"Larr", { 0xE2, 0x86, 0x9E }, 3},
#line 592 "data/html_entities.gperf"
      {"Rarr", { 0xE2, 0x86, 0xA0 }, 3},
#line 281 "data/html_entities.gperf"
      {"rbarr", { 0xE2, 0xA4, 0x8D }, 3},
#line 1689 "data/html_entities.gperf"
      {"rHar", { 0xE2, 0xA5, 0xA4 }, 3},
#line 1402 "data/html_entities.gperf"
      {"lbarr", { 0xE2, 0xA4, 0x8C }, 3},
#line 1953 "data/html_entities.gperf"
      {"lHar", { 0xE2, 0xA5, 0xA2 }, 3},
#line 359 "data/html_entities.gperf"
      {"smt", { 0xE2, 0xAA, 0xAA }, 3},
#line 763 "data/html_entities.gperf"
      {"Ll", { 0xE2, 0x8B, 0x98 }, 3},
#line 1877 "data/html_entities.gperf"
      {"uHar", { 0xE2, 0xA5, 0xA3 }, 3},
#line 487 "data/html_entities.gperf"
      {"Vbar", { 0xE2, 0xAB, 0xAB }, 3},
#line 954 "data/html_entities.gperf"
      {"nle", { 0xE2, 0x89, 0xB0 }, 3},
#line 1043 "data/html_entities.gperf"
      {"upuparrows", { 0xE2, 0x87, 0x88 }, 3},
#line 208 "data/html_entities.gperf"
      {"rarrap", { 0xE2, 0xA5, 0xB5 }, 3},
#line 173 "data/html_entities.gperf"
      {"phmmat", { 0xE2, 0x84, 0xB3 }, 3},
#line 1348 "data/html_entities.gperf"
      {"nbsp", { 0xC2, 0xA0 }, 2},
#line 1337 "data/html_entities.gperf"
      {"AMP", { 0x26 }, 1},
#line 1513 "data/html_entities.gperf"
      {"Rarrtl", { 0xE2, 0xA4, 0x96 }, 3},
#line 327 "data/html_entities.gperf"
      {"rbrkslu", { 0xE2, 0xA6, 0x90 }, 3},
#line 343 "data/html_entities.gperf"
      {"lbrkslu", { 0xE2, 0xA6, 0x8D }, 3},
#line 1187 "data/html_entities.gperf"
      {"napos", { 0xC5, 0x89 }, 2},
#line 1553 "data/html_entities.gperf"
      {"top", { 0xE2, 0x8A, 0xA4 }, 3},
#line 2033 "data/html_entities.gperf"
      {"lap", { 0xE2, 0xAA, 0x85 }, 3},
#line 1780 "data/html_entities.gperf"
      {"prap", { 0xE2, 0xAA, 0xB7 }, 3},
#line 1897 "data/html_entities.gperf"
      {"rarrpl", { 0xE2, 0xA5, 0x85 }, 3},
#line 1181 "data/html_entities.gperf"
      {"emsp14", { 0xE2, 0x80, 0x85 }, 3},
#line 74 "data/html_entities.gperf"
      {"larrpl", { 0xE2, 0xA4, 0xB9 }, 3},
#line 1441 "data/html_entities.gperf"
      {"nap", { 0xE2, 0x89, 0x89 }, 3},
#line 1478 "data/html_entities.gperf"
      {"qprime", { 0xE2, 0x81, 0x97 }, 3},
#line 1888 "data/html_entities.gperf"
      {"Uarr", { 0xE2, 0x86, 0x9F }, 3},
#line 1817 "data/html_entities.gperf"
      {"emsp", { 0xE2, 0x80, 0x83 }, 3},
#line 609 "data/html_entities.gperf"
      {"pre", { 0xE2, 0xAA, 0xAF }, 3},
#line 1256 "data/html_entities.gperf"
      {"rBarr", { 0xE2, 0xA4, 0x8F }, 3},
#line 268 "data/html_entities.gperf"
      {"lBarr", { 0xE2, 0xA4, 0x8E }, 3},
#line 1634 "data/html_entities.gperf"
      {"emsp13", { 0xE2, 0x80, 0x84 }, 3},
#line 1501 "data/html_entities.gperf"
      {"nprcue", { 0xE2, 0x8B, 0xA0 }, 3},
#line 919 "data/html_entities.gperf"
      {"prop", { 0xE2, 0x88, 0x9D }, 3},
#line 1946 "data/html_entities.gperf"
      {"le", { 0xE2, 0x89, 0xA4 }, 3},
#line 1379 "data/html_entities.gperf"
      {"rbrke", { 0xE2, 0xA6, 0x8C }, 3},
#line 1720 "data/html_entities.gperf"
      {"ee", { 0xE2, 0x85, 0x87 }, 3},
#line 1524 "data/html_entities.gperf"
      {"lbrke", { 0xE2, 0xA6, 0x8B }, 3},
#line 538 "data/html_entities.gperf"
      {"nles", { 0xE2, 0xA9, 0xBD, 0xCC, 0xB8 }, 5},
#line 1785 "data/html_entities.gperf"
      {"in", { 0xE2, 0x88, 0x88 }, 3},
#line 1465 "data/html_entities.gperf"
      {"topbot", { 0xE2, 0x8C, 0xB6 }, 3},
#line 1646 "data/html_entities.gperf"
      {"sharp", { 0xE2, 0x99, 0xAF }, 3},
#line 1107 "data/html_entities.gperf"
      {"ne", { 0xE2, 0x89, 0xA0 }, 3},
#line 1242 "data/html_entities.gperf"
      {"there4", { 0xE2, 0x88, 0xB4 }, 3},
#line 235 "data/html_entities.gperf"
      {"plus", { 0x2B }, 1},
#line 1519 "data/html_entities.gperf"
      {"les", { 0xE2, 0xA9, 0xBD }, 3},
#line 597 "data/html_entities.gperf"
      {"lneq", { 0xE2, 0xAA, 0x87 }, 3},
#line 1382 "data/html_entities.gperf"
      {"int", { 0xE2, 0x88, 0xAB }, 3},
#line 1624 "data/html_entities.gperf"
      {"nless", { 0xE2, 0x89, 0xAE }, 3},
#line 310 "data/html_entities.gperf"
      {"looparrowleft", { 0xE2, 0x86, 0xAB }, 3},
#line 2040 "data/html_entities.gperf"
      {"vBar", { 0xE2, 0xAB, 0xA8 }, 3},
#line 657 "data/html_entities.gperf"
      {"Tau", { 0xCE, 0xA4 }, 2},
#line 1269 "data/html_entities.gperf"
      {"epsi", { 0xCE, 0xB5 }, 2},
#line 1639 "data/html_entities.gperf"
      {"lneqq", { 0xE2, 0x89, 0xA8 }, 3},
#line 1227 "data/html_entities.gperf"
      {"upsi", { 0xCF, 0x85 }, 2},
#line 1385 "data/html_entities.gperf"
      {"Proportion", { 0xE2, 0x88, 0xB7 }, 3},
#line 1004 "data/html_entities.gperf"
      {"blacktriangle", { 0xE2, 0x96, 0xB4 }, 3},
#line 1110 "data/html_entities.gperf"
      {"blacktriangleleft", { 0xE2, 0x97, 0x82 }, 3},
#line 1329 "data/html_entities.gperf"
      {"blacktriangleright", { 0xE2, 0x96, 0xB8 }, 3},
#line 814 "data/html_entities.gperf"
      {"emacr", { 0xC4, 0x93 }, 2},
#line 782 "data/html_entities.gperf"
      {"Proportional", { 0xE2, 0x88, 0x9D }, 3},
#line 912 "data/html_entities.gperf"
      {"umacr", { 0xC5, 0xAB }, 2},
#line 297 "data/html_entities.gperf"
      {"vprop", { 0xE2, 0x88, 0x9D }, 3},
#line 781 "data/html_entities.gperf"
      {"blacktriangledown", { 0xE2, 0x96, 0xBE }, 3},
#line 822 "data/html_entities.gperf"
      {"plusdu", { 0xE2, 0xA8, 0xA5 }, 3},
#line 2069 "data/html_entities.gperf"
      {"nedot", { 0xE2, 0x89, 0x90, 0xCC, 0xB8 }, 5},
#line 1254 "data/html_entities.gperf"
      {"searr", { 0xE2, 0x86, 0x98 }, 3},
#line 606 "data/html_entities.gperf"
      {"NotSubset", { 0xE2, 0x8A, 0x82, 0xE2, 0x83, 0x92 }, 6},
#line 1000 "data/html_entities.gperf"
      {"dot", { 0xCB, 0x99 }, 2},
#line 1141 "data/html_entities.gperf"
      {"plusmn", { 0xC2, 0xB1 }, 2},
#line 260 "data/html_entities.gperf"
      {"nearr", { 0xE2, 0x86, 0x97 }, 3},
#line 858 "data/html_entities.gperf"
      {"nleq", { 0xE2, 0x89, 0xB0 }, 3},
#line 1942 "data/html_entities.gperf"
      {"frac34", { 0xC2, 0xBE }, 2},
#line 106 "data/html_entities.gperf"
      {"LT", { 0x3C }, 1},
#line 397 "data/html_entities.gperf"
      {"frac56", { 0xE2, 0x85, 0x9A }, 3},
#line 266 "data/html_entities.gperf"
      {"smeparsl", { 0xE2, 0xA7, 0xA4 }, 3},
#line 526 "data/html_entities.gperf"
      {"frac35", { 0xE2, 0x85, 0x97 }, 3},
#line 1934 "data/html_entities.gperf"
      {"Dot", { 0xC2, 0xA8 }, 2},
#line 1309 "data/html_entities.gperf"
      {"frac45", { 0xE2, 0x85, 0x98 }, 3},
#line 2104 "data/html_entities.gperf"
      {"darr", { 0xE2, 0x86, 0x93 }, 3},
#line 1904 "data/html_entities.gperf"
      {"frac14", { 0xC2, 0xBC }, 2},
#line 79 "data/html_entities.gperf"
      {"frac16", { 0xE2, 0x85, 0x99 }, 3},
#line 1734 "data/html_entities.gperf"
      {"Map", { 0xE2, 0xA4, 0x85 }, 3},
#line 649 "data/html_entities.gperf"
      {"fltns", { 0xE2, 0x96, 0xB1 }, 3},
#line 659 "data/html_entities.gperf"
      {"nleqq", { 0xE2, 0x89, 0xA6, 0xCC, 0xB8 }, 5},
#line 1763 "data/html_entities.gperf"
      {"frac15", { 0xE2, 0x85, 0x95 }, 3},
#line 1554 "data/html_entities.gperf"
      {"frac25", { 0xE2, 0x85, 0x96 }, 3},
#line 943 "data/html_entities.gperf"
      {"prurel", { 0xE2, 0x8A, 0xB0 }, 3},
#line 500 "data/html_entities.gperf"
      {"RBarr", { 0xE2, 0xA4, 0x90 }, 3},
#line 784 "data/html_entities.gperf"
      {"Verbar", { 0xE2, 0x80, 0x96 }, 3},
#line 1315 "data/html_entities.gperf"
      {"Darr", { 0xE2, 0x86, 0xA1 }, 3},
#line 1787 "data/html_entities.gperf"
      {"rnmid", { 0xE2, 0xAB, 0xAE }, 3},
#line 789 "data/html_entities.gperf"
      {"nhArr", { 0xE2, 0x87, 0x8E }, 3},
#line 710 "data/html_entities.gperf"
      {"frac12", { 0xC2, 0xBD }, 2},
#line 565 "data/html_entities.gperf"
      {"frac13", { 0xE2, 0x85, 0x93 }, 3},
#line 1903 "data/html_entities.gperf"
      {"frac23", { 0xE2, 0x85, 0x94 }, 3},
#line 38 "data/html_entities.gperf"
      {"dharr", { 0xE2, 0x87, 0x82 }, 3},
#line 1535 "data/html_entities.gperf"
      {"rhard", { 0xE2, 0x87, 0x81 }, 3},
#line 890 "data/html_entities.gperf"
      {"lhard", { 0xE2, 0x86, 0xBD }, 3},
#line 551 "data/html_entities.gperf"
      {"Re", { 0xE2, 0x84, 0x9C }, 3},
#line 61 "data/html_entities.gperf"
      {"frac38", { 0xE2, 0x85, 0x9C }, 3},
#line 401 "data/html_entities.gperf"
      {"frac58", { 0xE2, 0x85, 0x9D }, 3},
#line 540 "data/html_entities.gperf"
      {"NotSuperset", { 0xE2, 0x8A, 0x83, 0xE2, 0x83, 0x92 }, 6},
#line 1523 "data/html_entities.gperf"
      {"pluse", { 0xE2, 0xA9, 0xB2 }, 3},
#line 1600 "data/html_entities.gperf"
      {"frac18", { 0xE2, 0x85, 0x9B }, 3},
#line 1063 "data/html_entities.gperf"
      {"perp", { 0xE2, 0x8A, 0xA5 }, 3},
#line 980 "data/html_entities.gperf"
      {"Vee", { 0xE2, 0x8B, 0x81 }, 3},
#line 1872 "data/html_entities.gperf"
      {"Imacr", { 0xC4, 0xAA }, 2},
#line 716 "data/html_entities.gperf"
      {"phone", { 0xE2, 0x98, 0x8E }, 3},
#line 936 "data/html_entities.gperf"
      {"verbar", { 0x7C }, 1},
#line 1022 "data/html_entities.gperf"
      {"frac78", { 0xE2, 0x85, 0x9E }, 3},
#line 1209 "data/html_entities.gperf"
      {"leq", { 0xE2, 0x89, 0xA4 }, 3},
#line 920 "data/html_entities.gperf"
      {"nlArr", { 0xE2, 0x87, 0x8D }, 3},
#line 642 "data/html_entities.gperf"
      {"blacksquare", { 0xE2, 0x96, 0xAA }, 3},
#line 530 "data/html_entities.gperf"
      {"Amacr", { 0xC4, 0x80 }, 2},
#line 1480 "data/html_entities.gperf"
      {"leqq", { 0xE2, 0x89, 0xA6 }, 3},
#line 972 "data/html_entities.gperf"
      {"nrArr", { 0xE2, 0x87, 0x8F }, 3},
#line 610 "data/html_entities.gperf"
      {"intcal", { 0xE2, 0x8A, 0xBA }, 3},
#line 644 "data/html_entities.gperf"
      {"vee", { 0xE2, 0x88, 0xA8 }, 3},
#line 524 "data/html_entities.gperf"
      {"nbumpe", { 0xE2, 0x89, 0x8F, 0xCC, 0xB8 }, 5},
#line 1007 "data/html_entities.gperf"
      {"And", { 0xE2, 0xA9, 0x93 }, 3},
#line 1440 "data/html_entities.gperf"
      {"ulcorn", { 0xE2, 0x8C, 0x9C }, 3},
#line 316 "data/html_entities.gperf"
      {"square", { 0xE2, 0x96, 0xA1 }, 3},
#line 1630 "data/html_entities.gperf"
      {"llcorner", { 0xE2, 0x8C, 0x9E }, 3},
#line 1332 "data/html_entities.gperf"
      {"ulcorner", { 0xE2, 0x8C, 0x9C }, 3},
#line 1082 "data/html_entities.gperf"
      {"plankv", { 0xE2, 0x84, 0x8F }, 3},
#line 1596 "data/html_entities.gperf"
      {"squf", { 0xE2, 0x96, 0xAA }, 3},
#line 216 "data/html_entities.gperf"
      {"urcorn", { 0xE2, 0x8C, 0x9D }, 3},
#line 1577 "data/html_entities.gperf"
      {"lrcorner", { 0xE2, 0x8C, 0x9F }, 3},
#line 1885 "data/html_entities.gperf"
      {"fpartint", { 0xE2, 0xA8, 0x8D }, 3},
#line 1444 "data/html_entities.gperf"
      {"urcorner", { 0xE2, 0x8C, 0x9D }, 3},
#line 1818 "data/html_entities.gperf"
      {"dHar", { 0xE2, 0xA5, 0xA5 }, 3},
#line 1018 "data/html_entities.gperf"
      {"nbump", { 0xE2, 0x89, 0x8E, 0xCC, 0xB8 }, 5},
#line 1490 "data/html_entities.gperf"
      {"Upsi", { 0xCF, 0x92 }, 2},
#line 8 "data/html_entities.gperf"
      {"Square", { 0xE2, 0x96, 0xA1 }, 3},
#line 590 "data/html_entities.gperf"
      {"Umacr", { 0xC5, 0xAA }, 2},
#line 128 "data/html_entities.gperf"
      {"veebar", { 0xE2, 0x8A, 0xBB }, 3},
#line 408 "data/html_entities.gperf"
      {"ropar", { 0xE2, 0xA6, 0x86 }, 3},
#line 2057 "data/html_entities.gperf"
      {"lopar", { 0xE2, 0xA6, 0x85 }, 3},
#line 505 "data/html_entities.gperf"
      {"NotNestedLessLess", { 0xE2, 0xAA, 0xA1, 0xCC, 0xB8 }, 5},
#line 1607 "data/html_entities.gperf"
      {"QUOT", { 0x22 }, 1},
#line 67 "data/html_entities.gperf"
      {"nhpar", { 0xE2, 0xAB, 0xB2 }, 3},
#line 869 "data/html_entities.gperf"
      {"napid", { 0xE2, 0x89, 0x8B, 0xCC, 0xB8 }, 5},
#line 1935 "data/html_entities.gperf"
      {"swarr", { 0xE2, 0x86, 0x99 }, 3},
#line 2011 "data/html_entities.gperf"
      {"sol", { 0x2F }, 1},
#line 718 "data/html_entities.gperf"
      {"nwarr", { 0xE2, 0x86, 0x96 }, 3},
#line 692 "data/html_entities.gperf"
      {"nis", { 0xE2, 0x8B, 0xBC }, 3},
#line 148 "data/html_entities.gperf"
      {"ropf", { 0xF0, 0x9D, 0x95, 0xA3 }, 4},
#line 625 "data/html_entities.gperf"
      {"topf", { 0xF0, 0x9D, 0x95, 0xA5 }, 4},
#line 1743 "data/html_entities.gperf"
      {"lopf", { 0xF0, 0x9D, 0x95, 0x9D }, 4},
#line 1234 "data/html_entities.gperf"
      {"sopf", { 0xF0, 0x9D, 0x95, 0xA4 }, 4},
#line 1819 "data/html_entities.gperf"
      {"eopf", { 0xF0, 0x9D, 0x95, 0x96 }, 4},
#line 600 "data/html_entities.gperf"
      {"fnof", { 0xC6, 0x92 }, 2},
#line 1861 "data/html_entities.gperf"
      {"uopf", { 0xF0, 0x9D, 0x95, 0xA6 }, 4},
#line 1597 "data/html_entities.gperf"
      {"nLl", { 0xE2, 0x8B, 0x98, 0xCC, 0xB8 }, 5},
#line 1341 "data/html_entities.gperf"
      {"nopf", { 0xF0, 0x9D, 0x95, 0x9F }, 4},
#line 950 "data/html_entities.gperf"
      {"bernou", { 0xE2, 0x84, 0xAC }, 3},
#line 620 "data/html_entities.gperf"
      {"Popf", { 0xE2, 0x84, 0x99 }, 3},
#line 1750 "data/html_entities.gperf"
      {"bopf", { 0xF0, 0x9D, 0x95, 0x93 }, 4},
#line 108 "data/html_entities.gperf"
      {"Zopf", { 0xE2, 0x84, 0xA4 }, 3},
#line 678 "data/html_entities.gperf"
      {"thkap", { 0xE2, 0x89, 0x88 }, 3},
#line 726 "data/html_entities.gperf"
      {"solb", { 0xE2, 0xA7, 0x84 }, 3},
#line 1629 "data/html_entities.gperf"
      {"semi", { 0x3B }, 1},
#line 896 "data/html_entities.gperf"
      {"mp", { 0xE2, 0x88, 0x93 }, 3},
#line 1155 "data/html_entities.gperf"
      {"Qopf", { 0xE2, 0x84, 0x9A }, 3},
#line 1585 "data/html_entities.gperf"
      {"Xopf", { 0xF0, 0x9D, 0x95, 0x8F }, 4},
#line 870 "data/html_entities.gperf"
      {"Vopf", { 0xF0, 0x9D, 0x95, 0x8D }, 4},
#line 573 "data/html_entities.gperf"
      {"imacr", { 0xC4, 0xAB }, 2},
#line 344 "data/html_entities.gperf"
      {"Jopf", { 0xF0, 0x9D, 0x95, 0x81 }, 4},
#line 398 "data/html_entities.gperf"
      {"lnsim", { 0xE2, 0x8B, 0xA6 }, 3},
#line 907 "data/html_entities.gperf"
      {"rArr", { 0xE2, 0x87, 0x92 }, 3},
#line 968 "data/html_entities.gperf"
      {"SquareSubset", { 0xE2, 0x8A, 0x8F }, 3},
#line 535 "data/html_entities.gperf"
      {"lArr", { 0xE2, 0x87, 0x90 }, 3},
#line 2015 "data/html_entities.gperf"
      {"Sopf", { 0xF0, 0x9D, 0x95, 0x8A }, 4},
#line 850 "data/html_entities.gperf"
      {"SquareSuperset", { 0xE2, 0x8A, 0x90 }, 3},
#line 234 "data/html_entities.gperf"
      {"SquareSubsetEqual", { 0xE2, 0x8A, 0x91 }, 3},
#line 472 "data/html_entities.gperf"
      {"uArr", { 0xE2, 0x87, 0x91 }, 3},
#line 2067 "data/html_entities.gperf"
      {"eqsim", { 0xE2, 0x89, 0x82 }, 3},
#line 1662 "data/html_entities.gperf"
      {"SquareSupersetEqual", { 0xE2, 0x8A, 0x92 }, 3},
#line 1913 "data/html_entities.gperf"
      {"ell", { 0xE2, 0x84, 0x93 }, 3},
#line 1917 "data/html_entities.gperf"
      {"uharl", { 0xE2, 0x86, 0xBF }, 3},
#line 417 "data/html_entities.gperf"
      {"rlm", { 0xE2, 0x80, 0x8F }, 3},
#line 1565 "data/html_entities.gperf"
      {"solbar", { 0xE2, 0x8C, 0xBF }, 3},
#line 1103 "data/html_entities.gperf"
      {"popf", { 0xF0, 0x9D, 0x95, 0xA1 }, 4},
#line 2112 "data/html_entities.gperf"
      {"lparlt", { 0xE2, 0xA6, 0x93 }, 3},
#line 1040 "data/html_entities.gperf"
      {"Hopf", { 0xE2, 0x84, 0x8D }, 3},
#line 1879 "data/html_entities.gperf"
      {"rAarr", { 0xE2, 0x87, 0x9B }, 3},
#line 1727 "data/html_entities.gperf"
      {"ulcrop", { 0xE2, 0x8C, 0x8F }, 3},
#line 1842 "data/html_entities.gperf"
      {"lAarr", { 0xE2, 0x87, 0x9A }, 3},
#line 1200 "data/html_entities.gperf"
      {"mldr", { 0xE2, 0x80, 0xA6 }, 3},
#line 695 "data/html_entities.gperf"
      {"lrm", { 0xE2, 0x80, 0x8E }, 3},
#line 341 "data/html_entities.gperf"
      {"LessGreater", { 0xE2, 0x89, 0xB6 }, 3},
#line 1560 "data/html_entities.gperf"
      {"vopf", { 0xF0, 0x9D, 0x95, 0xA7 }, 4},
#line 1868 "data/html_entities.gperf"
      {"Wopf", { 0xF0, 0x9D, 0x95, 0x8E }, 4},
#line 732 "data/html_entities.gperf"
      {"urcrop", { 0xE2, 0x8C, 0x8E }, 3},
#line 1419 "data/html_entities.gperf"
      {"simrarr", { 0xE2, 0xA5, 0xB2 }, 3},
#line 2081 "data/html_entities.gperf"
      {"iprod", { 0xE2, 0xA8, 0xBC }, 3},
#line 779 "data/html_entities.gperf"
      {"profsurf", { 0xE2, 0x8C, 0x93 }, 3},
#line 102 "data/html_entities.gperf"
      {"seArr", { 0xE2, 0x87, 0x98 }, 3},
#line 1487 "data/html_entities.gperf"
      {"NotReverseElement", { 0xE2, 0x88, 0x8C }, 3},
#line 1415 "data/html_entities.gperf"
      {"lE", { 0xE2, 0x89, 0xA6 }, 3},
#line 507 "data/html_entities.gperf"
      {"pound", { 0xC2, 0xA3 }, 2},
#line 1411 "data/html_entities.gperf"
      {"neArr", { 0xE2, 0x87, 0x97 }, 3},
#line 1153 "data/html_entities.gperf"
      {"nlsim", { 0xE2, 0x89, 0xB4 }, 3},
#line 71 "data/html_entities.gperf"
      {"Iopf", { 0xF0, 0x9D, 0x95, 0x80 }, 4},
#line 1578 "data/html_entities.gperf"
      {"Kopf", { 0xF0, 0x9D, 0x95, 0x82 }, 4},
#line 532 "data/html_entities.gperf"
      {"vArr", { 0xE2, 0x87, 0x95 }, 3},
#line 1286 "data/html_entities.gperf"
      {"fopf", { 0xF0, 0x9D, 0x95, 0x97 }, 4},
#line 230 "data/html_entities.gperf"
      {"varsubsetneq", { 0xE2, 0x8A, 0x8A, 0xEF, 0xB8, 0x80 }, 6},
#line 889 "data/html_entities.gperf"
      {"varsubsetneqq", { 0xE2, 0xAB, 0x8B, 0xEF, 0xB8, 0x80 }, 6},
#line 581 "data/html_entities.gperf"
      {"eDDot", { 0xE2, 0xA9, 0xB7 }, 3},
#line 1746 "data/html_entities.gperf"
      {"SquareIntersection", { 0xE2, 0x8A, 0x93 }, 3},
#line 1977 "data/html_entities.gperf"
      {"squarf", { 0xE2, 0x96, 0xAA }, 3},
#line 591 "data/html_entities.gperf"
      {"bnequiv", { 0xE2, 0x89, 0xA1, 0xE2, 0x83, 0xA5 }, 6},
#line 365 "data/html_entities.gperf"
      {"erDot", { 0xE2, 0x89, 0x93 }, 3},
#line 1704 "data/html_entities.gperf"
      {"smashp", { 0xE2, 0xA8, 0xB3 }, 3},
#line 925 "data/html_entities.gperf"
      {"Lopf", { 0xF0, 0x9D, 0x95, 0x83 }, 4},
#line 1214 "data/html_entities.gperf"
      {"Ropf", { 0xE2, 0x84, 0x9D }, 3},
#line 185 "data/html_entities.gperf"
      {"Aopf", { 0xF0, 0x9D, 0x94, 0xB8 }, 4},
#line 1075 "data/html_entities.gperf"
      {"rlhar", { 0xE2, 0x87, 0x8C }, 3},
#line 831 "data/html_entities.gperf"
      {"LessLess", { 0xE2, 0xAA, 0xA1 }, 3},
#line 1150 "data/html_entities.gperf"
      {"Nopf", { 0xE2, 0x84, 0x95 }, 3},
#line 2043 "data/html_entities.gperf"
      {"Mopf", { 0xF0, 0x9D, 0x95, 0x84 }, 4},
#line 976 "data/html_entities.gperf"
      {"uml", { 0xC2, 0xA8 }, 2},
#line 130 "data/html_entities.gperf"
      {"varsupsetneq", { 0xE2, 0x8A, 0x8B, 0xEF, 0xB8, 0x80 }, 6},
#line 1530 "data/html_entities.gperf"
      {"varsupsetneqq", { 0xE2, 0xAB, 0x8C, 0xEF, 0xB8, 0x80 }, 6},
#line 1836 "data/html_entities.gperf"
      {"parsl", { 0xE2, 0xAB, 0xBD }, 3},
#line 1125 "data/html_entities.gperf"
      {"PlusMinus", { 0xC2, 0xB1 }, 2},
#line 1026 "data/html_entities.gperf"
      {"lrhar", { 0xE2, 0x87, 0x8B }, 3},
#line 14 "data/html_entities.gperf"
      {"qopf", { 0xF0, 0x9D, 0x95, 0xA2 }, 4},
#line 486 "data/html_entities.gperf"
      {"marker", { 0xE2, 0x96, 0xAE }, 3},
#line 1575 "data/html_entities.gperf"
      {"prsim", { 0xE2, 0x89, 0xBE }, 3},
#line 1289 "data/html_entities.gperf"
      {"rarrlp", { 0xE2, 0x86, 0xAC }, 3},
#line 1981 "data/html_entities.gperf"
      {"larrlp", { 0xE2, 0x86, 0xAB }, 3},
#line 1675 "data/html_entities.gperf"
      {"DD", { 0xE2, 0x85, 0x85 }, 3},
#line 302 "data/html_entities.gperf"
      {"pm", { 0xC2, 0xB1 }, 2},
#line 1612 "data/html_entities.gperf"
      {"Yopf", { 0xF0, 0x9D, 0x95, 0x90 }, 4},
#line 1725 "data/html_entities.gperf"
      {"Fopf", { 0xF0, 0x9D, 0x94, 0xBD }, 4},
#line 1543 "data/html_entities.gperf"
      {"lnE", { 0xE2, 0x89, 0xA8 }, 3},
#line 1215 "data/html_entities.gperf"
      {"ETH", { 0xC3, 0x90 }, 2},
#line 1384 "data/html_entities.gperf"
      {"map", { 0xE2, 0x86, 0xA6 }, 3},
#line 874 "data/html_entities.gperf"
      {"Uopf", { 0xF0, 0x9D, 0x95, 0x8C }, 4},
#line 2050 "data/html_entities.gperf"
      {"Topf", { 0xF0, 0x9D, 0x95, 0x8B }, 4},
#line 1263 "data/html_entities.gperf"
      {"Im", { 0xE2, 0x84, 0x91 }, 3},
#line 2021 "data/html_entities.gperf"
      {"dlcorn", { 0xE2, 0x8C, 0x9E }, 3},
#line 594 "data/html_entities.gperf"
      {"drcorn", { 0xE2, 0x8C, 0x9F }, 3},
#line 1226 "data/html_entities.gperf"
      {"Precedes", { 0xE2, 0x89, 0xBA }, 3},
#line 768 "data/html_entities.gperf"
      {"ni", { 0xE2, 0x88, 0x8B }, 3},
#line 1149 "data/html_entities.gperf"
      {"napE", { 0xE2, 0xA9, 0xB0, 0xCC, 0xB8 }, 5},
#line 482 "data/html_entities.gperf"
      {"Pi", { 0xCE, 0xA0 }, 2},
#line 1430 "data/html_entities.gperf"
      {"preceq", { 0xE2, 0xAA, 0xAF }, 3},
#line 1533 "data/html_entities.gperf"
      {"nlE", { 0xE2, 0x89, 0xA6, 0xCC, 0xB8 }, 5},
#line 2054 "data/html_entities.gperf"
      {"rbrace", { 0x7D }, 1},
#line 212 "data/html_entities.gperf"
      {"lbrace", { 0x7B }, 1},
#line 1351 "data/html_entities.gperf"
      {"Xi", { 0xCE, 0x9E }, 2},
#line 733 "data/html_entities.gperf"
      {"iopf", { 0xF0, 0x9D, 0x95, 0x9A }, 4},
#line 10 "data/html_entities.gperf"
      {"nvap", { 0xE2, 0x89, 0x8D, 0xE2, 0x83, 0x92 }, 6},
#line 566 "data/html_entities.gperf"
      {"frasl", { 0xE2, 0x81, 0x84 }, 3},
#line 340 "data/html_entities.gperf"
      {"rbrksld", { 0xE2, 0xA6, 0x8E }, 3},
#line 2025 "data/html_entities.gperf"
      {"lbrksld", { 0xE2, 0xA6, 0x8F }, 3},
#line 1381 "data/html_entities.gperf"
      {"lesseqqgtr", { 0xE2, 0xAA, 0x8B }, 3},
#line 463 "data/html_entities.gperf"
      {"simne", { 0xE2, 0x89, 0x86 }, 3},
#line 895 "data/html_entities.gperf"
      {"pi", { 0xCF, 0x80 }, 2},
#line 1002 "data/html_entities.gperf"
      {"swArr", { 0xE2, 0x87, 0x99 }, 3},
#line 969 "data/html_entities.gperf"
      {"backprime", { 0xE2, 0x80, 0xB5 }, 3},
#line 1705 "data/html_entities.gperf"
      {"PrecedesSlantEqual", { 0xE2, 0x89, 0xBC }, 3},
#line 1690 "data/html_entities.gperf"
      {"nwArr", { 0xE2, 0x87, 0x96 }, 3},
#line 1555 "data/html_entities.gperf"
      {"rsqb", { 0x5D }, 1},
#line 288 "data/html_entities.gperf"
      {"lsqb", { 0x5B }, 1},
#line 956 "data/html_entities.gperf"
      {"nesim", { 0xE2, 0x89, 0x82, 0xCC, 0xB8 }, 5},
#line 2087 "data/html_entities.gperf"
      {"Emacr", { 0xC4, 0x92 }, 2},
#line 1318 "data/html_entities.gperf"
      {"wp", { 0xE2, 0x84, 0x98 }, 3},
#line 1496 "data/html_entities.gperf"
      {"sqcaps", { 0xE2, 0x8A, 0x93, 0xEF, 0xB8, 0x80 }, 6},
#line 305 "data/html_entities.gperf"
      {"prE", { 0xE2, 0xAA, 0xB3 }, 3},
#line 966 "data/html_entities.gperf"
      {"Bopf", { 0xF0, 0x9D, 0x94, 0xB9 }, 4},
#line 665 "data/html_entities.gperf"
      {"esdot", { 0xE2, 0x89, 0x90 }, 3},
#line 913 "data/html_entities.gperf"
      {"dopf", { 0xF0, 0x9D, 0x95, 0x95 }, 4},
#line 1308 "data/html_entities.gperf"
      {"imof", { 0xE2, 0x8A, 0xB7 }, 3},
#line 1754 "data/html_entities.gperf"
      {"lozf", { 0xE2, 0xA7, 0xAB }, 3},
#line 1854 "data/html_entities.gperf"
      {"wr", { 0xE2, 0x89, 0x80 }, 3},
#line 787 "data/html_entities.gperf"
      {"macr", { 0xC2, 0xAF }, 2},
#line 1030 "data/html_entities.gperf"
      {"Sqrt", { 0xE2, 0x88, 0x9A }, 3},
#line 82 "data/html_entities.gperf"
      {"Dopf", { 0xF0, 0x9D, 0x94, 0xBB }, 4},
#line 836 "data/html_entities.gperf"
      {"Or", { 0xE2, 0xA9, 0x94 }, 3},
#line 2076 "data/html_entities.gperf"
      {"sqcap", { 0xE2, 0x8A, 0x93 }, 3},
#line 1013 "data/html_entities.gperf"
      {"Bernoullis", { 0xE2, 0x84, 0xAC }, 3},
#line 533 "data/html_entities.gperf"
      {"part", { 0xE2, 0x88, 0x82 }, 3},
#line 1169 "data/html_entities.gperf"
      {"dArr", { 0xE2, 0x87, 0x93 }, 3},
#line 1657 "data/html_entities.gperf"
      {"bnot", { 0xE2, 0x8C, 0x90 }, 3},
#line 311 "data/html_entities.gperf"
      {"preccurlyeq", { 0xE2, 0x89, 0xBC }, 3},
#line 1922 "data/html_entities.gperf"
      {"dharl", { 0xE2, 0x87, 0x83 }, 3},
#line 1683 "data/html_entities.gperf"
      {"pluscir", { 0xE2, 0xA8, 0xA2 }, 3},
#line 792 "data/html_entities.gperf"
      {"eqvparsl", { 0xE2, 0xA7, 0xA5 }, 3},
#line 1671 "data/html_entities.gperf"
      {"dlcrop", { 0xE2, 0x8C, 0x8D }, 3},
#line 1576 "data/html_entities.gperf"
      {"NotSubsetEqual", { 0xE2, 0x8A, 0x88 }, 3},
#line 448 "data/html_entities.gperf"
      {"epsiv", { 0xCF, 0xB5 }, 2},
#line 276 "data/html_entities.gperf"
      {"nsub", { 0xE2, 0x8A, 0x84 }, 3},
#line 563 "data/html_entities.gperf"
      {"varphi", { 0xCF, 0x95 }, 2},
#line 1610 "data/html_entities.gperf"
      {"drcrop", { 0xE2, 0x8C, 0x8C }, 3},
#line 403 "data/html_entities.gperf"
      {"dotplus", { 0xE2, 0x88, 0x94 }, 3},
#line 2012 "data/html_entities.gperf"
      {"Element", { 0xE2, 0x88, 0x88 }, 3},
#line 1617 "data/html_entities.gperf"
      {"eDot", { 0xE2, 0x89, 0x91 }, 3},
#line 682 "data/html_entities.gperf"
      {"diams", { 0xE2, 0x99, 0xA6 }, 3},
#line 2090 "data/html_entities.gperf"
      {"die", { 0xC2, 0xA8 }, 2},
#line 395 "data/html_entities.gperf"
      {"NotSupersetEqual", { 0xE2, 0x8A, 0x89 }, 3},
#line 335 "data/html_entities.gperf"
      {"brvbar", { 0xC2, 0xA6 }, 2},
#line 880 "data/html_entities.gperf"
      {"incare", { 0xE2, 0x84, 0x85 }, 3},
#line 2116 "data/html_entities.gperf"
      {"nsupset", { 0xE2, 0x8A, 0x83, 0xE2, 0x83, 0x92 }, 6},
#line 1609 "data/html_entities.gperf"
      {"nsubset", { 0xE2, 0x8A, 0x82, 0xE2, 0x83, 0x92 }, 6},
#line 263 "data/html_entities.gperf"
      {"nsup", { 0xE2, 0x8A, 0x85 }, 3},
#line 1274 "data/html_entities.gperf"
      {"easter", { 0xE2, 0xA9, 0xAE }, 3},
#line 369 "data/html_entities.gperf"
      {"mlcp", { 0xE2, 0xAB, 0x9B }, 3},
#line 614 "data/html_entities.gperf"
      {"parallel", { 0xE2, 0x88, 0xA5 }, 3},
#line 1079 "data/html_entities.gperf"
      {"equals", { 0x3D }, 1},
#line 1761 "data/html_entities.gperf"
      {"LessTilde", { 0xE2, 0x89, 0xB2 }, 3},
#line 1825 "data/html_entities.gperf"
      {"equiv", { 0xE2, 0x89, 0xA1 }, 3},
#line 508 "data/html_entities.gperf"
      {"flat", { 0xE2, 0x99, 0xAD }, 3},
#line 111 "data/html_entities.gperf"
      {"forall", { 0xE2, 0x88, 0x80 }, 3},
#line 1992 "data/html_entities.gperf"
      {"NotHumpEqual", { 0xE2, 0x89, 0x8F, 0xCC, 0xB8 }, 5},
#line 379 "data/html_entities.gperf"
      {"rppolint", { 0xE2, 0xA8, 0x92 }, 3},
#line 1804 "data/html_entities.gperf"
      {"bNot", { 0xE2, 0xAB, 0xAD }, 3},
#line 126 "data/html_entities.gperf"
      {"forkv", { 0xE2, 0xAB, 0x99 }, 3},
#line 1281 "data/html_entities.gperf"
      {"nsupe", { 0xE2, 0x8A, 0x89 }, 3},
#line 1170 "data/html_entities.gperf"
      {"nsube", { 0xE2, 0x8A, 0x88 }, 3},
#line 1178 "data/html_entities.gperf"
      {"becaus", { 0xE2, 0x88, 0xB5 }, 3},
#line 228 "data/html_entities.gperf"
      {"seswar", { 0xE2, 0xA4, 0xA9 }, 3},
#line 734 "data/html_entities.gperf"
      {"ii", { 0xE2, 0x85, 0x88 }, 3},
#line 1426 "data/html_entities.gperf"
      {"nsqsube", { 0xE2, 0x8B, 0xA2 }, 3},
#line 1398 "data/html_entities.gperf"
      {"opar", { 0xE2, 0xA6, 0xB7 }, 3},
#line 680 "data/html_entities.gperf"
      {"because", { 0xE2, 0x88, 0xB5 }, 3},
#line 1121 "data/html_entities.gperf"
      {"lvertneqq", { 0xE2, 0x89, 0xA8, 0xEF, 0xB8, 0x80 }, 6},
#line 324 "data/html_entities.gperf"
      {"sim", { 0xE2, 0x88, 0xBC }, 3},
#line 1173 "data/html_entities.gperf"
      {"measuredangle", { 0xE2, 0x88, 0xA1 }, 3},
#line 380 "data/html_entities.gperf"
      {"mopf", { 0xF0, 0x9D, 0x95, 0x9E }, 4},
#line 1923 "data/html_entities.gperf"
      {"period", { 0x2E }, 1},
#line 903 "data/html_entities.gperf"
      {"or", { 0xE2, 0x88, 0xA8 }, 3},
#line 1297 "data/html_entities.gperf"
      {"rho", { 0xCF, 0x81 }, 2},
#line 1687 "data/html_entities.gperf"
      {"olt", { 0xE2, 0xA7, 0x80 }, 3},
#line 1232 "data/html_entities.gperf"
      {"notin", { 0xE2, 0x88, 0x89 }, 3},
#line 1350 "data/html_entities.gperf"
      {"Eopf", { 0xF0, 0x9D, 0x94, 0xBC }, 4},
#line 1433 "data/html_entities.gperf"
      {"nsqsupe", { 0xE2, 0x8B, 0xA3 }, 3},
#line 621 "data/html_entities.gperf"
      {"ForAll", { 0xE2, 0x88, 0x80 }, 3},
#line 684 "data/html_entities.gperf"
      {"nvrArr", { 0xE2, 0xA4, 0x83 }, 3},
#line 210 "data/html_entities.gperf"
      {"oS", { 0xE2, 0x93, 0x88 }, 3},
#line 562 "data/html_entities.gperf"
      {"nsupseteq", { 0xE2, 0x8A, 0x89 }, 3},
#line 634 "data/html_entities.gperf"
      {"nsubseteq", { 0xE2, 0x8A, 0x88 }, 3},
#line 284 "data/html_entities.gperf"
      {"ratio", { 0xE2, 0x88, 0xB6 }, 3},
#line 1285 "data/html_entities.gperf"
      {"thetav", { 0xCF, 0x91 }, 2},
#line 908 "data/html_entities.gperf"
      {"Vert", { 0xE2, 0x80, 0x96 }, 3},
#line 1393 "data/html_entities.gperf"
      {"thorn", { 0xC3, 0xBE }, 2},
#line 717 "data/html_entities.gperf"
      {"Del", { 0xE2, 0x88, 0x87 }, 3},
#line 572 "data/html_entities.gperf"
      {"olarr", { 0xE2, 0x86, 0xBA }, 3},
#line 1005 "data/html_entities.gperf"
      {"Omacr", { 0xC5, 0x8C }, 2},
#line 821 "data/html_entities.gperf"
      {"eqslantgtr", { 0xE2, 0xAA, 0x96 }, 3},
#line 651 "data/html_entities.gperf"
      {"Cap", { 0xE2, 0x8B, 0x92 }, 3},
#line 1857 "data/html_entities.gperf"
      {"simplus", { 0xE2, 0xA8, 0xA4 }, 3},
#line 1747 "data/html_entities.gperf"
      {"eqslantless", { 0xE2, 0xAA, 0x95 }, 3},
#line 1333 "data/html_entities.gperf"
      {"orarr", { 0xE2, 0x86, 0xBB }, 3},
#line 1909 "data/html_entities.gperf"
      {"wedbar", { 0xE2, 0xA9, 0x9F }, 3},
#line 686 "data/html_entities.gperf"
      {"NotLess", { 0xE2, 0x89, 0xAE }, 3},
#line 447 "data/html_entities.gperf"
      {"rscr", { 0xF0, 0x9D, 0x93, 0x87 }, 4},
#line 677 "data/html_entities.gperf"
      {"tscr", { 0xF0, 0x9D, 0x93, 0x89 }, 4},
#line 1098 "data/html_entities.gperf"
      {"lscr", { 0xF0, 0x9D, 0x93, 0x81 }, 4},
#line 899 "data/html_entities.gperf"
      {"sscr", { 0xF0, 0x9D, 0x93, 0x88 }, 4},
#line 1603 "data/html_entities.gperf"
      {"escr", { 0xE2, 0x84, 0xAF }, 3},
#line 412 "data/html_entities.gperf"
      {"uscr", { 0xF0, 0x9D, 0x93, 0x8A }, 4},
#line 1824 "data/html_entities.gperf"
      {"Cross", { 0xE2, 0xA8, 0xAF }, 3},
#line 708 "data/html_entities.gperf"
      {"nscr", { 0xF0, 0x9D, 0x93, 0x83 }, 4},
#line 1323 "data/html_entities.gperf"
      {"Pscr", { 0xF0, 0x9D, 0x92, 0xAB }, 4},
#line 170 "data/html_entities.gperf"
      {"bscr", { 0xF0, 0x9D, 0x92, 0xB7 }, 4},
#line 1542 "data/html_entities.gperf"
      {"vert", { 0x7C }, 1},
#line 1541 "data/html_entities.gperf"
      {"oror", { 0xE2, 0xA9, 0x96 }, 3},
#line 736 "data/html_entities.gperf"
      {"DoubleLeftTee", { 0xE2, 0xAB, 0xA4 }, 3},
#line 1033 "data/html_entities.gperf"
      {"mDDot", { 0xE2, 0x88, 0xBA }, 3},
#line 636 "data/html_entities.gperf"
      {"Zscr", { 0xF0, 0x9D, 0x92, 0xB5 }, 4},
#line 195 "data/html_entities.gperf"
      {"NotLessLess", { 0xE2, 0x89, 0xAA, 0xCC, 0xB8 }, 5},
#line 1148 "data/html_entities.gperf"
      {"Qscr", { 0xF0, 0x9D, 0x92, 0xAC }, 4},
#line 1916 "data/html_entities.gperf"
      {"Xscr", { 0xF0, 0x9D, 0x92, 0xB3 }, 4},
#line 478 "data/html_entities.gperf"
      {"Vscr", { 0xF0, 0x9D, 0x92, 0xB1 }, 4},
#line 986 "data/html_entities.gperf"
      {"Jscr", { 0xF0, 0x9D, 0x92, 0xA5 }, 4},
#line 27 "data/html_entities.gperf"
      {"vBarv", { 0xE2, 0xAB, 0xA9 }, 3},
#line 146 "data/html_entities.gperf"
      {"COPY", { 0xC2, 0xA9 }, 2},
#line 493 "data/html_entities.gperf"
      {"loz", { 0xE2, 0x97, 0x8A }, 3},
#line 1399 "data/html_entities.gperf"
      {"Sscr", { 0xF0, 0x9D, 0x92, 0xAE }, 4},
#line 1104 "data/html_entities.gperf"
      {"nsmid", { 0xE2, 0x88, 0xA4 }, 3},
#line 433 "data/html_entities.gperf"
      {"nvHarr", { 0xE2, 0xA4, 0x84 }, 3},
#line 227 "data/html_entities.gperf"
      {"NotLessGreater", { 0xE2, 0x89, 0xB8 }, 3},
#line 1852 "data/html_entities.gperf"
      {"between", { 0xE2, 0x89, 0xAC }, 3},
#line 162 "data/html_entities.gperf"
      {"NotLessTilde", { 0xE2, 0x89, 0xB4 }, 3},
#line 357 "data/html_entities.gperf"
      {"NotLessEqual", { 0xE2, 0x89, 0xB0 }, 3},
#line 1644 "data/html_entities.gperf"
      {"Rho", { 0xCE, 0xA1 }, 2},
#line 1127 "data/html_entities.gperf"
      {"notinvb", { 0xE2, 0x8B, 0xB7 }, 3},
#line 298 "data/html_entities.gperf"
      {"pscr", { 0xF0, 0x9D, 0x93, 0x85 }, 4},
#line 1404 "data/html_entities.gperf"
      {"Hscr", { 0xE2, 0x84, 0x8B }, 3},
#line 1813 "data/html_entities.gperf"
      {"vscr", { 0xF0, 0x9D, 0x93, 0x8B }, 4},
#line 1192 "data/html_entities.gperf"
      {"Wscr", { 0xF0, 0x9D, 0x92, 0xB2 }, 4},
#line 184 "data/html_entities.gperf"
      {"shortmid", { 0xE2, 0x88, 0xA3 }, 3},
#line 879 "data/html_entities.gperf"
      {"zopf", { 0xF0, 0x9D, 0x95, 0xAB }, 4},
#line 392 "data/html_entities.gperf"
      {"Iscr", { 0xE2, 0x84, 0x90 }, 3},
#line 1230 "data/html_entities.gperf"
      {"Kscr", { 0xF0, 0x9D, 0x92, 0xA6 }, 4},
#line 1368 "data/html_entities.gperf"
      {"fscr", { 0xF0, 0x9D, 0x92, 0xBB }, 4},
#line 918 "data/html_entities.gperf"
      {"ShortLeftArrow", { 0xE2, 0x86, 0x90 }, 3},
#line 325 "data/html_entities.gperf"
      {"Lscr", { 0xE2, 0x84, 0x92 }, 3},
#line 1483 "data/html_entities.gperf"
      {"Rscr", { 0xE2, 0x84, 0x9B }, 3},
#line 522 "data/html_entities.gperf"
      {"female", { 0xE2, 0x99, 0x80 }, 3},
#line 338 "data/html_entities.gperf"
      {"Ascr", { 0xF0, 0x9D, 0x92, 0x9C }, 4},
#line 407 "data/html_entities.gperf"
      {"nsupseteqq", { 0xE2, 0xAB, 0x86, 0xCC, 0xB8 }, 5},
#line 1960 "data/html_entities.gperf"
      {"nsubseteqq", { 0xE2, 0xAB, 0x85, 0xCC, 0xB8 }, 5},
#line 1816 "data/html_entities.gperf"
      {"Nscr", { 0xF0, 0x9D, 0x92, 0xA9 }, 4},
#line 2130 "data/html_entities.gperf"
      {"nvsim", { 0xE2, 0x88, 0xBC, 0xE2, 0x83, 0x92 }, 6},
#line 1765 "data/html_entities.gperf"
      {"Mscr", { 0xE2, 0x84, 0xB3 }, 3},
#line 150 "data/html_entities.gperf"
      {"roplus", { 0xE2, 0xA8, 0xAE }, 3},
#line 155 "data/html_entities.gperf"
      {"loplus", { 0xE2, 0xA8, 0xAD }, 3},
#line 1930 "data/html_entities.gperf"
      {"qscr", { 0xF0, 0x9D, 0x93, 0x86 }, 4},
#line 646 "data/html_entities.gperf"
      {"real", { 0xE2, 0x84, 0x9C }, 3},
#line 1199 "data/html_entities.gperf"
      {"profline", { 0xE2, 0x8C, 0x92 }, 3},
#line 1386 "data/html_entities.gperf"
      {"omacr", { 0xC5, 0x8D }, 2},
#line 413 "data/html_entities.gperf"
      {"blacklozenge", { 0xE2, 0xA7, 0xAB }, 3},
#line 1376 "data/html_entities.gperf"
      {"nspar", { 0xE2, 0x88, 0xA6 }, 3},
#line 873 "data/html_entities.gperf"
      {"llhard", { 0xE2, 0xA5, 0xAB }, 3},
#line 856 "data/html_entities.gperf"
      {"Yscr", { 0xF0, 0x9D, 0x92, 0xB4 }, 4},
#line 561 "data/html_entities.gperf"
      {"Fscr", { 0xE2, 0x84, 0xB1 }, 3},
#line 389 "data/html_entities.gperf"
      {"reals", { 0xE2, 0x84, 0x9D }, 3},
#line 2046 "data/html_entities.gperf"
      {"DoubleDot", { 0xC2, 0xA8 }, 2},
#line 1231 "data/html_entities.gperf"
      {"NotElement", { 0xE2, 0x88, 0x89 }, 3},
#line 1461 "data/html_entities.gperf"
      {"lrhard", { 0xE2, 0xA5, 0xAD }, 3},
#line 1583 "data/html_entities.gperf"
      {"RoundImplies", { 0xE2, 0xA5, 0xB0 }, 3},
#line 2018 "data/html_entities.gperf"
      {"UpEquilibrium", { 0xE2, 0xA5, 0xAE }, 3},
#line 1380 "data/html_entities.gperf"
      {"Uscr", { 0xF0, 0x9D, 0x92, 0xB0 }, 4},
#line 571 "data/html_entities.gperf"
      {"wopf", { 0xF0, 0x9D, 0x95, 0xA8 }, 4},
#line 467 "data/html_entities.gperf"
      {"backsimeq", { 0xE2, 0x8B, 0x8D }, 3},
#line 2102 "data/html_entities.gperf"
      {"Tscr", { 0xF0, 0x9D, 0x92, 0xAF }, 4},
#line 560 "data/html_entities.gperf"
      {"Because", { 0xE2, 0x88, 0xB5 }, 3},
#line 1373 "data/html_entities.gperf"
      {"nsccue", { 0xE2, 0x8B, 0xA1 }, 3},
#line 1449 "data/html_entities.gperf"
      {"operp", { 0xE2, 0xA6, 0xB9 }, 3},
#line 1803 "data/html_entities.gperf"
      {"Oopf", { 0xF0, 0x9D, 0x95, 0x86 }, 4},
#line 1343 "data/html_entities.gperf"
      {"mid", { 0xE2, 0x88, 0xA3 }, 3},
#line 1204 "data/html_entities.gperf"
      {"setmn", { 0xE2, 0x88, 0x96 }, 3},
#line 405 "data/html_entities.gperf"
      {"rarrsim", { 0xE2, 0xA5, 0xB4 }, 3},
#line 292 "data/html_entities.gperf"
      {"larrsim", { 0xE2, 0xA5, 0xB3 }, 3},
#line 320 "data/html_entities.gperf"
      {"sstarf", { 0xE2, 0x8B, 0x86 }, 3},
#line 1322 "data/html_entities.gperf"
      {"PrecedesTilde", { 0xE2, 0x89, 0xBE }, 3},
#line 1775 "data/html_entities.gperf"
      {"ssmile", { 0xE2, 0x8C, 0xA3 }, 3},
#line 1889 "data/html_entities.gperf"
      {"therefore", { 0xE2, 0x88, 0xB4 }, 3},
#line 1273 "data/html_entities.gperf"
      {"ShortRightArrow", { 0xE2, 0x86, 0x92 }, 3},
#line 2084 "data/html_entities.gperf"
      {"ord", { 0xE2, 0xA9, 0x9D }, 3},
#line 1222 "data/html_entities.gperf"
      {"rect", { 0xE2, 0x96, 0xAD }, 3},
#line 1354 "data/html_entities.gperf"
      {"sect", { 0xC2, 0xA7 }, 2},
#line 252 "data/html_entities.gperf"
      {"niv", { 0xE2, 0x88, 0x8B }, 3},
#line 1042 "data/html_entities.gperf"
      {"iscr", { 0xF0, 0x9D, 0x92, 0xBE }, 4},
#line 1469 "data/html_entities.gperf"
      {"midast", { 0x2A }, 1},
#line 1709 "data/html_entities.gperf"
      {"lessdot", { 0xE2, 0x8B, 0x96 }, 3},
#line 1282 "data/html_entities.gperf"
      {"olcir", { 0xE2, 0xA6, 0xBE }, 3},
#line 2092 "data/html_entities.gperf"
      {"diam", { 0xE2, 0x8B, 0x84 }, 3},
#line 1467 "data/html_entities.gperf"
      {"mstpos", { 0xE2, 0x88, 0xBE }, 3},
#line 1936 "data/html_entities.gperf"
      {"piv", { 0xCF, 0x96 }, 2},
#line 1202 "data/html_entities.gperf"
      {"rfr", { 0xF0, 0x9D, 0x94, 0xAF }, 4},
#line 91 "data/html_entities.gperf"
      {"tfr", { 0xF0, 0x9D, 0x94, 0xB1 }, 4},
#line 139 "data/html_entities.gperf"
      {"lfr", { 0xF0, 0x9D, 0x94, 0xA9 }, 4},
#line 833 "data/html_entities.gperf"
      {"sfr", { 0xF0, 0x9D, 0x94, 0xB0 }, 4},
#line 1943 "data/html_entities.gperf"
      {"efr", { 0xF0, 0x9D, 0x94, 0xA2 }, 4},
#line 916 "data/html_entities.gperf"
      {"Bscr", { 0xE2, 0x84, 0xAC }, 3},
#line 2049 "data/html_entities.gperf"
      {"Copf", { 0xE2, 0x84, 0x82 }, 3},
#line 462 "data/html_entities.gperf"
      {"dscr", { 0xF0, 0x9D, 0x92, 0xB9 }, 4},
#line 1300 "data/html_entities.gperf"
      {"ufr", { 0xF0, 0x9D, 0x94, 0xB2 }, 4},
#line 1044 "data/html_entities.gperf"
      {"excl", { 0x21 }, 1},
#line 1716 "data/html_entities.gperf"
      {"nfr", { 0xF0, 0x9D, 0x94, 0xAB }, 4},
#line 2126 "data/html_entities.gperf"
      {"Pfr", { 0xF0, 0x9D, 0x94, 0x93 }, 4},
#line 1505 "data/html_entities.gperf"
      {"bfr", { 0xF0, 0x9D, 0x94, 0x9F }, 4},
#line 974 "data/html_entities.gperf"
      {"ordf", { 0xC2, 0xAA }, 2},
#line 1061 "data/html_entities.gperf"
      {"Zfr", { 0xE2, 0x84, 0xA8 }, 3},
#line 1591 "data/html_entities.gperf"
      {"Dscr", { 0xF0, 0x9D, 0x92, 0x9F }, 4},
#line 1160 "data/html_entities.gperf"
      {"Qfr", { 0xF0, 0x9D, 0x94, 0x94 }, 4},
#line 351 "data/html_entities.gperf"
      {"Xfr", { 0xF0, 0x9D, 0x94, 0x9B }, 4},
#line 2031 "data/html_entities.gperf"
      {"Vfr", { 0xF0, 0x9D, 0x94, 0x99 }, 4},
#line 451 "data/html_entities.gperf"
      {"Jfr", { 0xF0, 0x9D, 0x94, 0x8D }, 4},
#line 1182 "data/html_entities.gperf"
      {"percnt", { 0x25 }, 1},
#line 2083 "data/html_entities.gperf"
      {"Sfr", { 0xF0, 0x9D, 0x94, 0x96 }, 4},
#line 58 "data/html_entities.gperf"
      {"Equal", { 0xE2, 0xA9, 0xB5 }, 3},
#line 107 "data/html_entities.gperf"
      {"NotCupCap", { 0xE2, 0x89, 0xAD }, 3},
#line 1737 "data/html_entities.gperf"
      {"barwed", { 0xE2, 0x8C, 0x85 }, 3},
#line 1766 "data/html_entities.gperf"
      {"pfr", { 0xF0, 0x9D, 0x94, 0xAD }, 4},
#line 993 "data/html_entities.gperf"
      {"Hfr", { 0xE2, 0x84, 0x8C }, 3},
#line 1980 "data/html_entities.gperf"
      {"olcross", { 0xE2, 0xA6, 0xBB }, 3},
#line 1664 "data/html_entities.gperf"
      {"vfr", { 0xF0, 0x9D, 0x94, 0xB3 }, 4},
#line 1616 "data/html_entities.gperf"
      {"THORN", { 0xC3, 0x9E }, 2},
#line 470 "data/html_entities.gperf"
      {"Coproduct", { 0xE2, 0x88, 0x90 }, 3},
#line 1694 "data/html_entities.gperf"
      {"Wfr", { 0xF0, 0x9D, 0x94, 0x9A }, 4},
#line 866 "data/html_entities.gperf"
      {"ohm", { 0xCE, 0xA9 }, 2},
#line 164 "data/html_entities.gperf"
      {"oopf", { 0xF0, 0x9D, 0x95, 0xA0 }, 4},
#line 258 "data/html_entities.gperf"
      {"Ifr", { 0xE2, 0x84, 0x91 }, 3},
#line 1619 "data/html_entities.gperf"
      {"Kfr", { 0xF0, 0x9D, 0x94, 0x8E }, 4},
#line 1955 "data/html_entities.gperf"
      {"NotLeftTriangleBar", { 0xE2, 0xA7, 0x8F, 0xCC, 0xB8 }, 5},
#line 1521 "data/html_entities.gperf"
      {"NotLeftTriangle", { 0xE2, 0x8B, 0xAA }, 3},
#line 1947 "data/html_entities.gperf"
      {"ffr", { 0xF0, 0x9D, 0x94, 0xA3 }, 4},
#line 845 "data/html_entities.gperf"
      {"NotLeftTriangleEqual", { 0xE2, 0x8B, 0xAC }, 3},
#line 2038 "data/html_entities.gperf"
      {"siml", { 0xE2, 0xAA, 0x9D }, 3},
#line 933 "data/html_entities.gperf"
      {"nLeftrightarrow", { 0xE2, 0x87, 0x8E }, 3},
#line 26 "data/html_entities.gperf"
      {"Lfr", { 0xF0, 0x9D, 0x94, 0x8F }, 4},
#line 1550 "data/html_entities.gperf"
      {"Rfr", { 0xE2, 0x84, 0x9C }, 3},
#line 312 "data/html_entities.gperf"
      {"Afr", { 0xF0, 0x9D, 0x94, 0x84 }, 4},
#line 595 "data/html_entities.gperf"
      {"nltrie", { 0xE2, 0x8B, 0xAC }, 3},
#line 1778 "data/html_entities.gperf"
      {"mho", { 0xE2, 0x84, 0xA7 }, 3},
#line 360 "data/html_entities.gperf"
      {"Nfr", { 0xF0, 0x9D, 0x94, 0x91 }, 4},
#line 1894 "data/html_entities.gperf"
      {"gl", { 0xE2, 0x89, 0xB7 }, 3},
#line 169 "data/html_entities.gperf"
      {"Mfr", { 0xF0, 0x9D, 0x94, 0x90 }, 4},
#line 123 "data/html_entities.gperf"
      {"nrtrie", { 0xE2, 0x8B, 0xAD }, 3},
#line 30 "data/html_entities.gperf"
      {"Therefore", { 0xE2, 0x88, 0xB4 }, 3},
#line 1352 "data/html_entities.gperf"
      {"qfr", { 0xF0, 0x9D, 0x94, 0xAE }, 4},
#line 1642 "data/html_entities.gperf"
      {"backepsilon", { 0xCF, 0xB6 }, 2},
#line 1988 "data/html_entities.gperf"
      {"target", { 0xE2, 0x8C, 0x96 }, 3},
#line 1229 "data/html_entities.gperf"
      {"nleftrightarrow", { 0xE2, 0x86, 0xAE }, 3},
#line 1489 "data/html_entities.gperf"
      {"rarrfs", { 0xE2, 0xA4, 0x9E }, 3},
#line 1563 "data/html_entities.gperf"
      {"larrfs", { 0xE2, 0xA4, 0x9D }, 3},
#line 309 "data/html_entities.gperf"
      {"nvlArr", { 0xE2, 0xA4, 0x82 }, 3},
#line 1797 "data/html_entities.gperf"
      {"plussim", { 0xE2, 0xA8, 0xA6 }, 3},
#line 1522 "data/html_entities.gperf"
      {"epsilon", { 0xCE, 0xB5 }, 2},
#line 167 "data/html_entities.gperf"
      {"upsilon", { 0xCF, 0x85 }, 2},
#line 2080 "data/html_entities.gperf"
      {"Yfr", { 0xF0, 0x9D, 0x94, 0x9C }, 4},
#line 612 "data/html_entities.gperf"
      {"Ffr", { 0xF0, 0x9D, 0x94, 0x89 }, 4},
#line 375 "data/html_entities.gperf"
      {"diamondsuit", { 0xE2, 0x99, 0xA6 }, 3},
#line 778 "data/html_entities.gperf"
      {"gnap", { 0xE2, 0xAA, 0x8A }, 3},
#line 2125 "data/html_entities.gperf"
      {"scap", { 0xE2, 0xAA, 0xB8 }, 3},
#line 713 "data/html_entities.gperf"
      {"nsupE", { 0xE2, 0xAB, 0x86, 0xCC, 0xB8 }, 5},
#line 1717 "data/html_entities.gperf"
      {"nsubE", { 0xE2, 0xAB, 0x85, 0xCC, 0xB8 }, 5},
#line 1918 "data/html_entities.gperf"
      {"ncap", { 0xE2, 0xA9, 0x83 }, 3},
#line 118 "data/html_entities.gperf"
      {"Ufr", { 0xF0, 0x9D, 0x94, 0x98 }, 4},
#line 1821 "data/html_entities.gperf"
      {"rcub", { 0x7D }, 1},
#line 1377 "data/html_entities.gperf"
      {"lcub", { 0x7B }, 1},
#line 1637 "data/html_entities.gperf"
      {"gne", { 0xE2, 0xAA, 0x88 }, 3},
#line 2093 "data/html_entities.gperf"
      {"sce", { 0xE2, 0xAA, 0xB0 }, 3},
#line 442 "data/html_entities.gperf"
      {"Tfr", { 0xF0, 0x9D, 0x94, 0x97 }, 4},
#line 119 "data/html_entities.gperf"
      {"mscr", { 0xF0, 0x9D, 0x93, 0x82 }, 4},
#line 1344 "data/html_entities.gperf"
      {"diamond", { 0xE2, 0x8B, 0x84 }, 3},
#line 1091 "data/html_entities.gperf"
      {"nsucceq", { 0xE2, 0xAA, 0xB0, 0xCC, 0xB8 }, 5},
#line 1719 "data/html_entities.gperf"
      {"ordm", { 0xC2, 0xBA }, 2},
#line 1770 "data/html_entities.gperf"
      {"exist", { 0xE2, 0x88, 0x83 }, 3},
#line 1422 "data/html_entities.gperf"
      {"Diamond", { 0xE2, 0x8B, 0x84 }, 3},
#line 1112 "data/html_entities.gperf"
      {"Escr", { 0xE2, 0x84, 0xB0 }, 3},
#line 555 "data/html_entities.gperf"
      {"prnap", { 0xE2, 0xAA, 0xB9 }, 3},
#line 906 "data/html_entities.gperf"
      {"rcaron", { 0xC5, 0x99 }, 2},
#line 109 "data/html_entities.gperf"
      {"tcaron", { 0xC5, 0xA5 }, 2},
#line 582 "data/html_entities.gperf"
      {"lcaron", { 0xC4, 0xBE }, 2},
#line 1421 "data/html_entities.gperf"
      {"scaron", { 0xC5, 0xA1 }, 2},
#line 824 "data/html_entities.gperf"
      {"ecaron", { 0xC4, 0x9B }, 2},
#line 424 "data/html_entities.gperf"
      {"divide", { 0xC3, 0xB7 }, 2},
#line 1713 "data/html_entities.gperf"
      {"precsim", { 0xE2, 0x89, 0xBE }, 3},
#line 483 "data/html_entities.gperf"
      {"ncup", { 0xE2, 0xA9, 0x82 }, 3},
#line 648 "data/html_entities.gperf"
      {"ncaron", { 0xC5, 0x88 }, 2},
#line 1475 "data/html_entities.gperf"
      {"lesssim", { 0xE2, 0x89, 0xB2 }, 3},
#line 2078 "data/html_entities.gperf"
      {"precneqq", { 0xE2, 0xAA, 0xB5 }, 3},
#line 700 "data/html_entities.gperf"
      {"div", { 0xC3, 0xB7 }, 2},
#line 2056 "data/html_entities.gperf"
      {"elsdot", { 0xE2, 0xAA, 0x97 }, 3},
#line 1807 "data/html_entities.gperf"
      {"Zcaron", { 0xC5, 0xBD }, 2},
#line 1873 "data/html_entities.gperf"
      {"backsim", { 0xE2, 0x88, 0xBD }, 3},
#line 2032 "data/html_entities.gperf"
      {"ifr", { 0xF0, 0x9D, 0x94, 0xA6 }, 4},
#line 498 "data/html_entities.gperf"
      {"spades", { 0xE2, 0x99, 0xA0 }, 3},
#line 1661 "data/html_entities.gperf"
      {"looparrowright", { 0xE2, 0x86, 0xAC }, 3},
#line 1117 "data/html_entities.gperf"
      {"Prime", { 0xE2, 0x80, 0xB3 }, 3},
#line 735 "data/html_entities.gperf"
      {"Scaron", { 0xC5, 0xA0 }, 2},
#line 1349 "data/html_entities.gperf"
      {"Phi", { 0xCE, 0xA6 }, 2},
#line 725 "data/html_entities.gperf"
      {"SquareUnion", { 0xE2, 0x8A, 0x94 }, 3},
#line 721 "data/html_entities.gperf"
      {"elinters", { 0xE2, 0x8F, 0xA7 }, 3},
#line 1074 "data/html_entities.gperf"
      {"spadesuit", { 0xE2, 0x99, 0xA0 }, 3},
#line 455 "data/html_entities.gperf"
      {"prnE", { 0xE2, 0xAA, 0xB5 }, 3},
#line 1588 "data/html_entities.gperf"
      {"topcir", { 0xE2, 0xAB, 0xB1 }, 3},
#line 1978 "data/html_entities.gperf"
      {"gap", { 0xE2, 0xAA, 0x86 }, 3},
#line 2008 "data/html_entities.gperf"
      {"nrarrw", { 0xE2, 0x86, 0x9D, 0xCC, 0xB8 }, 5},
#line 1097 "data/html_entities.gperf"
      {"thinsp", { 0xE2, 0x80, 0x89 }, 3},
#line 113 "data/html_entities.gperf"
      {"Bfr", { 0xF0, 0x9D, 0x94, 0x85 }, 4},
#line 1064 "data/html_entities.gperf"
      {"prime", { 0xE2, 0x80, 0xB2 }, 3},
#line 135 "data/html_entities.gperf"
      {"dfr", { 0xF0, 0x9D, 0x94, 0xA1 }, 4},
#line 715 "data/html_entities.gperf"
      {"trade", { 0xE2, 0x84, 0xA2 }, 3},
#line 88 "data/html_entities.gperf"
      {"phi", { 0xCF, 0x86 }, 2},
#line 681 "data/html_entities.gperf"
      {"notnivb", { 0xE2, 0x8B, 0xBE }, 3},
#line 1076 "data/html_entities.gperf"
      {"Dfr", { 0xF0, 0x9D, 0x94, 0x87 }, 4},
#line 491 "data/html_entities.gperf"
      {"primes", { 0xE2, 0x84, 0x99 }, 3},
#line 639 "data/html_entities.gperf"
      {"ssetmn", { 0xE2, 0x88, 0x96 }, 3},
#line 837 "data/html_entities.gperf"
      {"ge", { 0xE2, 0x89, 0xA5 }, 3},
#line 1847 "data/html_entities.gperf"
      {"mnplus", { 0xE2, 0x88, 0x93 }, 3},
#line 277 "data/html_entities.gperf"
      {"GT", { 0x3E }, 1},
#line 1406 "data/html_entities.gperf"
      {"Barwed", { 0xE2, 0x8C, 0x86 }, 3},
#line 529 "data/html_entities.gperf"
      {"Upsilon", { 0xCE, 0xA5 }, 2},
#line 220 "data/html_entities.gperf"
      {"Lcaron", { 0xC4, 0xBD }, 2},
#line 935 "data/html_entities.gperf"
      {"ges", { 0xE2, 0xA9, 0xBE }, 3},
#line 1372 "data/html_entities.gperf"
      {"Rcaron", { 0xC5, 0x98 }, 2},
#line 98 "data/html_entities.gperf"
      {"lltri", { 0xE2, 0x97, 0xBA }, 3},
#line 1834 "data/html_entities.gperf"
      {"gneq", { 0xE2, 0xAA, 0x88 }, 3},
#line 1580 "data/html_entities.gperf"
      {"ultri", { 0xE2, 0x97, 0xB8 }, 3},
#line 643 "data/html_entities.gperf"
      {"varpi", { 0xCF, 0x96 }, 2},
#line 1168 "data/html_entities.gperf"
      {"nltri", { 0xE2, 0x8B, 0xAA }, 3},
#line 1700 "data/html_entities.gperf"
      {"ratail", { 0xE2, 0xA4, 0x9A }, 3},
#line 1566 "data/html_entities.gperf"
      {"Ncaron", { 0xC5, 0x87 }, 2},
#line 1006 "data/html_entities.gperf"
      {"latail", { 0xE2, 0xA4, 0x99 }, 3},
#line 2115 "data/html_entities.gperf"
      {"lrtri", { 0xE2, 0x8A, 0xBF }, 3},
#line 766 "data/html_entities.gperf"
      {"gneqq", { 0xE2, 0x89, 0xA9 }, 3},
#line 1165 "data/html_entities.gperf"
      {"oast", { 0xE2, 0x8A, 0x9B }, 3},
#line 441 "data/html_entities.gperf"
      {"urtri", { 0xE2, 0x97, 0xB9 }, 3},
#line 1527 "data/html_entities.gperf"
      {"nrtri", { 0xE2, 0x8B, 0xAB }, 3},
#line 1540 "data/html_entities.gperf"
      {"mapstoleft", { 0xE2, 0x86, 0xA4 }, 3},
#line 587 "data/html_entities.gperf"
      {"zscr", { 0xF0, 0x9D, 0x93, 0x8F }, 4},
#line 1726 "data/html_entities.gperf"
      {"NestedLessLess", { 0xE2, 0x89, 0xAA }, 3},
#line 1206 "data/html_entities.gperf"
      {"nvrtrie", { 0xE2, 0x8A, 0xB5, 0xE2, 0x83, 0x92 }, 6},
#line 1159 "data/html_entities.gperf"
      {"upharpoonleft", { 0xE2, 0x86, 0xBF }, 3},
#line 1065 "data/html_entities.gperf"
      {"OpenCurlyDoubleQuote", { 0xE2, 0x80, 0x9C }, 3},
#line 204 "data/html_entities.gperf"
      {"setminus", { 0xE2, 0x88, 0x96 }, 3},
#line 811 "data/html_entities.gperf"
      {"malt", { 0xE2, 0x9C, 0xA0 }, 3},
#line 1814 "data/html_entities.gperf"
      {"REG", { 0xC2, 0xAE }, 2},
#line 1366 "data/html_entities.gperf"
      {"lesges", { 0xE2, 0xAA, 0x93 }, 3},
#line 742 "data/html_entities.gperf"
      {"permil", { 0xE2, 0x80, 0xB0 }, 3},
#line 1310 "data/html_entities.gperf"
      {"emptyset", { 0xE2, 0x88, 0x85 }, 3},
#line 2085 "data/html_entities.gperf"
      {"vltri", { 0xE2, 0x8A, 0xB2 }, 3},
#line 42 "data/html_entities.gperf"
      {"mapstoup", { 0xE2, 0x86, 0xA5 }, 3},
#line 1041 "data/html_entities.gperf"
      {"disin", { 0xE2, 0x8B, 0xB2 }, 3},
#line 1312 "data/html_entities.gperf"
      {"Tcaron", { 0xC5, 0xA4 }, 2},
#line 1086 "data/html_entities.gperf"
      {"bsol", { 0x5C }, 1},
#line 1823 "data/html_entities.gperf"
      {"vrtri", { 0xE2, 0x8A, 0xB3 }, 3},
#line 1374 "data/html_entities.gperf"
      {"NotHumpDownHump", { 0xE2, 0x89, 0x8E, 0xCC, 0xB8 }, 5},
#line 1314 "data/html_entities.gperf"
      {"dollar", { 0x24 }, 1},
#line 1653 "data/html_entities.gperf"
      {"dotminus", { 0xE2, 0x88, 0xB8 }, 3},
#line 1702 "data/html_entities.gperf"
      {"notni", { 0xE2, 0x88, 0x8C }, 3},
#line 517 "data/html_entities.gperf"
      {"lesdot", { 0xE2, 0xA9, 0xBF }, 3},
#line 930 "data/html_entities.gperf"
      {"HorizontalLine", { 0xE2, 0x94, 0x80 }, 3},
#line 603 "data/html_entities.gperf"
      {"Wedge", { 0xE2, 0x8B, 0x80 }, 3},
#line 1859 "data/html_entities.gperf"
      {"ThickSpace", { 0xE2, 0x81, 0x9F, 0xE2, 0x80, 0x8A }, 6},
#line 1762 "data/html_entities.gperf"
      {"NotDoubleVerticalBar", { 0xE2, 0x88, 0xA6 }, 3},
#line 1396 "data/html_entities.gperf"
      {"eqcolon", { 0xE2, 0x89, 0x95 }, 3},
#line 1183 "data/html_entities.gperf"
      {"equivDD", { 0xE2, 0xA9, 0xB8 }, 3},
#line 1829 "data/html_entities.gperf"
      {"wscr", { 0xF0, 0x9D, 0x93, 0x8C }, 4},
#line 569 "data/html_entities.gperf"
      {"orv", { 0xE2, 0xA9, 0x9B }, 3},
#line 999 "data/html_entities.gperf"
      {"DoubleLeftArrow", { 0xE2, 0x87, 0x90 }, 3},
#line 1220 "data/html_entities.gperf"
      {"geq", { 0xE2, 0x89, 0xA5 }, 3},
#line 1699 "data/html_entities.gperf"
      {"Oscr", { 0xF0, 0x9D, 0x92, 0xAA }, 4},
#line 129 "data/html_entities.gperf"
      {"DoubleContourIntegral", { 0xE2, 0x88, 0xAF }, 3},
#line 2096 "data/html_entities.gperf"
      {"bottom", { 0xE2, 0x8A, 0xA5 }, 3},
#line 1831 "data/html_entities.gperf"
      {"inodot", { 0xC4, 0xB1 }, 2},
#line 1945 "data/html_entities.gperf"
      {"mfr", { 0xF0, 0x9D, 0x94, 0xAA }, 4},
#line 1456 "data/html_entities.gperf"
      {"NotNestedGreaterGreater", { 0xE2, 0xAA, 0xA2, 0xCC, 0xB8 }, 5},
#line 1146 "data/html_entities.gperf"
      {"geqq", { 0xE2, 0x89, 0xA7 }, 3},
#line 1311 "data/html_entities.gperf"
      {"intprod", { 0xE2, 0xA8, 0xBC }, 3},
#line 1858 "data/html_entities.gperf"
      {"nshortmid", { 0xE2, 0x88, 0xA4 }, 3},
#line 247 "data/html_entities.gperf"
      {"frown", { 0xE2, 0x8C, 0xA2 }, 3},
#line 1321 "data/html_entities.gperf"
      {"jopf", { 0xF0, 0x9D, 0x95, 0x9B }, 4},
#line 168 "data/html_entities.gperf"
      {"Efr", { 0xF0, 0x9D, 0x94, 0x88 }, 4},
#line 229 "data/html_entities.gperf"
      {"Fouriertrf", { 0xE2, 0x84, 0xB1 }, 3},
#line 1551 "data/html_entities.gperf"
      {"emptyv", { 0xE2, 0x88, 0x85 }, 3},
#line 183 "data/html_entities.gperf"
      {"pointint", { 0xE2, 0xA8, 0x95 }, 3},
#line 888 "data/html_entities.gperf"
      {"dcaron", { 0xC4, 0x8F }, 2},
#line 1781 "data/html_entities.gperf"
      {"InvisibleTimes", { 0xE2, 0x81, 0xA2 }, 3},
#line 222 "data/html_entities.gperf"
      {"vsupne", { 0xE2, 0x8A, 0x8B, 0xEF, 0xB8, 0x80 }, 6},
#line 688 "data/html_entities.gperf"
      {"vsubne", { 0xE2, 0x8A, 0x8A, 0xEF, 0xB8, 0x80 }, 6},
#line 1605 "data/html_entities.gperf"
      {"EqualTilde", { 0xE2, 0x89, 0x82 }, 3},
#line 1962 "data/html_entities.gperf"
      {"image", { 0xE2, 0x84, 0x91 }, 3},
#line 1120 "data/html_entities.gperf"
      {"maltese", { 0xE2, 0x9C, 0xA0 }, 3},
#line 1558 "data/html_entities.gperf"
      {"Dcaron", { 0xC4, 0x8E }, 2},
#line 799 "data/html_entities.gperf"
      {"Equilibrium", { 0xE2, 0x87, 0x8C }, 3},
#line 729 "data/html_entities.gperf"
      {"DotDot", { 0xE2, 0x83, 0x9C }, 3},
#line 1792 "data/html_entities.gperf"
      {"efDot", { 0xE2, 0x89, 0x92 }, 3},
#line 1733 "data/html_entities.gperf"
      {"harr", { 0xE2, 0x86, 0x94 }, 3},
#line 722 "data/html_entities.gperf"
      {"NotCongruent", { 0xE2, 0x89, 0xA2 }, 3},
#line 1319 "data/html_entities.gperf"
      {"late", { 0xE2, 0xAA, 0xAD }, 3},
#line 2086 "data/html_entities.gperf"
      {"npre", { 0xE2, 0xAA, 0xAF, 0xCC, 0xB8 }, 5},
#line 900 "data/html_entities.gperf"
      {"NotTilde", { 0xE2, 0x89, 0x81 }, 3},
#line 1140 "data/html_entities.gperf"
      {"nvlt", { 0x3C, 0xE2, 0x83, 0x92 }, 4},
#line 1598 "data/html_entities.gperf"
      {"lates", { 0xE2, 0xAA, 0xAD, 0xEF, 0xB8, 0x80 }, 6},
#line 59 "data/html_entities.gperf"
      {"prod", { 0xE2, 0x88, 0x8F }, 3},
#line 1010 "data/html_entities.gperf"
      {"ShortUpArrow", { 0xE2, 0x86, 0x91 }, 3},
#line 1129 "data/html_entities.gperf"
      {"Cscr", { 0xF0, 0x9D, 0x92, 0x9E }, 4},
#line 945 "data/html_entities.gperf"
      {"hoarr", { 0xE2, 0x87, 0xBF }, 3},
#line 1884 "data/html_entities.gperf"
      {"udarr", { 0xE2, 0x87, 0x85 }, 3},
#line 1929 "data/html_entities.gperf"
      {"rfloor", { 0xE2, 0x8C, 0x8B }, 3},
#line 2071 "data/html_entities.gperf"
      {"lfloor", { 0xE2, 0x8C, 0x8A }, 3},
#line 1072 "data/html_entities.gperf"
      {"smallsetminus", { 0xE2, 0x88, 0x96 }, 3},
#line 1534 "data/html_entities.gperf"
      {"horbar", { 0xE2, 0x80, 0x95 }, 3},
#line 719 "data/html_entities.gperf"
      {"rpargt", { 0xE2, 0xA6, 0x94 }, 3},
#line 605 "data/html_entities.gperf"
      {"gopf", { 0xF0, 0x9D, 0x95, 0x98 }, 4},
#line 2048 "data/html_entities.gperf"
      {"NotTildeFullEqual", { 0xE2, 0x89, 0x87 }, 3},
#line 1481 "data/html_entities.gperf"
      {"lagran", { 0xE2, 0x84, 0x92 }, 3},
#line 1299 "data/html_entities.gperf"
      {"gnsim", { 0xE2, 0x8B, 0xA7 }, 3},
#line 1106 "data/html_entities.gperf"
      {"scsim", { 0xE2, 0x89, 0xBF }, 3},
#line 1049 "data/html_entities.gperf"
      {"triplus", { 0xE2, 0xA8, 0xB9 }, 3},
#line 1925 "data/html_entities.gperf"
      {"Gopf", { 0xF0, 0x9D, 0x94, 0xBE }, 4},
#line 387 "data/html_entities.gperf"
      {"zeetrf", { 0xE2, 0x84, 0xA8 }, 3},
#line 1162 "data/html_entities.gperf"
      {"equest", { 0xE2, 0x89, 0x9F }, 3},
#line 87 "data/html_entities.gperf"
      {"hbar", { 0xE2, 0x84, 0x8F }, 3},
#line 226 "data/html_entities.gperf"
      {"doublebarwedge", { 0xE2, 0x8C, 0x86 }, 3},
#line 1131 "data/html_entities.gperf"
      {"oscr", { 0xE2, 0x84, 0xB4 }, 3},
#line 1552 "data/html_entities.gperf"
      {"zfr", { 0xF0, 0x9D, 0x94, 0xB7 }, 4},
#line 1217 "data/html_entities.gperf"
      {"Epsilon", { 0xCE, 0x95 }, 2},
#line 1890 "data/html_entities.gperf"
      {"notinE", { 0xE2, 0x8B, 0xB9, 0xCC, 0xB8 }, 5},
#line 1268 "data/html_entities.gperf"
      {"gEl", { 0xE2, 0xAA, 0x8C }, 3},
#line 674 "data/html_entities.gperf"
      {"CirclePlus", { 0xE2, 0x8A, 0x95 }, 3},
#line 1375 "data/html_entities.gperf"
      {"gE", { 0xE2, 0x89, 0xA7 }, 3},
#line 438 "data/html_entities.gperf"
      {"GreaterLess", { 0xE2, 0x89, 0xB7 }, 3},
#line 1674 "data/html_entities.gperf"
      {"DoubleDownArrow", { 0xE2, 0x87, 0x93 }, 3},
#line 346 "data/html_entities.gperf"
      {"mapstodown", { 0xE2, 0x86, 0xA7 }, 3},
#line 973 "data/html_entities.gperf"
      {"simdot", { 0xE2, 0xA9, 0xAA }, 3},
#line 859 "data/html_entities.gperf"
      {"smte", { 0xE2, 0xAA, 0xAC }, 3},
#line 758 "data/html_entities.gperf"
      {"GreaterGreater", { 0xE2, 0xAA, 0xA2 }, 3},
#line 1447 "data/html_entities.gperf"
      {"precnsim", { 0xE2, 0x8B, 0xA8 }, 3},
#line 1253 "data/html_entities.gperf"
      {"GreaterTilde", { 0xE2, 0x89, 0xB3 }, 3},
#line 1158 "data/html_entities.gperf"
      {"GreaterEqual", { 0xE2, 0x89, 0xA5 }, 3},
#line 953 "data/html_entities.gperf"
      {"GreaterEqualLess", { 0xE2, 0x8B, 0x9B }, 3},
#line 92 "data/html_entities.gperf"
      {"dsol", { 0xE2, 0xA7, 0xB6 }, 3},
#line 1172 "data/html_entities.gperf"
      {"lesseqgtr", { 0xE2, 0x8B, 0x9A }, 3},
#line 2064 "data/html_entities.gperf"
      {"smtes", { 0xE2, 0xAA, 0xAC, 0xEF, 0xB8, 0x80 }, 6},
#line 1244 "data/html_entities.gperf"
      {"rceil", { 0xE2, 0x8C, 0x89 }, 3},
#line 607 "data/html_entities.gperf"
      {"lceil", { 0xE2, 0x8C, 0x88 }, 3},
#line 1436 "data/html_entities.gperf"
      {"varpropto", { 0xE2, 0x88, 0x9D }, 3},
#line 1682 "data/html_entities.gperf"
      {"rarrb", { 0xE2, 0x87, 0xA5 }, 3},
#line 1094 "data/html_entities.gperf"
      {"larrb", { 0xE2, 0x87, 0xA4 }, 3},
#line 1789 "data/html_entities.gperf"
      {"DoubleLeftRightArrow", { 0xE2, 0x87, 0x94 }, 3},
#line 2063 "data/html_entities.gperf"
      {"bsolhsub", { 0xE2, 0x9F, 0x88 }, 3},
#line 997 "data/html_entities.gperf"
      {"Ecaron", { 0xC4, 0x9A }, 2},
#line 1711 "data/html_entities.gperf"
      {"Exists", { 0xE2, 0x88, 0x83 }, 3},
#line 390 "data/html_entities.gperf"
      {"bepsi", { 0xCF, 0xB6 }, 2},
#line 1853 "data/html_entities.gperf"
      {"swnwar", { 0xE2, 0xA4, 0xAA }, 3},
#line 18 "data/html_entities.gperf"
      {"comp", { 0xE2, 0x88, 0x81 }, 3},
#line 755 "data/html_entities.gperf"
      {"wfr", { 0xF0, 0x9D, 0x94, 0xB4 }, 4},
#line 450 "data/html_entities.gperf"
      {"propto", { 0xE2, 0x88, 0x9D }, 3},
#line 46 "data/html_entities.gperf"
      {"gnE", { 0xE2, 0x89, 0xA9 }, 3},
#line 332 "data/html_entities.gperf"
      {"orslope", { 0xE2, 0xA9, 0x97 }, 3},
#line 747 "data/html_entities.gperf"
      {"scE", { 0xE2, 0xAA, 0xB4 }, 3},
#line 1574 "data/html_entities.gperf"
      {"Ofr", { 0xF0, 0x9D, 0x94, 0x92 }, 4},
#line 1952 "data/html_entities.gperf"
      {"crarr", { 0xE2, 0x86, 0xB5 }, 3},
#line 761 "data/html_entities.gperf"
      {"commat", { 0x40 }, 1},
#line 645 "data/html_entities.gperf"
      {"simlE", { 0xE2, 0xAA, 0x9F }, 3},
#line 720 "data/html_entities.gperf"
      {"CircleMinus", { 0xE2, 0x8A, 0x96 }, 3},
#line 854 "data/html_entities.gperf"
      {"gammad", { 0xCF, 0x9D }, 2},
#line 1757 "data/html_entities.gperf"
      {"ENG", { 0xC5, 0x8A }, 2},
#line 406 "data/html_entities.gperf"
      {"upsih", { 0xCF, 0x92 }, 2},
#line 1998 "data/html_entities.gperf"
      {"plusdo", { 0xE2, 0x88, 0x94 }, 3},
#line 1844 "data/html_entities.gperf"
      {"glE", { 0xE2, 0xAA, 0x92 }, 3},
#line 635 "data/html_entities.gperf"
      {"clubs", { 0xE2, 0x99, 0xA3 }, 3},
#line 746 "data/html_entities.gperf"
      {"lvnE", { 0xE2, 0x89, 0xA8, 0xEF, 0xB8, 0x80 }, 6},
#line 1132 "data/html_entities.gperf"
      {"gel", { 0xE2, 0x8B, 0x9B }, 3},
#line 1228 "data/html_entities.gperf"
      {"nesear", { 0xE2, 0xA4, 0xA8 }, 3},
#line 2122 "data/html_entities.gperf"
      {"race", { 0xE2, 0x88, 0xBD, 0xCC, 0xB1 }, 5},
#line 1052 "data/html_entities.gperf"
      {"rarrbfs", { 0xE2, 0xA4, 0xA0 }, 3},
#line 1025 "data/html_entities.gperf"
      {"Gammad", { 0xCF, 0x9C }, 2},
#line 1811 "data/html_entities.gperf"
      {"larrbfs", { 0xE2, 0xA4, 0x9F }, 3},
#line 843 "data/html_entities.gperf"
      {"tint", { 0xE2, 0x88, 0xAD }, 3},
#line 32 "data/html_entities.gperf"
      {"hearts", { 0xE2, 0x99, 0xA5 }, 3},
#line 501 "data/html_entities.gperf"
      {"CircleTimes", { 0xE2, 0x8A, 0x97 }, 3},
#line 435 "data/html_entities.gperf"
      {"rAtail", { 0xE2, 0xA4, 0x9C }, 3},
#line 2027 "data/html_entities.gperf"
      {"lAtail", { 0xE2, 0xA4, 0x9B }, 3},
#line 1839 "data/html_entities.gperf"
      {"cap", { 0xE2, 0x88, 0xA9 }, 3},
#line 1902 "data/html_entities.gperf"
      {"Cfr", { 0xE2, 0x84, 0xAD }, 3},
#line 963 "data/html_entities.gperf"
      {"nvltrie", { 0xE2, 0x8A, 0xB4, 0xE2, 0x83, 0x92 }, 6},
#line 958 "data/html_entities.gperf"
      {"heartsuit", { 0xE2, 0x99, 0xA5 }, 3},
#line 1764 "data/html_entities.gperf"
      {"ddarr", { 0xE2, 0x87, 0x8A }, 3},
#line 795 "data/html_entities.gperf"
      {"Tab", { 0x09 }, 1},
#line 1635 "data/html_entities.gperf"
      {"cross", { 0xE2, 0x9C, 0x97 }, 3},
#line 62 "data/html_entities.gperf"
      {"zcaron", { 0xC5, 0xBE }, 2},
#line 762 "data/html_entities.gperf"
      {"iquest", { 0xC2, 0xBF }, 2},
#line 1849 "data/html_entities.gperf"
      {"caps", { 0xE2, 0x88, 0xA9, 0xEF, 0xB8, 0x80 }, 6},
#line 286 "data/html_entities.gperf"
      {"thicksim", { 0xE2, 0x88, 0xBC }, 3},
#line 1395 "data/html_entities.gperf"
      {"lessgtr", { 0xE2, 0x89, 0xB6 }, 3},
#line 619 "data/html_entities.gperf"
      {"nisd", { 0xE2, 0x8B, 0xBA }, 3},
#line 145 "data/html_entities.gperf"
      {"UpArrowBar", { 0xE2, 0xA4, 0x92 }, 3},
#line 753 "data/html_entities.gperf"
      {"varrho", { 0xCF, 0xB1 }, 2},
#line 1649 "data/html_entities.gperf"
      {"notindot", { 0xE2, 0x8B, 0xB5, 0xCC, 0xB8 }, 5},
#line 578 "data/html_entities.gperf"
      {"iiint", { 0xE2, 0x88, 0xAD }, 3},
#line 1774 "data/html_entities.gperf"
      {"twixt", { 0xE2, 0x89, 0xAC }, 3},
#line 2072 "data/html_entities.gperf"
      {"Vdashl", { 0xE2, 0xAB, 0xA6 }, 3},
#line 875 "data/html_entities.gperf"
      {"NotPrecedes", { 0xE2, 0x8A, 0x80 }, 3},
#line 1401 "data/html_entities.gperf"
      {"lsime", { 0xE2, 0xAA, 0x8D }, 3},
#line 368 "data/html_entities.gperf"
      {"nsime", { 0xE2, 0x89, 0x84 }, 3},
#line 285 "data/html_entities.gperf"
      {"plusb", { 0xE2, 0x8A, 0x9E }, 3},
#line 1636 "data/html_entities.gperf"
      {"bsime", { 0xE2, 0x8B, 0x8D }, 3},
#line 1360 "data/html_entities.gperf"
      {"micro", { 0xC2, 0xB5 }, 2},
#line 1177 "data/html_entities.gperf"
      {"ofr", { 0xF0, 0x9D, 0x94, 0xAC }, 4},
#line 291 "data/html_entities.gperf"
      {"CircleDot", { 0xE2, 0x8A, 0x99 }, 3},
#line 165 "data/html_entities.gperf"
      {"VDash", { 0xE2, 0x8A, 0xAB }, 3},
#line 1016 "data/html_entities.gperf"
      {"ShortDownArrow", { 0xE2, 0x86, 0x93 }, 3},
#line 1284 "data/html_entities.gperf"
      {"copysr", { 0xE2, 0x84, 0x97 }, 3},
#line 1684 "data/html_entities.gperf"
      {"LessEqualGreater", { 0xE2, 0x8B, 0x9A }, 3},
#line 248 "data/html_entities.gperf"
      {"NotPrecedesSlantEqual", { 0xE2, 0x8B, 0xA0 }, 3},
#line 1089 "data/html_entities.gperf"
      {"Colon", { 0xE2, 0x88, 0xB7 }, 3},
#line 1021 "data/html_entities.gperf"
      {"qint", { 0xE2, 0xA8, 0x8C }, 3},
#line 1123 "data/html_entities.gperf"
      {"hercon", { 0xE2, 0x8A, 0xB9 }, 3},
#line 1302 "data/html_entities.gperf"
      {"Intersection", { 0xE2, 0x8B, 0x82 }, 3},
#line 1506 "data/html_entities.gperf"
      {"Colone", { 0xE2, 0xA9, 0xB4 }, 3},
#line 790 "data/html_entities.gperf"
      {"prec", { 0xE2, 0x89, 0xBA }, 3},
#line 342 "data/html_entities.gperf"
      {"vDash", { 0xE2, 0x8A, 0xA8 }, 3},
#line 1417 "data/html_entities.gperf"
      {"doteq", { 0xE2, 0x89, 0x90 }, 3},
#line 1707 "data/html_entities.gperf"
      {"radic", { 0xE2, 0x88, 0x9A }, 3},
#line 1538 "data/html_entities.gperf"
      {"rarrc", { 0xE2, 0xA4, 0xB3 }, 3},
#line 1928 "data/html_entities.gperf"
      {"Psi", { 0xCE, 0xA8 }, 2},
#line 1145 "data/html_entities.gperf"
      {"UpTee", { 0xE2, 0x8A, 0xA5 }, 3},
#line 1869 "data/html_entities.gperf"
      {"hopf", { 0xF0, 0x9D, 0x95, 0x99 }, 4},
#line 770 "data/html_entities.gperf"
      {"OpenCurlyQuote", { 0xE2, 0x80, 0x98 }, 3},
#line 1081 "data/html_entities.gperf"
      {"scpolint", { 0xE2, 0xA8, 0x93 }, 3},
#line 1068 "data/html_entities.gperf"
      {"sime", { 0xE2, 0x89, 0x83 }, 3},
#line 1773 "data/html_entities.gperf"
      {"psi", { 0xCF, 0x88 }, 2},
#line 1645 "data/html_entities.gperf"
      {"times", { 0xC3, 0x97 }, 2},
#line 991 "data/html_entities.gperf"
      {"hArr", { 0xE2, 0x87, 0x94 }, 3},
#line 1632 "data/html_entities.gperf"
      {"ap", { 0xE2, 0x89, 0x88 }, 3},
#line 1751 "data/html_entities.gperf"
      {"vangrt", { 0xE2, 0xA6, 0x9C }, 3},
#line 1409 "data/html_entities.gperf"
      {"capcap", { 0xE2, 0xA9, 0x8B }, 3},
#line 1808 "data/html_entities.gperf"
      {"jscr", { 0xF0, 0x9D, 0x92, 0xBF }, 4},
#line 304 "data/html_entities.gperf"
      {"hamilt", { 0xE2, 0x84, 0x8B }, 3},
#line 1979 "data/html_entities.gperf"
      {"gvertneqq", { 0xE2, 0x89, 0xA9, 0xEF, 0xB8, 0x80 }, 6},
#line 1863 "data/html_entities.gperf"
      {"range", { 0xE2, 0xA6, 0xA5 }, 3},
#line 141 "data/html_entities.gperf"
      {"npolint", { 0xE2, 0xA8, 0x94 }, 3},
#line 444 "data/html_entities.gperf"
      {"varepsilon", { 0xCF, 0xB5 }, 2},
#line 679 "data/html_entities.gperf"
      {"UnderBrace", { 0xE2, 0x8F, 0x9F }, 3},
#line 955 "data/html_entities.gperf"
      {"thksim", { 0xE2, 0x88, 0xBC }, 3},
#line 177 "data/html_entities.gperf"
      {"Ccaron", { 0xC4, 0x8C }, 2},
#line 1730 "data/html_entities.gperf"
      {"timesb", { 0xE2, 0x8A, 0xA0 }, 3},
#line 995 "data/html_entities.gperf"
      {"dd", { 0xE2, 0x85, 0x86 }, 3},
#line 1485 "data/html_entities.gperf"
      {"veeeq", { 0xE2, 0x89, 0x9A }, 3},
#line 315 "data/html_entities.gperf"
      {"clubsuit", { 0xE2, 0x99, 0xA3 }, 3},
#line 675 "data/html_entities.gperf"
      {"udhar", { 0xE2, 0xA5, 0xAE }, 3},
#line 60 "data/html_entities.gperf"
      {"Chi", { 0xCE, 0xA7 }, 2},
#line 1595 "data/html_entities.gperf"
      {"midcir", { 0xE2, 0xAB, 0xB0 }, 3},
#line 55 "data/html_entities.gperf"
      {"capcup", { 0xE2, 0xA9, 0x87 }, 3},
#line 1668 "data/html_entities.gperf"
      {"TripleDot", { 0xE2, 0x83, 0x9B }, 3},
#line 1339 "data/html_entities.gperf"
      {"ape", { 0xE2, 0x89, 0x8A }, 3},
#line 329 "data/html_entities.gperf"
      {"wedge", { 0xE2, 0x88, 0xA7 }, 3},
#line 585 "data/html_entities.gperf"
      {"harrcir", { 0xE2, 0xA5, 0x88 }, 3},
#line 1462 "data/html_entities.gperf"
      {"parsim", { 0xE2, 0xAB, 0xB3 }, 3},
#line 1957 "data/html_entities.gperf"
      {"NotTildeTilde", { 0xE2, 0x89, 0x89 }, 3},
#line 1788 "data/html_entities.gperf"
      {"cir", { 0xE2, 0x97, 0x8B }, 3},
#line 1313 "data/html_entities.gperf"
      {"apos", { 0x27 }, 1},
#line 1305 "data/html_entities.gperf"
      {"rationals", { 0xE2, 0x84, 0x9A }, 3},
#line 1800 "data/html_entities.gperf"
      {"gscr", { 0xE2, 0x84, 0x8A }, 3},
#line 1092 "data/html_entities.gperf"
      {"isin", { 0xE2, 0x88, 0x88 }, 3},
#line 1895 "data/html_entities.gperf"
      {"middot", { 0xC2, 0xB7 }, 2},
#line 557 "data/html_entities.gperf"
      {"Union", { 0xE2, 0x8B, 0x83 }, 3},
#line 754 "data/html_entities.gperf"
      {"copf", { 0xF0, 0x9D, 0x95, 0x94 }, 4},
#line 272 "data/html_entities.gperf"
      {"isins", { 0xE2, 0x8B, 0xB4 }, 3},
#line 654 "data/html_entities.gperf"
      {"npreceq", { 0xE2, 0xAA, 0xAF, 0xCC, 0xB8 }, 5},
#line 550 "data/html_entities.gperf"
      {"uparrow", { 0xE2, 0x86, 0x91 }, 3},
#line 653 "data/html_entities.gperf"
      {"uwangle", { 0xE2, 0xA6, 0xA7 }, 3},
#line 1801 "data/html_entities.gperf"
      {"bsemi", { 0xE2, 0x81, 0x8F }, 3},
#line 149 "data/html_entities.gperf"
      {"simeq", { 0xE2, 0x89, 0x83 }, 3},
#line 1301 "data/html_entities.gperf"
      {"tilde", { 0xCB, 0x9C }, 2},
#line 807 "data/html_entities.gperf"
      {"Gscr", { 0xF0, 0x9D, 0x92, 0xA2 }, 4},
#line 39 "data/html_entities.gperf"
      {"GreaterFullEqual", { 0xE2, 0x89, 0xA7 }, 3},
#line 862 "data/html_entities.gperf"
      {"simgE", { 0xE2, 0xAA, 0xA0 }, 3},
#line 1458 "data/html_entities.gperf"
      {"UnionPlus", { 0xE2, 0x8A, 0x8E }, 3},
#line 691 "data/html_entities.gperf"
      {"ecolon", { 0xE2, 0x89, 0x95 }, 3},
#line 445 "data/html_entities.gperf"
      {"imagline", { 0xE2, 0x84, 0x90 }, 3},
#line 994 "data/html_entities.gperf"
      {"smile", { 0xE2, 0x8C, 0xA3 }, 3},
#line 1901 "data/html_entities.gperf"
      {"bkarow", { 0xE2, 0xA4, 0x8D }, 3},
#line 84 "data/html_entities.gperf"
      {"plusacir", { 0xE2, 0xA8, 0xA3 }, 3},
#line 1135 "data/html_entities.gperf"
      {"Uarrocir", { 0xE2, 0xA5, 0x89 }, 3},
#line 810 "data/html_entities.gperf"
      {"barwedge", { 0xE2, 0x8C, 0x85 }, 3},
#line 1367 "data/html_entities.gperf"
      {"bigoplus", { 0xE2, 0xA8, 0x81 }, 3},
#line 1568 "data/html_entities.gperf"
      {"nsimeq", { 0xE2, 0x89, 0x84 }, 3},
#line 2045 "data/html_entities.gperf"
      {"shortparallel", { 0xE2, 0x88, 0xA5 }, 3},
#line 2099 "data/html_entities.gperf"
      {"nleqslant", { 0xE2, 0xA9, 0xBD, 0xCC, 0xB8 }, 5},
#line 1387 "data/html_entities.gperf"
      {"sigmav", { 0xCF, 0x82 }, 2},
#line 1557 "data/html_entities.gperf"
      {"lt", { 0x3C }, 1},
#line 1748 "data/html_entities.gperf"
      {"oline", { 0xE2, 0x80, 0xBE }, 3},
#line 564 "data/html_entities.gperf"
      {"NotGreater", { 0xE2, 0x89, 0xAF }, 3},
#line 336 "data/html_entities.gperf"
      {"ofcir", { 0xE2, 0xA6, 0xBF }, 3},
#line 1714 "data/html_entities.gperf"
      {"rangd", { 0xE2, 0xA6, 0x92 }, 3},
#line 221 "data/html_entities.gperf"
      {"langd", { 0xE2, 0xA6, 0x91 }, 3},
#line 1031 "data/html_entities.gperf"
      {"bigcap", { 0xE2, 0x8B, 0x82 }, 3},
#line 1359 "data/html_entities.gperf"
      {"varkappa", { 0xCF, 0xB0 }, 2},
#line 101 "data/html_entities.gperf"
      {"realine", { 0xE2, 0x84, 0x9B }, 3},
#line 1473 "data/html_entities.gperf"
      {"mapsto", { 0xE2, 0x86, 0xA6 }, 3},
#line 819 "data/html_entities.gperf"
      {"NotEqual", { 0xE2, 0x89, 0xA0 }, 3},
#line 723 "data/html_entities.gperf"
      {"FilledSmallSquare", { 0xE2, 0x97, 0xBC }, 3},
#line 1706 "data/html_entities.gperf"
      {"NotGreaterGreater", { 0xE2, 0x89, 0xAB, 0xCC, 0xB8 }, 5},
#line 2111 "data/html_entities.gperf"
      {"NotGreaterLess", { 0xE2, 0x89, 0xB9 }, 3},
#line 771 "data/html_entities.gperf"
      {"NotGreaterSlantEqual", { 0xE2, 0xA9, 0xBE, 0xCC, 0xB8 }, 5},
#line 1975 "data/html_entities.gperf"
      {"NotGreaterFullEqual", { 0xE2, 0x89, 0xA7, 0xCC, 0xB8 }, 5},
#line 394 "data/html_entities.gperf"
      {"gesl", { 0xE2, 0x8B, 0x9B, 0xEF, 0xB8, 0x80 }, 6},
#line 1703 "data/html_entities.gperf"
      {"Kappa", { 0xCE, 0x9A }, 2},
#line 473 "data/html_entities.gperf"
      {"amacr", { 0xC4, 0x81 }, 2},
#line 1056 "data/html_entities.gperf"
      {"lsim", { 0xE2, 0x89, 0xB2 }, 3},
#line 531 "data/html_entities.gperf"
      {"esim", { 0xE2, 0x89, 0x82 }, 3},
#line 1221 "data/html_entities.gperf"
      {"star", { 0xE2, 0x98, 0x86 }, 3},
#line 1233 "data/html_entities.gperf"
      {"sigmaf", { 0xCF, 0x82 }, 2},
#line 714 "data/html_entities.gperf"
      {"nsim", { 0xE2, 0x89, 0x81 }, 3},
#line 72 "data/html_entities.gperf"
      {"isinsv", { 0xE2, 0x8B, 0xB3 }, 3},
#line 85 "data/html_entities.gperf"
      {"bsim", { 0xE2, 0x88, 0xBD }, 3},
#line 785 "data/html_entities.gperf"
      {"ltdot", { 0xE2, 0x8B, 0x96 }, 3},
#line 1288 "data/html_entities.gperf"
      {"xodot", { 0xE2, 0xA8, 0x80 }, 3},
#line 1347 "data/html_entities.gperf"
      {"and", { 0xE2, 0x88, 0xA7 }, 3},
#line 1507 "data/html_entities.gperf"
      {"utdot", { 0xE2, 0x8B, 0xB0 }, 3},
#line 2060 "data/html_entities.gperf"
      {"infin", { 0xE2, 0x88, 0x9E }, 3},
#line 378 "data/html_entities.gperf"
      {"natur", { 0xE2, 0x99, 0xAE }, 3},
#line 283 "data/html_entities.gperf"
      {"xharr", { 0xE2, 0x9F, 0xB7 }, 3},
#line 178 "data/html_entities.gperf"
      {"NotSquareSubset", { 0xE2, 0x8A, 0x8F, 0xCC, 0xB8 }, 5},
#line 1739 "data/html_entities.gperf"
      {"bigcup", { 0xE2, 0x8B, 0x83 }, 3},
#line 1157 "data/html_entities.gperf"
      {"NotSquareSubsetEqual", { 0xE2, 0x8B, 0xA2 }, 3},
#line 1476 "data/html_entities.gperf"
      {"tosa", { 0xE2, 0xA4, 0xA9 }, 3},
#line 608 "data/html_entities.gperf"
      {"lescc", { 0xE2, 0xAA, 0xA8 }, 3},
#line 511 "data/html_entities.gperf"
      {"lowbar", { 0x5F }, 1},
#line 952 "data/html_entities.gperf"
      {"ominus", { 0xE2, 0x8A, 0x96 }, 3},
#line 243 "data/html_entities.gperf"
      {"Star", { 0xE2, 0x8B, 0x86 }, 3},
#line 1424 "data/html_entities.gperf"
      {"tdot", { 0xE2, 0x83, 0x9B }, 3},
#line 262 "data/html_entities.gperf"
      {"TRADE", { 0xE2, 0x84, 0xA2 }, 3},
#line 867 "data/html_entities.gperf"
      {"sdot", { 0xE2, 0x8B, 0x85 }, 3},
#line 1949 "data/html_entities.gperf"
      {"edot", { 0xC4, 0x97 }, 2},
#line 1940 "data/html_entities.gperf"
      {"xotime", { 0xE2, 0xA8, 0x82 }, 3},
#line 938 "data/html_entities.gperf"
      {"osol", { 0xE2, 0x8A, 0x98 }, 3},
#line 2055 "data/html_entities.gperf"
      {"amp", { 0x26 }, 1},
#line 1011 "data/html_entities.gperf"
      {"Uparrow", { 0xE2, 0x87, 0x91 }, 3},
#line 1802 "data/html_entities.gperf"
      {"jfr", { 0xF0, 0x9D, 0x94, 0xA7 }, 4},
#line 1604 "data/html_entities.gperf"
      {"Zdot", { 0xC5, 0xBB }, 2},
#line 730 "data/html_entities.gperf"
      {"ltrPar", { 0xE2, 0xA6, 0x96 }, 3},
#line 1326 "data/html_entities.gperf"
      {"rx", { 0xE2, 0x84, 0x9E }, 3},
#line 1365 "data/html_entities.gperf"
      {"NotSquareSuperset", { 0xE2, 0x8A, 0x90, 0xCC, 0xB8 }, 5},
#line 664 "data/html_entities.gperf"
      {"half", { 0xC2, 0xBD }, 2},
#line 1001 "data/html_entities.gperf"
      {"NotSquareSupersetEqual", { 0xE2, 0x8B, 0xA3 }, 3},
#line 1407 "data/html_entities.gperf"
      {"Lt", { 0xE2, 0x89, 0xAA }, 3},
#line 115 "data/html_entities.gperf"
      {"xlarr", { 0xE2, 0x9F, 0xB5 }, 3},
#line 849 "data/html_entities.gperf"
      {"imped", { 0xC6, 0xB5 }, 2},
#line 841 "data/html_entities.gperf"
      {"Implies", { 0xE2, 0x87, 0x92 }, 3},
#line 499 "data/html_entities.gperf"
      {"Tilde", { 0xE2, 0x88, 0xBC }, 3},
#line 1245 "data/html_entities.gperf"
      {"para", { 0xC2, 0xB6 }, 2},
#line 886 "data/html_entities.gperf"
      {"xrarr", { 0xE2, 0x9F, 0xB6 }, 3},
#line 439 "data/html_entities.gperf"
      {"lesdotor", { 0xE2, 0xAA, 0x83 }, 3},
#line 631 "data/html_entities.gperf"
      {"LeftUpVector", { 0xE2, 0x86, 0xBF }, 3},
#line 2131 "data/html_entities.gperf"
      {"LeftUpVectorBar", { 0xE2, 0xA5, 0x98 }, 3},
#line 476 "data/html_entities.gperf"
      {"rsaquo", { 0xE2, 0x80, 0xBA }, 3},
#line 1939 "data/html_entities.gperf"
      {"rtrie", { 0xE2, 0x8A, 0xB5 }, 3},
#line 1932 "data/html_entities.gperf"
      {"lsaquo", { 0xE2, 0x80, 0xB9 }, 3},
#line 1060 "data/html_entities.gperf"
      {"ltrie", { 0xE2, 0x8A, 0xB4 }, 3},
#line 1265 "data/html_entities.gperf"
      {"searrow", { 0xE2, 0x86, 0x98 }, 3},
#line 2014 "data/html_entities.gperf"
      {"wedgeq", { 0xE2, 0x89, 0x99 }, 3},
#line 693 "data/html_entities.gperf"
      {"NotGreaterEqual", { 0xE2, 0x89, 0xB1 }, 3},
#line 946 "data/html_entities.gperf"
      {"gesles", { 0xE2, 0xAA, 0x94 }, 3},
#line 289 "data/html_entities.gperf"
      {"nearrow", { 0xE2, 0x86, 0x97 }, 3},
#line 2105 "data/html_entities.gperf"
      {"ubreve", { 0xC5, 0xAD }, 2},
#line 197 "data/html_entities.gperf"
      {"toea", { 0xE2, 0xA4, 0xA8 }, 3},
#line 1898 "data/html_entities.gperf"
      {"Idot", { 0xC4, 0xB0 }, 2},
#line 1692 "data/html_entities.gperf"
      {"Iota", { 0xCE, 0x99 }, 2},
#line 745 "data/html_entities.gperf"
      {"cedil", { 0xC2, 0xB8 }, 2},
#line 941 "data/html_entities.gperf"
      {"Conint", { 0xE2, 0x88, 0xAF }, 3},
#line 929 "data/html_entities.gperf"
      {"leftarrowtail", { 0xE2, 0x86, 0xA2 }, 3},
#line 1083 "data/html_entities.gperf"
      {"NotPrecedesEqual", { 0xE2, 0xAA, 0xAF, 0xCC, 0xB8 }, 5},
#line 1047 "data/html_entities.gperf"
      {"gfr", { 0xF0, 0x9D, 0x94, 0xA4 }, 4},
#line 1342 "data/html_entities.gperf"
      {"SmallCircle", { 0xE2, 0x88, 0x98 }, 3},
#line 1838 "data/html_entities.gperf"
      {"strns", { 0xC2, 0xAF }, 2},
#line 202 "data/html_entities.gperf"
      {"LeftTee", { 0xE2, 0x8A, 0xA3 }, 3},
#line 1987 "data/html_entities.gperf"
      {"sdote", { 0xE2, 0xA9, 0xA6 }, 3},
#line 140 "data/html_entities.gperf"
      {"Assign", { 0xE2, 0x89, 0x94 }, 3},
#line 1464 "data/html_entities.gperf"
      {"dotsquare", { 0xE2, 0x8A, 0xA1 }, 3},
#line 931 "data/html_entities.gperf"
      {"DotEqual", { 0xE2, 0x89, 0x90 }, 3},
#line 520 "data/html_entities.gperf"
      {"ecir", { 0xE2, 0x89, 0x96 }, 3},
#line 356 "data/html_entities.gperf"
      {"divideontimes", { 0xE2, 0x8B, 0x87 }, 3},
#line 2117 "data/html_entities.gperf"
      {"dwangle", { 0xE2, 0xA6, 0xA6 }, 3},
#line 615 "data/html_entities.gperf"
      {"sqsupe", { 0xE2, 0x8A, 0x92 }, 3},
#line 884 "data/html_entities.gperf"
      {"rangle", { 0xE2, 0x9F, 0xA9 }, 3},
#line 232 "data/html_entities.gperf"
      {"DoubleUpArrow", { 0xE2, 0x87, 0x91 }, 3},
#line 1260 "data/html_entities.gperf"
      {"langle", { 0xE2, 0x9F, 0xA8 }, 3},
#line 1608 "data/html_entities.gperf"
      {"Gfr", { 0xF0, 0x9D, 0x94, 0x8A }, 4},
#line 294 "data/html_entities.gperf"
      {"sqsupset", { 0xE2, 0x8A, 0x90 }, 3},
#line 1035 "data/html_entities.gperf"
      {"xmap", { 0xE2, 0x9F, 0xBC }, 3},
#line 443 "data/html_entities.gperf"
      {"DoubleUpDownArrow", { 0xE2, 0x87, 0x95 }, 3},
#line 1515 "data/html_entities.gperf"
      {"coprod", { 0xE2, 0x88, 0x90 }, 3},
#line 418 "data/html_entities.gperf"
      {"sqsup", { 0xE2, 0x8A, 0x90 }, 3},
#line 2121 "data/html_entities.gperf"
      {"it", { 0xE2, 0x81, 0xA2 }, 3},
#line 199 "data/html_entities.gperf"
      {"profalar", { 0xE2, 0x8C, 0xAE }, 3},
#line 1656 "data/html_entities.gperf"
      {"eogon", { 0xC4, 0x99 }, 2},
#line 1910 "data/html_entities.gperf"
      {"rmoust", { 0xE2, 0x8E, 0xB1 }, 3},
#line 2037 "data/html_entities.gperf"
      {"csub", { 0xE2, 0xAB, 0x8F }, 3},
#line 939 "data/html_entities.gperf"
      {"lmoust", { 0xE2, 0x8E, 0xB0 }, 3},
#line 160 "data/html_entities.gperf"
      {"uogon", { 0xC5, 0xB3 }, 2},
#line 712 "data/html_entities.gperf"
      {"male", { 0xE2, 0x99, 0x82 }, 3},
#line 1685 "data/html_entities.gperf"
      {"rsh", { 0xE2, 0x86, 0xB1 }, 3},
#line 2004 "data/html_entities.gperf"
      {"lsh", { 0xE2, 0x86, 0xB0 }, 3},
#line 1195 "data/html_entities.gperf"
      {"aopf", { 0xF0, 0x9D, 0x95, 0x92 }, 4},
#line 1996 "data/html_entities.gperf"
      {"vsupnE", { 0xE2, 0xAB, 0x8C, 0xEF, 0xB8, 0x80 }, 6},
#line 143 "data/html_entities.gperf"
      {"vsubnE", { 0xE2, 0xAB, 0x8B, 0xEF, 0xB8, 0x80 }, 6},
#line 1292 "data/html_entities.gperf"
      {"NotGreaterTilde", { 0xE2, 0x89, 0xB5 }, 3},
#line 1502 "data/html_entities.gperf"
      {"rtri", { 0xE2, 0x96, 0xB9 }, 3},
#line 2034 "data/html_entities.gperf"
      {"ltri", { 0xE2, 0x97, 0x83 }, 3},
#line 1166 "data/html_entities.gperf"
      {"Abreve", { 0xC4, 0x82 }, 2},
#line 1759 "data/html_entities.gperf"
      {"utri", { 0xE2, 0x96, 0xB5 }, 3},
#line 1983 "data/html_entities.gperf"
      {"models", { 0xE2, 0x8A, 0xA7 }, 3},
#line 1186 "data/html_entities.gperf"
      {"triminus", { 0xE2, 0xA8, 0xBA }, 3},
#line 2082 "data/html_entities.gperf"
      {"csup", { 0xE2, 0xAB, 0x90 }, 3},
#line 186 "data/html_entities.gperf"
      {"scnap", { 0xE2, 0xAA, 0xBA }, 3},
#line 820 "data/html_entities.gperf"
      {"vnsup", { 0xE2, 0x8A, 0x83, 0xE2, 0x83, 0x92 }, 6},
#line 1290 "data/html_entities.gperf"
      {"order", { 0xE2, 0x84, 0xB4 }, 3},
#line 461 "data/html_entities.gperf"
      {"homtht", { 0xE2, 0x88, 0xBB }, 3},
#line 1095 "data/html_entities.gperf"
      {"plustwo", { 0xE2, 0xA8, 0xA7 }, 3},
#line 13 "data/html_entities.gperf"
      {"iota", { 0xCE, 0xB9 }, 2},
#line 65 "data/html_entities.gperf"
      {"hscr", { 0xF0, 0x9D, 0x92, 0xBD }, 4},
#line 459 "data/html_entities.gperf"
      {"infintie", { 0xE2, 0xA7, 0x9D }, 3},
#line 1463 "data/html_entities.gperf"
      {"nsce", { 0xE2, 0xAA, 0xB0, 0xCC, 0xB8 }, 5},
#line 144 "data/html_entities.gperf"
      {"beta", { 0xCE, 0xB2 }, 2},
#line 1477 "data/html_entities.gperf"
      {"EmptySmallSquare", { 0xE2, 0x97, 0xBB }, 3},
#line 1769 "data/html_entities.gperf"
      {"Iogon", { 0xC4, 0xAE }, 2},
#line 328 "data/html_entities.gperf"
      {"Zeta", { 0xCE, 0x96 }, 2},
#line 1438 "data/html_entities.gperf"
      {"ltcir", { 0xE2, 0xA9, 0xB9 }, 3},
#line 317 "data/html_entities.gperf"
      {"Ubreve", { 0xC5, 0xAC }, 2},
#line 1208 "data/html_entities.gperf"
      {"xhArr", { 0xE2, 0x9F, 0xBA }, 3},
#line 1316 "data/html_entities.gperf"
      {"tridot", { 0xE2, 0x97, 0xAC }, 3},
#line 1235 "data/html_entities.gperf"
      {"dtdot", { 0xE2, 0x8B, 0xB1 }, 3},
#line 1676 "data/html_entities.gperf"
      {"swarrow", { 0xE2, 0x86, 0x99 }, 3},
#line 20 "data/html_entities.gperf"
      {"scnE", { 0xE2, 0xAA, 0xB6 }, 3},
#line 556 "data/html_entities.gperf"
      {"csupe", { 0xE2, 0xAB, 0x92 }, 3},
#line 1392 "data/html_entities.gperf"
      {"csube", { 0xE2, 0xAB, 0x91 }, 3},
#line 1974 "data/html_entities.gperf"
      {"nwarrow", { 0xE2, 0x86, 0x96 }, 3},
#line 1434 "data/html_entities.gperf"
      {"lowast", { 0xE2, 0x88, 0x97 }, 3},
#line 1193 "data/html_entities.gperf"
      {"Aogon", { 0xC4, 0x84 }, 2},
#line 1882 "data/html_entities.gperf"
      {"racute", { 0xC5, 0x95 }, 2},
#line 1460 "data/html_entities.gperf"
      {"lacute", { 0xC4, 0xBA }, 2},
#line 2110 "data/html_entities.gperf"
      {"sacute", { 0xC5, 0x9B }, 2},
#line 765 "data/html_entities.gperf"
      {"eacute", { 0xC3, 0xA9 }, 2},
#line 851 "data/html_entities.gperf"
      {"Lsh", { 0xE2, 0x86, 0xB0 }, 3},
#line 942 "data/html_entities.gperf"
      {"UpArrow", { 0xE2, 0x86, 0x91 }, 3},
#line 1830 "data/html_entities.gperf"
      {"Rsh", { 0xE2, 0x86, 0xB1 }, 3},
#line 1191 "data/html_entities.gperf"
      {"uacute", { 0xC3, 0xBA }, 2},
#line 1508 "data/html_entities.gperf"
      {"nacute", { 0xC5, 0x84 }, 2},
#line 1871 "data/html_entities.gperf"
      {"Zacute", { 0xC5, 0xB9 }, 2},
#line 1405 "data/html_entities.gperf"
      {"timesd", { 0xE2, 0xA8, 0xB0 }, 3},
#line 1615 "data/html_entities.gperf"
      {"caron", { 0xCB, 0x87 }, 2},
#line 36 "data/html_entities.gperf"
      {"xlArr", { 0xE2, 0x9F, 0xB8 }, 3},
#line 485 "data/html_entities.gperf"
      {"DoubleVerticalBar", { 0xE2, 0x88, 0xA5 }, 3},
#line 1223 "data/html_entities.gperf"
      {"Sacute", { 0xC5, 0x9A }, 2},
#line 2062 "data/html_entities.gperf"
      {"xrArr", { 0xE2, 0x9F, 0xB9 }, 3},
#line 1218 "data/html_entities.gperf"
      {"circeq", { 0xE2, 0x89, 0x97 }, 3},
#line 798 "data/html_entities.gperf"
      {"rthree", { 0xE2, 0x8B, 0x8C }, 3},
#line 1036 "data/html_entities.gperf"
      {"lthree", { 0xE2, 0x8B, 0x8B }, 3},
#line 1665 "data/html_entities.gperf"
      {"ClockwiseContourIntegral", { 0xE2, 0x88, 0xB2 }, 3},
#line 515 "data/html_entities.gperf"
      {"lmidot", { 0xC5, 0x80 }, 2},
#line 1058 "data/html_entities.gperf"
      {"Uogon", { 0xC5, 0xB2 }, 2},
#line 1579 "data/html_entities.gperf"
      {"nvle", { 0xE2, 0x89, 0xA4, 0xE2, 0x83, 0x92 }, 6},
#line 806 "data/html_entities.gperf"
      {"apE", { 0xE2, 0xA9, 0xB0 }, 3},
#line 1652 "data/html_entities.gperf"
      {"LeftUpDownVector", { 0xE2, 0xA5, 0x91 }, 3},
#line 1179 "data/html_entities.gperf"
      {"lesg", { 0xE2, 0x8B, 0x9A, 0xEF, 0xB8, 0x80 }, 6},
#line 756 "data/html_entities.gperf"
      {"rfisht", { 0xE2, 0xA5, 0xBD }, 3},
#line 1828 "data/html_entities.gperf"
      {"MediumSpace", { 0xE2, 0x81, 0x9F }, 3},
#line 546 "data/html_entities.gperf"
      {"lfisht", { 0xE2, 0xA5, 0xBC }, 3},
#line 1427 "data/html_entities.gperf"
      {"ufisht", { 0xE2, 0xA5, 0xBE }, 3},
#line 396 "data/html_entities.gperf"
      {"backcong", { 0xE2, 0x89, 0x8C }, 3},
#line 1696 "data/html_entities.gperf"
      {"Iacute", { 0xC3, 0x8D }, 2},
#line 1024 "data/html_entities.gperf"
      {"nsc", { 0xE2, 0x8A, 0x81 }, 3},
#line 75 "data/html_entities.gperf"
      {"iiiint", { 0xE2, 0xA8, 0x8C }, 3},
#line 516 "data/html_entities.gperf"
      {"ApplyFunction", { 0xE2, 0x81, 0xA1 }, 3},
#line 1020 "data/html_entities.gperf"
      {"cirE", { 0xE2, 0xA7, 0x83 }, 3},
#line 1130 "data/html_entities.gperf"
      {"upharpoonright", { 0xE2, 0x86, 0xBE }, 3},
#line 421 "data/html_entities.gperf"
      {"complement", { 0xE2, 0x88, 0x81 }, 3},
#line 430 "data/html_entities.gperf"
      {"cscr", { 0xF0, 0x9D, 0x92, 0xB8 }, 4},
#line 1450 "data/html_entities.gperf"
      {"ReverseElement", { 0xE2, 0x88, 0x8B }, 3},
#line 207 "data/html_entities.gperf"
      {"Lacute", { 0xC4, 0xB9 }, 2},
#line 818 "data/html_entities.gperf"
      {"zigrarr", { 0xE2, 0x87, 0x9D }, 3},
#line 1618 "data/html_entities.gperf"
      {"Racute", { 0xC5, 0x94 }, 2},
#line 1512 "data/html_entities.gperf"
      {"Aacute", { 0xC3, 0x81 }, 2},
#line 1090 "data/html_entities.gperf"
      {"iogon", { 0xC4, 0xAF }, 2},
#line 219 "data/html_entities.gperf"
      {"Nacute", { 0xC5, 0x83 }, 2},
#line 1028 "data/html_entities.gperf"
      {"sqcups", { 0xE2, 0x8A, 0x94, 0xEF, 0xB8, 0x80 }, 6},
#line 1250 "data/html_entities.gperf"
      {"xopf", { 0xF0, 0x9D, 0x95, 0xA9 }, 4},
#line 2068 "data/html_entities.gperf"
      {"ast", { 0x2A }, 1},
#line 1745 "data/html_entities.gperf"
      {"egs", { 0xE2, 0xAA, 0x96 }, 3},
#line 1835 "data/html_entities.gperf"
      {"oint", { 0xE2, 0x88, 0xAE }, 3},
#line 402 "data/html_entities.gperf"
      {"sqsupseteq", { 0xE2, 0x8A, 0x92 }, 3},
#line 1154 "data/html_entities.gperf"
      {"iff", { 0xE2, 0x87, 0x94 }, 3},
#line 250 "data/html_entities.gperf"
      {"ngt", { 0xE2, 0x89, 0xAF }, 3},
#line 1283 "data/html_entities.gperf"
      {"DoubleRightTee", { 0xE2, 0x8A, 0xA8 }, 3},
#line 1971 "data/html_entities.gperf"
      {"Yacute", { 0xC3, 0x9D }, 2},
#line 1032 "data/html_entities.gperf"
      {"eplus", { 0xE2, 0xA9, 0xB1 }, 3},
#line 1961 "data/html_entities.gperf"
      {"Lmidot", { 0xC4, 0xBF }, 2},
#line 743 "data/html_entities.gperf"
      {"sqcup", { 0xE2, 0x8A, 0x94 }, 3},
#line 961 "data/html_entities.gperf"
      {"uplus", { 0xE2, 0x8A, 0x8E }, 3},
#line 147 "data/html_entities.gperf"
      {"NotVerticalBar", { 0xE2, 0x88, 0xA4 }, 3},
#line 57 "data/html_entities.gperf"
      {"Esim", { 0xE2, 0xA9, 0xB3 }, 3},
#line 1334 "data/html_entities.gperf"
      {"Uacute", { 0xC3, 0x9A }, 2},
#line 1514 "data/html_entities.gperf"
      {"prcue", { 0xE2, 0x89, 0xBC }, 3},
#line 66 "data/html_entities.gperf"
      {"ngtr", { 0xE2, 0x89, 0xAF }, 3},
#line 200 "data/html_entities.gperf"
      {"cirscir", { 0xE2, 0xA7, 0x82 }, 3},
#line 536 "data/html_entities.gperf"
      {"bigotimes", { 0xE2, 0xA8, 0x82 }, 3},
#line 93 "data/html_entities.gperf"
      {"dtri", { 0xE2, 0x96, 0xBF }, 3},
#line 136 "data/html_entities.gperf"
      {"dbkarow", { 0xE2, 0xA4, 0x8F }, 3},
#line 1556 "data/html_entities.gperf"
      {"isinE", { 0xE2, 0x8B, 0xB9 }, 3},
#line 1504 "data/html_entities.gperf"
      {"Edot", { 0xC4, 0x96 }, 2},
#line 1681 "data/html_entities.gperf"
      {"NotEqualTilde", { 0xE2, 0x89, 0x82, 0xCC, 0xB8 }, 5},
#line 1003 "data/html_entities.gperf"
      {"NegativeMediumSpace", { 0xE2, 0x80, 0x8B }, 3},
#line 373 "data/html_entities.gperf"
      {"TildeTilde", { 0xE2, 0x89, 0x88 }, 3},
#line 1070 "data/html_entities.gperf"
      {"iacute", { 0xC3, 0xAD }, 2},
#line 1448 "data/html_entities.gperf"
      {"Beta", { 0xCE, 0x92 }, 2},
#line 48 "data/html_entities.gperf"
      {"hfr", { 0xF0, 0x9D, 0x94, 0xA5 }, 4},
#line 1457 "data/html_entities.gperf"
      {"LeftArrowBar", { 0xE2, 0x87, 0xA4 }, 3},
#line 1614 "data/html_entities.gperf"
      {"Congruent", { 0xE2, 0x89, 0xA1 }, 3},
#line 1715 "data/html_entities.gperf"
      {"gesdot", { 0xE2, 0xAA, 0x80 }, 3},
#line 239 "data/html_entities.gperf"
      {"DifferentialD", { 0xE2, 0x85, 0x86 }, 3},
#line 349 "data/html_entities.gperf"
      {"nge", { 0xE2, 0x89, 0xB1 }, 3},
#line 1956 "data/html_entities.gperf"
      {"vellip", { 0xE2, 0x8B, 0xAE }, 3},
#line 1355 "data/html_entities.gperf"
      {"leqslant", { 0xE2, 0xA9, 0xBD }, 3},
#line 171 "data/html_entities.gperf"
      {"smid", { 0xE2, 0x88, 0xA3 }, 3},
#line 1921 "data/html_entities.gperf"
      {"tbrk", { 0xE2, 0x8E, 0xB4 }, 3},
#line 205 "data/html_entities.gperf"
      {"fork", { 0xE2, 0x8B, 0x94 }, 3},
#line 1941 "data/html_entities.gperf"
      {"nmid", { 0xE2, 0x88, 0xA4 }, 3},
#line 1695 "data/html_entities.gperf"
      {"bbrk", { 0xE2, 0x8E, 0xB5 }, 3},
#line 1805 "data/html_entities.gperf"
      {"theta", { 0xCE, 0xB8 }, 2},
#line 1623 "data/html_entities.gperf"
      {"nsucc", { 0xE2, 0x8A, 0x81 }, 3},
#line 2108 "data/html_entities.gperf"
      {"leftarrow", { 0xE2, 0x86, 0x90 }, 3},
#line 1340 "data/html_entities.gperf"
      {"CenterDot", { 0xC2, 0xB7 }, 2},
#line 191 "data/html_entities.gperf"
      {"PrecedesEqual", { 0xE2, 0xAA, 0xAF }, 3},
#line 813 "data/html_entities.gperf"
      {"nu", { 0xCE, 0xBD }, 2},
#line 1180 "data/html_entities.gperf"
      {"DoubleLongLeftArrow", { 0xE2, 0x9F, 0xB8 }, 3},
#line 1271 "data/html_entities.gperf"
      {"DoubleLongLeftRightArrow", { 0xE2, 0x9F, 0xBA }, 3},
#line 1134 "data/html_entities.gperf"
      {"UpperLeftArrow", { 0xE2, 0x86, 0x96 }, 3},
#line 1571 "data/html_entities.gperf"
      {"ohbar", { 0xE2, 0xA6, 0xB5 }, 3},
#line 1294 "data/html_entities.gperf"
      {"imath", { 0xC4, 0xB1 }, 2},
#line 29 "data/html_entities.gperf"
      {"nvgt", { 0x3E, 0xE2, 0x83, 0x92 }, 4},
#line 1364 "data/html_entities.gperf"
      {"simg", { 0xE2, 0xAA, 0x9E }, 3},
#line 127 "data/html_entities.gperf"
      {"trie", { 0xE2, 0x89, 0x9C }, 3},
#line 927 "data/html_entities.gperf"
      {"ddotseq", { 0xE2, 0xA9, 0xB7 }, 3},
#line 1054 "data/html_entities.gperf"
      {"nges", { 0xE2, 0xA9, 0xBE, 0xCC, 0xB8 }, 5},
#line 152 "data/html_entities.gperf"
      {"trpezium", { 0xE2, 0x8F, 0xA2 }, 3},
#line 81 "data/html_entities.gperf"
      {"nwnear", { 0xE2, 0xA4, 0xA7 }, 3},
#line 2006 "data/html_entities.gperf"
      {"eng", { 0xC5, 0x8B }, 2},
#line 990 "data/html_entities.gperf"
      {"Mellintrf", { 0xE2, 0x84, 0xB3 }, 3},
#line 666 "data/html_entities.gperf"
      {"bbrktbrk", { 0xE2, 0x8E, 0xB6 }, 3},
#line 707 "data/html_entities.gperf"
      {"DownTee", { 0xE2, 0x8A, 0xA4 }, 3},
#line 883 "data/html_entities.gperf"
      {"uuarr", { 0xE2, 0x87, 0x88 }, 3},
#line 1161 "data/html_entities.gperf"
      {"ZeroWidthSpace", { 0xE2, 0x80, 0x8B }, 3},
#line 1008 "data/html_entities.gperf"
      {"isinv", { 0xE2, 0x88, 0x88 }, 3},
#line 702 "data/html_entities.gperf"
      {"iinfin", { 0xE2, 0xA7, 0x9C }, 3},
#line 1414 "data/html_entities.gperf"
      {"xi", { 0xCE, 0xBE }, 2},
#line 446 "data/html_entities.gperf"
      {"boxUr", { 0xE2, 0x95, 0x99 }, 3},
#line 132 "data/html_entities.gperf"
      {"zdot", { 0xC5, 0xBC }, 2},
#line 2103 "data/html_entities.gperf"
      {"dfisht", { 0xE2, 0xA5, 0xBF }, 3},
#line 797 "data/html_entities.gperf"
      {"bump", { 0xE2, 0x89, 0x8E }, 3},
#line 805 "data/html_entities.gperf"
      {"Eogon", { 0xC4, 0x98 }, 2},
#line 17 "data/html_entities.gperf"
      {"block", { 0xE2, 0x96, 0x88 }, 3},
#line 940 "data/html_entities.gperf"
      {"cfr", { 0xF0, 0x9D, 0x94, 0xA0 }, 4},
#line 544 "data/html_entities.gperf"
      {"blank", { 0xE2, 0x90, 0xA3 }, 3},
#line 475 "data/html_entities.gperf"
      {"Leftarrow", { 0xE2, 0x87, 0x90 }, 3},
#line 33 "data/html_entities.gperf"
      {"bigodot", { 0xE2, 0xA8, 0x80 }, 3},
#line 1059 "data/html_entities.gperf"
      {"Omicron", { 0xCE, 0x9F }, 2},
#line 2098 "data/html_entities.gperf"
      {"nLtv", { 0xE2, 0x89, 0xAA, 0xCC, 0xB8 }, 5},
#line 528 "data/html_entities.gperf"
      {"hairsp", { 0xE2, 0x80, 0x8A }, 3},
#line 759 "data/html_entities.gperf"
      {"ngeq", { 0xE2, 0x89, 0xB1 }, 3},
#line 965 "data/html_entities.gperf"
      {"Nu", { 0xCE, 0x9D }, 2},
#line 50 "data/html_entities.gperf"
      {"Mu", { 0xCE, 0x9C }, 2},
#line 1246 "data/html_entities.gperf"
      {"ngeqq", { 0xE2, 0x89, 0xA7, 0xCC, 0xB8 }, 5},
#line 910 "data/html_entities.gperf"
      {"DownLeftVector", { 0xE2, 0x86, 0xBD }, 3},
#line 832 "data/html_entities.gperf"
      {"rhov", { 0xCF, 0xB1 }, 2},
#line 1389 "data/html_entities.gperf"
      {"UpperRightArrow", { 0xE2, 0x86, 0x97 }, 3},
#line 1528 "data/html_entities.gperf"
      {"DownLeftVectorBar", { 0xE2, 0xA5, 0x96 }, 3},
#line 1257 "data/html_entities.gperf"
      {"lEg", { 0xE2, 0xAA, 0x8B }, 3},
#line 295 "data/html_entities.gperf"
      {"rarrw", { 0xE2, 0x86, 0x9D }, 3},
#line 548 "data/html_entities.gperf"
      {"nGg", { 0xE2, 0x8B, 0x99, 0xCC, 0xB8 }, 5},
#line 542 "data/html_entities.gperf"
      {"rtriltri", { 0xE2, 0xA7, 0x8E }, 3},
#line 769 "data/html_entities.gperf"
      {"bumpe", { 0xE2, 0x89, 0x8F }, 3},
#line 251 "data/html_entities.gperf"
      {"TildeEqual", { 0xE2, 0x89, 0x83 }, 3},
#line 1345 "data/html_entities.gperf"
      {"sup1", { 0xC2, 0xB9 }, 2},
#line 1247 "data/html_entities.gperf"
      {"DownLeftTeeVector", { 0xE2, 0xA5, 0x9E }, 3},
#line 28 "data/html_entities.gperf"
      {"barvee", { 0xE2, 0x8A, 0xBD }, 3},
#line 1758 "data/html_entities.gperf"
      {"ascr", { 0xF0, 0x9D, 0x92, 0xB6 }, 4},
#line 1057 "data/html_entities.gperf"
      {"sup3", { 0xC2, 0xB3 }, 2},
#line 911 "data/html_entities.gperf"
      {"sup2", { 0xC2, 0xB2 }, 2},
#line 166 "data/html_entities.gperf"
      {"boxH", { 0xE2, 0x95, 0x90 }, 3},
#line 1262 "data/html_entities.gperf"
      {"sc", { 0xE2, 0x89, 0xBB }, 3},
#line 301 "data/html_entities.gperf"
      {"ltlarr", { 0xE2, 0xA5, 0xB6 }, 3},
#line 949 "data/html_entities.gperf"
      {"Theta", { 0xCE, 0x98 }, 2},
#line 1561 "data/html_entities.gperf"
      {"kappav", { 0xCF, 0xB0 }, 2},
#line 640 "data/html_entities.gperf"
      {"nGtv", { 0xE2, 0x89, 0xAB, 0xCC, 0xB8 }, 5},
#line 1498 "data/html_entities.gperf"
      {"circledast", { 0xE2, 0x8A, 0x9B }, 3},
#line 474 "data/html_entities.gperf"
      {"sup", { 0xE2, 0x8A, 0x83 }, 3},
#line 1984 "data/html_entities.gperf"
      {"rsquor", { 0xE2, 0x80, 0x99 }, 3},
#line 1133 "data/html_entities.gperf"
      {"lsquor", { 0xE2, 0x80, 0x9A }, 3},
#line 970 "data/html_entities.gperf"
      {"NotLessSlantEqual", { 0xE2, 0xA9, 0xBD, 0xCC, 0xB8 }, 5},
#line 983 "data/html_entities.gperf"
      {"doteqdot", { 0xE2, 0x89, 0x91 }, 3},
#line 9 "data/html_entities.gperf"
      {"circledS", { 0xE2, 0x93, 0x88 }, 3},
#line 1999 "data/html_entities.gperf"
      {"Sc", { 0xE2, 0xAA, 0xBC }, 3},
#line 436 "data/html_entities.gperf"
      {"boxHu", { 0xE2, 0x95, 0xA7 }, 3},
#line 190 "data/html_entities.gperf"
      {"TildeFullEqual", { 0xE2, 0x89, 0x85 }, 3},
#line 711 "data/html_entities.gperf"
      {"boxVr", { 0xE2, 0x95, 0x9F }, 3},
#line 370 "data/html_entities.gperf"
      {"Eacute", { 0xC3, 0x89 }, 2},
#line 984 "data/html_entities.gperf"
      {"colon", { 0x3A }, 1},
#line 1777 "data/html_entities.gperf"
      {"boxUR", { 0xE2, 0x95, 0x9A }, 3},
#line 985 "data/html_entities.gperf"
      {"prnsim", { 0xE2, 0x8B, 0xA8 }, 3},
#line 749 "data/html_entities.gperf"
      {"boxV", { 0xE2, 0x95, 0x91 }, 3},
#line 513 "data/html_entities.gperf"
      {"isindot", { 0xE2, 0x8B, 0xB5 }, 3},
#line 34 "data/html_entities.gperf"
      {"Sup", { 0xE2, 0x8B, 0x91 }, 3},
#line 641 "data/html_entities.gperf"
      {"colone", { 0xE2, 0x89, 0x94 }, 3},
#line 1306 "data/html_entities.gperf"
      {"Laplacetrf", { 0xE2, 0x84, 0x92 }, 3},
#line 1798 "data/html_entities.gperf"
      {"roang", { 0xE2, 0x9F, 0xAD }, 3},
#line 1023 "data/html_entities.gperf"
      {"vartheta", { 0xCF, 0x91 }, 2},
#line 492 "data/html_entities.gperf"
      {"loang", { 0xE2, 0x9F, 0xAC }, 3},
#line 1394 "data/html_entities.gperf"
      {"ccaps", { 0xE2, 0xA9, 0x8D }, 3},
#line 1510 "data/html_entities.gperf"
      {"dblac", { 0xCB, 0x9D }, 2},
#line 1815 "data/html_entities.gperf"
      {"DoubleLongRightArrow", { 0xE2, 0x9F, 0xB9 }, 3},
#line 1625 "data/html_entities.gperf"
      {"nshortparallel", { 0xE2, 0x88, 0xA6 }, 3},
#line 752 "data/html_entities.gperf"
      {"vartriangleright", { 0xE2, 0x8A, 0xB3 }, 3},
#line 1045 "data/html_entities.gperf"
      {"vartriangleleft", { 0xE2, 0x8A, 0xB2 }, 3},
#line 1113 "data/html_entities.gperf"
      {"compfn", { 0xE2, 0x88, 0x98 }, 3},
#line 172 "data/html_entities.gperf"
      {"risingdotseq", { 0xE2, 0x89, 0x93 }, 3},
#line 1855 "data/html_entities.gperf"
      {"trisb", { 0xE2, 0xA7, 0x8D }, 3},
#line 2070 "data/html_entities.gperf"
      {"Cdot", { 0xC4, 0x8A }, 2},
#line 122 "data/html_entities.gperf"
      {"omicron", { 0xCE, 0xBF }, 2},
#line 1982 "data/html_entities.gperf"
      {"circledR", { 0xC2, 0xAE }, 2},
#line 1397 "data/html_entities.gperf"
      {"ccups", { 0xE2, 0xA9, 0x8C }, 3},
#line 791 "data/html_entities.gperf"
      {"reg", { 0xC2, 0xAE }, 2},
#line 1196 "data/html_entities.gperf"
      {"leg", { 0xE2, 0x8B, 0x9A }, 3},
#line 1968 "data/html_entities.gperf"
      {"breve", { 0xCB, 0x98 }, 2},
#line 937 "data/html_entities.gperf"
      {"nexist", { 0xE2, 0x88, 0x84 }, 3},
#line 1304 "data/html_entities.gperf"
      {"numsp", { 0xE2, 0x80, 0x87 }, 3},
#line 1537 "data/html_entities.gperf"
      {"ReverseEquilibrium", { 0xE2, 0x87, 0x8B }, 3},
#line 1327 "data/html_entities.gperf"
      {"boxUL", { 0xE2, 0x95, 0x9D }, 3},
#line 981 "data/html_entities.gperf"
      {"zeta", { 0xCE, 0xB6 }, 2},
#line 1531 "data/html_entities.gperf"
      {"supmult", { 0xE2, 0xAB, 0x82 }, 3},
#line 1841 "data/html_entities.gperf"
      {"HilbertSpace", { 0xE2, 0x84, 0x8B }, 3},
#line 257 "data/html_entities.gperf"
      {"nexists", { 0xE2, 0x88, 0x84 }, 3},
#line 1425 "data/html_entities.gperf"
      {"ccaron", { 0xC4, 0x8D }, 2},
#line 2013 "data/html_entities.gperf"
      {"LessSlantEqual", { 0xE2, 0xA9, 0xBD }, 3},
#line 593 "data/html_entities.gperf"
      {"quest", { 0x3F }, 1},
#line 514 "data/html_entities.gperf"
      {"supsub", { 0xE2, 0xAB, 0x94 }, 3},
#line 971 "data/html_entities.gperf"
      {"boxHU", { 0xE2, 0x95, 0xA9 }, 3},
#line 1266 "data/html_entities.gperf"
      {"gvnE", { 0xE2, 0x89, 0xA9, 0xEF, 0xB8, 0x80 }, 6},
#line 1051 "data/html_entities.gperf"
      {"duarr", { 0xE2, 0x87, 0xB5 }, 3},
#line 673 "data/html_entities.gperf"
      {"chi", { 0xCF, 0x87 }, 2},
#line 1878 "data/html_entities.gperf"
      {"supset", { 0xE2, 0x8A, 0x83 }, 3},
#line 138 "data/html_entities.gperf"
      {"kopf", { 0xF0, 0x9D, 0x95, 0x9C }, 4},
#line 64 "data/html_entities.gperf"
      {"boxVH", { 0xE2, 0x95, 0xAC }, 3},
#line 1243 "data/html_entities.gperf"
      {"boxVR", { 0xE2, 0x95, 0xA0 }, 3},
#line 454 "data/html_entities.gperf"
      {"odot", { 0xE2, 0x8A, 0x99 }, 3},
#line 626 "data/html_entities.gperf"
      {"zacute", { 0xC5, 0xBA }, 2},
#line 1459 "data/html_entities.gperf"
      {"Barv", { 0xE2, 0xAB, 0xA7 }, 3},
#line 812 "data/html_entities.gperf"
      {"raquo", { 0xC2, 0xBB }, 2},
#line 1768 "data/html_entities.gperf"
      {"Supset", { 0xE2, 0x8B, 0x91 }, 3},
#line 1264 "data/html_entities.gperf"
      {"laquo", { 0xC2, 0xAB }, 2},
#line 194 "data/html_entities.gperf"
      {"LeftArrow", { 0xE2, 0x86, 0x90 }, 3},
#line 214 "data/html_entities.gperf"
      {"ngsim", { 0xE2, 0x89, 0xB5 }, 3},
#line 1137 "data/html_entities.gperf"
      {"dagger", { 0xE2, 0x80, 0xA0 }, 3},
#line 1907 "data/html_entities.gperf"
      {"exponentiale", { 0xE2, 0x85, 0x87 }, 3},
#line 255 "data/html_entities.gperf"
      {"Dagger", { 0xE2, 0x80, 0xA1 }, 3},
#line 1827 "data/html_entities.gperf"
      {"xsqcup", { 0xE2, 0xA8, 0x86 }, 3},
#line 180 "data/html_entities.gperf"
      {"supne", { 0xE2, 0x8A, 0x8B }, 3},
#line 318 "data/html_entities.gperf"
      {"lesdoto", { 0xE2, 0xAA, 0x81 }, 3},
#line 35 "data/html_entities.gperf"
      {"raemptyv", { 0xE2, 0xA6, 0xB3 }, 3},
#line 704 "data/html_entities.gperf"
      {"laemptyv", { 0xE2, 0xA6, 0xB4 }, 3},
#line 893 "data/html_entities.gperf"
      {"xscr", { 0xF0, 0x9D, 0x93, 0x8D }, 4},
#line 1087 "data/html_entities.gperf"
      {"supsup", { 0xE2, 0xAB, 0x96 }, 3},
#line 1280 "data/html_entities.gperf"
      {"shcy", { 0xD1, 0x88 }, 2},
#line 1959 "data/html_entities.gperf"
      {"ic", { 0xE2, 0x81, 0xA3 }, 3},
#line 1908 "data/html_entities.gperf"
      {"ljcy", { 0xD1, 0x99 }, 2},
#line 588 "data/html_entities.gperf"
      {"capdot", { 0xE2, 0xA9, 0x80 }, 3},
#line 830 "data/html_entities.gperf"
      {"boxHd", { 0xE2, 0x95, 0xA4 }, 3},
#line 393 "data/html_entities.gperf"
      {"njcy", { 0xD1, 0x9A }, 2},
#line 1442 "data/html_entities.gperf"
      {"HumpEqual", { 0xE2, 0x89, 0x8F }, 3},
#line 362 "data/html_entities.gperf"
      {"Product", { 0xE2, 0x88, 0x8F }, 3},
#line 694 "data/html_entities.gperf"
      {"bumpeq", { 0xE2, 0x89, 0x8F }, 3},
#line 672 "data/html_entities.gperf"
      {"gsime", { 0xE2, 0xAA, 0x8E }, 3},
#line 1688 "data/html_entities.gperf"
      {"afr", { 0xF0, 0x9D, 0x94, 0x9E }, 4},
#line 670 "data/html_entities.gperf"
      {"boxVL", { 0xE2, 0x95, 0xA3 }, 3},
#line 1810 "data/html_entities.gperf"
      {"bemptyv", { 0xE2, 0xA6, 0xB0 }, 3},
#line 1509 "data/html_entities.gperf"
      {"DiacriticalAcute", { 0xC2, 0xB4 }, 2},
#line 97 "data/html_entities.gperf"
      {"sbquo", { 0xE2, 0x80, 0x9A }, 3},
#line 1870 "data/html_entities.gperf"
      {"Oacute", { 0xC3, 0x93 }, 2},
#line 110 "data/html_entities.gperf"
      {"mu", { 0xCE, 0xBC }, 2},
#line 1638 "data/html_entities.gperf"
      {"DownArrowBar", { 0xE2, 0xA4, 0x93 }, 3},
#line 1252 "data/html_entities.gperf"
      {"rang", { 0xE2, 0x9F, 0xA9 }, 3},
#line 1735 "data/html_entities.gperf"
      {"lang", { 0xE2, 0x9F, 0xA8 }, 3},
#line 1400 "data/html_entities.gperf"
      {"ocir", { 0xE2, 0x8A, 0x9A }, 3},
#line 156 "data/html_entities.gperf"
      {"nang", { 0xE2, 0x88, 0xA0, 0xE2, 0x83, 0x92 }, 6},
#line 11 "data/html_entities.gperf"
      {"sum", { 0xE2, 0x88, 0x91 }, 3},
#line 689 "data/html_entities.gperf"
      {"yopf", { 0xF0, 0x9D, 0x95, 0xAA }, 4},
#line 86 "data/html_entities.gperf"
      {"NotExists", { 0xE2, 0x88, 0x84 }, 3},
#line 1152 "data/html_entities.gperf"
      {"realpart", { 0xE2, 0x84, 0x9C }, 3},
#line 1356 "data/html_entities.gperf"
      {"num", { 0x23 }, 1},
#line 1840 "data/html_entities.gperf"
      {"supseteq", { 0xE2, 0x8A, 0x87 }, 3},
#line 2124 "data/html_entities.gperf"
      {"supseteqq", { 0xE2, 0xAB, 0x86 }, 3},
#line 741 "data/html_entities.gperf"
      {"lnapprox", { 0xE2, 0xAA, 0x89 }, 3},
#line 898 "data/html_entities.gperf"
      {"supsetneq", { 0xE2, 0x8A, 0x8B }, 3},
#line 1627 "data/html_entities.gperf"
      {"coloneq", { 0xE2, 0x89, 0x94 }, 3},
#line 992 "data/html_entities.gperf"
      {"Sum", { 0xE2, 0x88, 0x91 }, 3},
#line 1796 "data/html_entities.gperf"
      {"lgE", { 0xE2, 0xAA, 0x91 }, 3},
#line 690 "data/html_entities.gperf"
      {"af", { 0xE2, 0x81, 0xA1 }, 3},
#line 1924 "data/html_entities.gperf"
      {"ngE", { 0xE2, 0x89, 0xA7, 0xCC, 0xB8 }, 5},
#line 96 "data/html_entities.gperf"
      {"IOcy", { 0xD0, 0x81 }, 2},
#line 274 "data/html_entities.gperf"
      {"DiacriticalTilde", { 0xCB, 0x9C }, 2},
#line 2091 "data/html_entities.gperf"
      {"bsolb", { 0xE2, 0xA7, 0x85 }, 3},
#line 1880 "data/html_entities.gperf"
      {"ZHcy", { 0xD0, 0x96 }, 2},
#line 897 "data/html_entities.gperf"
      {"DoubleRightArrow", { 0xE2, 0x87, 0x92 }, 3},
#line 1102 "data/html_entities.gperf"
      {"xoplus", { 0xE2, 0xA8, 0x81 }, 3},
#line 796 "data/html_entities.gperf"
      {"boxUl", { 0xE2, 0x95, 0x9C }, 3},
#line 1429 "data/html_entities.gperf"
      {"SHcy", { 0xD0, 0xA8 }, 2},
#line 456 "data/html_entities.gperf"
      {"szlig", { 0xC3, 0x9F }, 2},
#line 1891 "data/html_entities.gperf"
      {"Cacute", { 0xC4, 0x86 }, 2},
#line 1439 "data/html_entities.gperf"
      {"boxplus", { 0xE2, 0x8A, 0x9E }, 3},
#line 163 "data/html_entities.gperf"
      {"Breve", { 0xCB, 0x98 }, 2},
#line 828 "data/html_entities.gperf"
      {"deg", { 0xC2, 0xB0 }, 2},
#line 739 "data/html_entities.gperf"
      {"Lang", { 0xE2, 0x9F, 0xAA }, 3},
#line 2023 "data/html_entities.gperf"
      {"Rang", { 0xE2, 0x9F, 0xAB }, 3},
#line 552 "data/html_entities.gperf"
      {"IEcy", { 0xD0, 0x95 }, 2},
#line 917 "data/html_entities.gperf"
      {"apacir", { 0xE2, 0xA9, 0xAF }, 3},
#line 2051 "data/html_entities.gperf"
      {"gla", { 0xE2, 0xAA, 0xA5 }, 3},
#line 868 "data/html_entities.gperf"
      {"downarrow", { 0xE2, 0x86, 0x93 }, 3},
#line 484 "data/html_entities.gperf"
      {"zwnj", { 0xE2, 0x80, 0x8C }, 3},
#line 1678 "data/html_entities.gperf"
      {"UpArrowDownArrow", { 0xE2, 0x87, 0x85 }, 3},
#line 1491 "data/html_entities.gperf"
      {"CapitalDifferentialD", { 0xE2, 0x85, 0x85 }, 3},
#line 685 "data/html_entities.gperf"
      {"KHcy", { 0xD0, 0xA5 }, 2},
#line 2053 "data/html_entities.gperf"
      {"Downarrow", { 0xE2, 0x87, 0x93 }, 3},
#line 477 "data/html_entities.gperf"
      {"KJcy", { 0xD0, 0x8C }, 2},
#line 964 "data/html_entities.gperf"
      {"Cconint", { 0xE2, 0x88, 0xB0 }, 3},
#line 1860 "data/html_entities.gperf"
      {"oacute", { 0xC3, 0xB3 }, 2},
#line 1791 "data/html_entities.gperf"
      {"gamma", { 0xCE, 0xB3 }, 2},
#line 857 "data/html_entities.gperf"
      {"questeq", { 0xE2, 0x89, 0x9F }, 3},
#line 1650 "data/html_entities.gperf"
      {"DiacriticalDot", { 0xCB, 0x99 }, 2},
#line 334 "data/html_entities.gperf"
      {"nvinfin", { 0xE2, 0xA7, 0x9E }, 3},
#line 1261 "data/html_entities.gperf"
      {"LJcy", { 0xD0, 0x89 }, 2},
#line 83 "data/html_entities.gperf"
      {"shy", { 0xC2, 0xAD }, 2},
#line 1241 "data/html_entities.gperf"
      {"caret", { 0xE2, 0x81, 0x81 }, 3},
#line 1259 "data/html_entities.gperf"
      {"odsold", { 0xE2, 0xA6, 0xBC }, 3},
#line 1906 "data/html_entities.gperf"
      {"DiacriticalDoubleAcute", { 0xCB, 0x9D }, 2},
#line 246 "data/html_entities.gperf"
      {"iocy", { 0xD1, 0x91 }, 2},
#line 1325 "data/html_entities.gperf"
      {"fjlig", { 0x66, 0x6A }, 2},
#line 2059 "data/html_entities.gperf"
      {"NJcy", { 0xD0, 0x8A }, 2},
#line 1933 "data/html_entities.gperf"
      {"supsetneqq", { 0xE2, 0xAB, 0x8C }, 3},
#line 213 "data/html_entities.gperf"
      {"ovbar", { 0xE2, 0x8C, 0xBD }, 3},
#line 1875 "data/html_entities.gperf"
      {"iiota", { 0xE2, 0x84, 0xA9 }, 3},
#line 1985 "data/html_entities.gperf"
      {"TScy", { 0xD0, 0xA6 }, 2},
#line 94 "data/html_entities.gperf"
      {"conint", { 0xE2, 0x88, 0xAE }, 3},
#line 1887 "data/html_entities.gperf"
      {"Gamma", { 0xCE, 0x93 }, 2},
#line 121 "data/html_entities.gperf"
      {"boxVl", { 0xE2, 0x95, 0xA2 }, 3},
#line 1071 "data/html_entities.gperf"
      {"cent", { 0xC2, 0xA2 }, 2},
#line 280 "data/html_entities.gperf"
      {"supplus", { 0xE2, 0xAB, 0x80 }, 3},
#line 2129 "data/html_entities.gperf"
      {"xfr", { 0xF0, 0x9D, 0x94, 0xB5 }, 4},
#line 901 "data/html_entities.gperf"
      {"fllig", { 0xEF, 0xAC, 0x82 }, 3},
#line 1237 "data/html_entities.gperf"
      {"andslope", { 0xE2, 0xA9, 0x98 }, 3},
#line 764 "data/html_entities.gperf"
      {"dzcy", { 0xD1, 0x9F }, 2},
#line 1663 "data/html_entities.gperf"
      {"cwint", { 0xE2, 0x88, 0xB1 }, 3},
#line 2029 "data/html_entities.gperf"
      {"YIcy", { 0xD0, 0x87 }, 2},
#line 480 "data/html_entities.gperf"
      {"supE", { 0xE2, 0xAB, 0x86 }, 3},
#line 882 "data/html_entities.gperf"
      {"djcy", { 0xD1, 0x92 }, 2},
#line 404 "data/html_entities.gperf"
      {"Bumpeq", { 0xE2, 0x89, 0x8E }, 3},
#line 223 "data/html_entities.gperf"
      {"bumpE", { 0xE2, 0xAA, 0xAE }, 3},
#line 705 "data/html_entities.gperf"
      {"origof", { 0xE2, 0x8A, 0xB6 }, 3},
#line 1128 "data/html_entities.gperf"
      {"DZcy", { 0xD0, 0x8F }, 2},
#line 731 "data/html_entities.gperf"
      {"DownBreve", { 0xCC, 0x91 }, 2},
#line 1295 "data/html_entities.gperf"
      {"cwconint", { 0xE2, 0x88, 0xB2 }, 3},
#line 457 "data/html_entities.gperf"
      {"cirfnint", { 0xE2, 0xA8, 0x90 }, 3},
#line 1067 "data/html_entities.gperf"
      {"YUcy", { 0xD0, 0xAE }, 2},
#line 371 "data/html_entities.gperf"
      {"demptyv", { 0xE2, 0xA6, 0xB1 }, 3},
#line 823 "data/html_entities.gperf"
      {"OverParenthesis", { 0xE2, 0x8F, 0x9C }, 3},
#line 1851 "data/html_entities.gperf"
      {"UpTeeArrow", { 0xE2, 0x86, 0xA5 }, 3},
#line 1779 "data/html_entities.gperf"
      {"capand", { 0xE2, 0xA9, 0x84 }, 3},
#line 909 "data/html_entities.gperf"
      {"sfrown", { 0xE2, 0x8C, 0xA2 }, 3},
#line 1012 "data/html_entities.gperf"
      {"AElig", { 0xC3, 0x86 }, 2},
#line 1641 "data/html_entities.gperf"
      {"asymp", { 0xE2, 0x89, 0x88 }, 3},
#line 1756 "data/html_entities.gperf"
      {"IJlig", { 0xC4, 0xB2 }, 2},
#line 701 "data/html_entities.gperf"
      {"gt", { 0x3E }, 1},
#line 347 "data/html_entities.gperf"
      {"xnis", { 0xE2, 0x8B, 0xBB }, 3},
#line 543 "data/html_entities.gperf"
      {"leftleftarrows", { 0xE2, 0x87, 0x87 }, 3},
#line 627 "data/html_entities.gperf"
      {"integers", { 0xE2, 0x84, 0xA4 }, 3},
#line 1446 "data/html_entities.gperf"
      {"DScy", { 0xD0, 0x85 }, 2},
#line 617 "data/html_entities.gperf"
      {"tritime", { 0xE2, 0xA8, 0xBB }, 3},
#line 238 "data/html_entities.gperf"
      {"ogt", { 0xE2, 0xA7, 0x81 }, 3},
#line 313 "data/html_entities.gperf"
      {"orderof", { 0xE2, 0x84, 0xB4 }, 3},
#line 2058 "data/html_entities.gperf"
      {"oplus", { 0xE2, 0x8A, 0x95 }, 3},
#line 2088 "data/html_entities.gperf"
      {"succeq", { 0xE2, 0xAA, 0xB0 }, 3},
#line 1686 "data/html_entities.gperf"
      {"ReverseUpEquilibrium", { 0xE2, 0xA5, 0xAF }, 3},
#line 1136 "data/html_entities.gperf"
      {"ijlig", { 0xC4, 0xB3 }, 2},
#line 840 "data/html_entities.gperf"
      {"Gt", { 0xE2, 0x89, 0xAB }, 3},
#line 1782 "data/html_entities.gperf"
      {"NonBreakingSpace", { 0xC2, 0xA0 }, 2},
#line 134 "data/html_entities.gperf"
      {"gsim", { 0xE2, 0x89, 0xB3 }, 3},
#line 519 "data/html_entities.gperf"
      {"LeftDoubleBracket", { 0xE2, 0x9F, 0xA6 }, 3},
#line 1479 "data/html_entities.gperf"
      {"gtdot", { 0xE2, 0x8B, 0x97 }, 3},
#line 241 "data/html_entities.gperf"
      {"ndash", { 0xE2, 0x80, 0x93 }, 3},
#line 1453 "data/html_entities.gperf"
      {"gsiml", { 0xE2, 0xAA, 0x90 }, 3},
#line 1964 "data/html_entities.gperf"
      {"acd", { 0xE2, 0x88, 0xBF }, 3},
#line 437 "data/html_entities.gperf"
      {"nVdash", { 0xE2, 0x8A, 0xAE }, 3},
#line 825 "data/html_entities.gperf"
      {"DJcy", { 0xD0, 0x82 }, 2},
#line 853 "data/html_entities.gperf"
      {"Vdash", { 0xE2, 0x8A, 0xA9 }, 3},
#line 1669 "data/html_entities.gperf"
      {"andd", { 0xE2, 0xA9, 0x9C }, 3},
#line 1567 "data/html_entities.gperf"
      {"gescc", { 0xE2, 0xAA, 0xA9 }, 3},
#line 1582 "data/html_entities.gperf"
      {"gdot", { 0xC4, 0xA1 }, 2},
#line 1970 "data/html_entities.gperf"
      {"duhar", { 0xE2, 0xA5, 0xAF }, 3},
#line 2128 "data/html_entities.gperf"
      {"xcap", { 0xE2, 0x8B, 0x82 }, 3},
#line 224 "data/html_entities.gperf"
      {"Succeeds", { 0xE2, 0x89, 0xBB }, 3},
#line 1760 "data/html_entities.gperf"
      {"ContourIntegral", { 0xE2, 0x88, 0xAE }, 3},
#line 1969 "data/html_entities.gperf"
      {"drbkarow", { 0xE2, 0xA4, 0x90 }, 3},
#line 425 "data/html_entities.gperf"
      {"ubrcy", { 0xD1, 0x9E }, 2},
#line 1037 "data/html_entities.gperf"
      {"triangle", { 0xE2, 0x96, 0xB5 }, 3},
#line 1672 "data/html_entities.gperf"
      {"vdash", { 0xE2, 0x8A, 0xA2 }, 3},
#line 196 "data/html_entities.gperf"
      {"Gdot", { 0xC4, 0xA0 }, 2},
#line 112 "data/html_entities.gperf"
      {"rtimes", { 0xE2, 0x8B, 0x8A }, 3},
#line 261 "data/html_entities.gperf"
      {"ltimes", { 0xE2, 0x8B, 0x89 }, 3},
#line 1708 "data/html_entities.gperf"
      {"nrarrc", { 0xE2, 0xA4, 0xB3, 0xCC, 0xB8 }, 5},
#line 1062 "data/html_entities.gperf"
      {"DownArrow", { 0xE2, 0x86, 0x93 }, 3},
#line 53 "data/html_entities.gperf"
      {"iecy", { 0xD0, 0xB5 }, 2},
#line 793 "data/html_entities.gperf"
      {"succcurlyeq", { 0xE2, 0x89, 0xBD }, 3},
#line 1994 "data/html_entities.gperf"
      {"omid", { 0xE2, 0xA6, 0xB6 }, 3},
#line 1677 "data/html_entities.gperf"
      {"gesdotol", { 0xE2, 0xAA, 0x84 }, 3},
#line 374 "data/html_entities.gperf"
      {"delta", { 0xCE, 0xB4 }, 2},
#line 1693 "data/html_entities.gperf"
      {"kscr", { 0xF0, 0x9D, 0x93, 0x80 }, 4},
#line 1586 "data/html_entities.gperf"
      {"triangleleft", { 0xE2, 0x97, 0x83 }, 3},
#line 308 "data/html_entities.gperf"
      {"SucceedsSlantEqual", { 0xE2, 0x89, 0xBD }, 3},
#line 271 "data/html_entities.gperf"
      {"rtrif", { 0xE2, 0x96, 0xB8 }, 3},
#line 923 "data/html_entities.gperf"
      {"ltrif", { 0xE2, 0x97, 0x82 }, 3},
#line 1050 "data/html_entities.gperf"
      {"xcup", { 0xE2, 0x8B, 0x83 }, 3},
#line 1673 "data/html_entities.gperf"
      {"utrif", { 0xE2, 0x96, 0xB4 }, 3},
#line 650 "data/html_entities.gperf"
      {"Delta", { 0xCE, 0x94 }, 2},
#line 1435 "data/html_entities.gperf"
      {"starf", { 0xE2, 0x98, 0x85 }, 3},
#line 872 "data/html_entities.gperf"
      {"gbreve", { 0xC4, 0x9F }, 2},
#line 1403 "data/html_entities.gperf"
      {"boxHD", { 0xE2, 0x95, 0xA6 }, 3},
#line 464 "data/html_entities.gperf"
      {"egrave", { 0xC3, 0xA8 }, 2},
#line 1581 "data/html_entities.gperf"
      {"quot", { 0x22 }, 1},
#line 68 "data/html_entities.gperf"
      {"nprec", { 0xE2, 0x8A, 0x80 }, 3},
#line 2109 "data/html_entities.gperf"
      {"ugrave", { 0xC3, 0xB9 }, 2},
#line 242 "data/html_entities.gperf"
      {"euro", { 0xE2, 0x82, 0xAC }, 3},
#line 1391 "data/html_entities.gperf"
      {"ring", { 0xCB, 0x9A }, 2},
#line 225 "data/html_entities.gperf"
      {"euml", { 0xC3, 0xAB }, 2},
#line 724 "data/html_entities.gperf"
      {"andand", { 0xE2, 0xA9, 0x95 }, 3},
#line 203 "data/html_entities.gperf"
      {"uuml", { 0xC3, 0xBC }, 2},
#line 586 "data/html_entities.gperf"
      {"Gbreve", { 0xC4, 0x9E }, 2},
#line 1736 "data/html_entities.gperf"
      {"supnE", { 0xE2, 0xAB, 0x8C }, 3},
#line 209 "data/html_entities.gperf"
      {"MinusPlus", { 0xE2, 0x88, 0x93 }, 3},
#line 878 "data/html_entities.gperf"
      {"dashv", { 0xE2, 0x8A, 0xA3 }, 3},
#line 772 "data/html_entities.gperf"
      {"Poincareplane", { 0xE2, 0x84, 0x8C }, 3},
#line 1445 "data/html_entities.gperf"
      {"mumap", { 0xE2, 0x8A, 0xB8 }, 3},
#line 559 "data/html_entities.gperf"
      {"Dashv", { 0xE2, 0xAB, 0xA4 }, 3},
#line 728 "data/html_entities.gperf"
      {"ogon", { 0xCB, 0x9B }, 2},
#line 1272 "data/html_entities.gperf"
      {"sext", { 0xE2, 0x9C, 0xB6 }, 3},
#line 1883 "data/html_entities.gperf"
      {"angrt", { 0xE2, 0x88, 0x9F }, 3},
#line 1164 "data/html_entities.gperf"
      {"ntriangleleft", { 0xE2, 0x8B, 0xAA }, 3},
#line 1219 "data/html_entities.gperf"
      {"triangleq", { 0xE2, 0x89, 0x9C }, 3},
#line 835 "data/html_entities.gperf"
      {"capbrcup", { 0xE2, 0xA9, 0x89 }, 3},
#line 1320 "data/html_entities.gperf"
      {"hookleftarrow", { 0xE2, 0x86, 0xA9 }, 3},
#line 629 "data/html_entities.gperf"
      {"asympeq", { 0xE2, 0x89, 0x8D }, 3},
#line 333 "data/html_entities.gperf"
      {"Igrave", { 0xC3, 0x8C }, 2},
#line 431 "data/html_entities.gperf"
      {"angzarr", { 0xE2, 0x8D, 0xBC }, 3},
#line 827 "data/html_entities.gperf"
      {"nLeftarrow", { 0xE2, 0x87, 0x8D }, 3},
#line 1420 "data/html_entities.gperf"
      {"Cup", { 0xE2, 0x8B, 0x93 }, 3},
#line 547 "data/html_entities.gperf"
      {"imagpart", { 0xE2, 0x84, 0x91 }, 3},
#line 415 "data/html_entities.gperf"
      {"gimel", { 0xE2, 0x84, 0xB7 }, 3},
#line 1291 "data/html_entities.gperf"
      {"Iuml", { 0xC3, 0x8F }, 2},
#line 1503 "data/html_entities.gperf"
      {"LeftTeeArrow", { 0xE2, 0x86, 0xA4 }, 3},
#line 124 "data/html_entities.gperf"
      {"Ubrcy", { 0xD0, 0x8E }, 2},
#line 1084 "data/html_entities.gperf"
      {"trianglelefteq", { 0xE2, 0x8A, 0xB4 }, 3},
#line 1643 "data/html_entities.gperf"
      {"yscr", { 0xF0, 0x9D, 0x93, 0x8E }, 4},
#line 947 "data/html_entities.gperf"
      {"awint", { 0xE2, 0xA8, 0x91 }, 3},
#line 1066 "data/html_entities.gperf"
      {"Agrave", { 0xC3, 0x80 }, 2},
#line 187 "data/html_entities.gperf"
      {"zhcy", { 0xD0, 0xB6 }, 2},
#line 1820 "data/html_entities.gperf"
      {"angst", { 0xC3, 0x85 }, 2},
#line 1371 "data/html_entities.gperf"
      {"nleftarrow", { 0xE2, 0x86, 0x9A }, 3},
#line 420 "data/html_entities.gperf"
      {"YAcy", { 0xD0, 0xAF }, 2},
#line 300 "data/html_entities.gperf"
      {"Auml", { 0xC3, 0x84 }, 2},
#line 2075 "data/html_entities.gperf"
      {"awconint", { 0xE2, 0x88, 0xB3 }, 3},
#line 2010 "data/html_entities.gperf"
      {"ThinSpace", { 0xE2, 0x80, 0x89 }, 3},
#line 1190 "data/html_entities.gperf"
      {"quaternions", { 0xE2, 0x84, 0x8D }, 3},
#line 1721 "data/html_entities.gperf"
      {"weierp", { 0xE2, 0x84, 0x98 }, 3},
#line 583 "data/html_entities.gperf"
      {"iexcl", { 0xC2, 0xA1 }, 2},
#line 808 "data/html_entities.gperf"
      {"rcedil", { 0xC5, 0x97 }, 2},
#line 1989 "data/html_entities.gperf"
      {"tcedil", { 0xC5, 0xA3 }, 2},
#line 1147 "data/html_entities.gperf"
      {"lcedil", { 0xC4, 0xBC }, 2},
#line 527 "data/html_entities.gperf"
      {"scedil", { 0xC5, 0x9F }, 2},
#line 137 "data/html_entities.gperf"
      {"eqcirc", { 0xE2, 0x89, 0x96 }, 3},
#line 1833 "data/html_entities.gperf"
      {"ncedil", { 0xC5, 0x86 }, 2},
#line 489 "data/html_entities.gperf"
      {"gtcir", { 0xE2, 0xA9, 0xBA }, 3},
#line 1432 "data/html_entities.gperf"
      {"rsquo", { 0xE2, 0x80, 0x99 }, 3},
#line 458 "data/html_entities.gperf"
      {"cire", { 0xE2, 0x89, 0x97 }, 3},
#line 56 "data/html_entities.gperf"
      {"lsquo", { 0xE2, 0x80, 0x98 }, 3},
#line 662 "data/html_entities.gperf"
      {"jmath", { 0xC8, 0xB7 }, 2},
#line 1740 "data/html_entities.gperf"
      {"Ugrave", { 0xC3, 0x99 }, 2},
#line 623 "data/html_entities.gperf"
      {"Yuml", { 0xC5, 0xB8 }, 2},
#line 1328 "data/html_entities.gperf"
      {"TSHcy", { 0xD0, 0x8B }, 2},
#line 703 "data/html_entities.gperf"
      {"nequiv", { 0xE2, 0x89, 0xA2 }, 3},
#line 1156 "data/html_entities.gperf"
      {"centerdot", { 0xC2, 0xB7 }, 2},
#line 2119 "data/html_entities.gperf"
      {"angrtvb", { 0xE2, 0x8A, 0xBE }, 3},
#line 330 "data/html_entities.gperf"
      {"gtrarr", { 0xE2, 0xA5, 0xB8 }, 3},
#line 1973 "data/html_entities.gperf"
      {"Scedil", { 0xC5, 0x9E }, 2},
#line 2113 "data/html_entities.gperf"
      {"filig", { 0xEF, 0xAC, 0x81 }, 3},
#line 348 "data/html_entities.gperf"
      {"GreaterSlantEqual", { 0xE2, 0xA9, 0xBE }, 3},
#line 1545 "data/html_entities.gperf"
      {"Uuml", { 0xC3, 0x9C }, 2},
#line 361 "data/html_entities.gperf"
      {"gacute", { 0xC7, 0xB5 }, 2},
#line 1100 "data/html_entities.gperf"
      {"LongLeftArrow", { 0xE2, 0x9F, 0xB5 }, 3},
#line 959 "data/html_entities.gperf"
      {"suplarr", { 0xE2, 0xA5, 0xBB }, 3},
#line 1732 "data/html_entities.gperf"
      {"nvge", { 0xE2, 0x89, 0xA5, 0xE2, 0x83, 0x92 }, 6},
#line 80 "data/html_entities.gperf"
      {"ntrianglelefteq", { 0xE2, 0x8B, 0xAC }, 3},
#line 1718 "data/html_entities.gperf"
      {"tscy", { 0xD1, 0x86 }, 2},
#line 1099 "data/html_entities.gperf"
      {"NotTildeEqual", { 0xE2, 0x89, 0x84 }, 3},
#line 95 "data/html_entities.gperf"
      {"Lleftarrow", { 0xE2, 0x87, 0x9A }, 3},
#line 326 "data/html_entities.gperf"
      {"igrave", { 0xC3, 0xAC }, 2},
#line 1046 "data/html_entities.gperf"
      {"yen", { 0xC2, 0xA5 }, 2},
#line 1601 "data/html_entities.gperf"
      {"Kcedil", { 0xC4, 0xB6 }, 2},
#line 1486 "data/html_entities.gperf"
      {"kfr", { 0xF0, 0x9D, 0x94, 0xA8 }, 4},
#line 1212 "data/html_entities.gperf"
      {"iuml", { 0xC3, 0xAF }, 2},
#line 1361 "data/html_entities.gperf"
      {"acE", { 0xE2, 0x88, 0xBE, 0xCC, 0xB3 }, 5},
#line 1728 "data/html_entities.gperf"
      {"dtrif", { 0xE2, 0x96, 0xBE }, 3},
#line 1845 "data/html_entities.gperf"
      {"sccue", { 0xE2, 0x89, 0xBD }, 3},
#line 1451 "data/html_entities.gperf"
      {"comma", { 0x2C }, 1},
#line 504 "data/html_entities.gperf"
      {"Lcedil", { 0xC4, 0xBB }, 2},
#line 988 "data/html_entities.gperf"
      {"Rcedil", { 0xC5, 0x96 }, 2},
#line 2005 "data/html_entities.gperf"
      {"puncsp", { 0xE2, 0x80, 0x88 }, 3},
#line 1296 "data/html_entities.gperf"
      {"Ncedil", { 0xC5, 0x85 }, 2},
#line 488 "data/html_entities.gperf"
      {"DownArrowUpArrow", { 0xE2, 0x87, 0xB5 }, 3},
#line 611 "data/html_entities.gperf"
      {"LessFullEqual", { 0xE2, 0x89, 0xA6 }, 3},
#line 1267 "data/html_entities.gperf"
      {"LeftTriangleBar", { 0xE2, 0xA7, 0x8F }, 3},
#line 293 "data/html_entities.gperf"
      {"LeftTriangle", { 0xE2, 0x8A, 0xB2 }, 3},
#line 337 "data/html_entities.gperf"
      {"LeftTriangleEqual", { 0xE2, 0x8A, 0xB4 }, 3},
#line 469 "data/html_entities.gperf"
      {"cirmid", { 0xE2, 0xAB, 0xAF }, 3},
#line 1660 "data/html_entities.gperf"
      {"lg", { 0xE2, 0x89, 0xB6 }, 3},
#line 1378 "data/html_entities.gperf"
      {"eg", { 0xE2, 0xAA, 0x9A }, 3},
#line 584 "data/html_entities.gperf"
      {"ccupssm", { 0xE2, 0xA9, 0x90 }, 3},
#line 253 "data/html_entities.gperf"
      {"fallingdotseq", { 0xE2, 0x89, 0x92 }, 3},
#line 1335 "data/html_entities.gperf"
      {"minus", { 0xE2, 0x88, 0x92 }, 3},
#line 244 "data/html_entities.gperf"
      {"bigsqcup", { 0xE2, 0xA8, 0x86 }, 3},
#line 54 "data/html_entities.gperf"
      {"Tcedil", { 0xC5, 0xA2 }, 2},
#line 1197 "data/html_entities.gperf"
      {"mdash", { 0xE2, 0x80, 0x94 }, 3},
#line 1966 "data/html_entities.gperf"
      {"rdquor", { 0xE2, 0x80, 0x9D }, 3},
#line 905 "data/html_entities.gperf"
      {"ldquor", { 0xE2, 0x80, 0x9E }, 3},
#line 2106 "data/html_entities.gperf"
      {"CupCap", { 0xE2, 0x89, 0x8D }, 3},
#line 2017 "data/html_entities.gperf"
      {"minusb", { 0xE2, 0x8A, 0x9F }, 3},
#line 1211 "data/html_entities.gperf"
      {"nVDash", { 0xE2, 0x8A, 0xAF }, 3},
#line 1111 "data/html_entities.gperf"
      {"yfr", { 0xF0, 0x9D, 0x94, 0xB6 }, 4},
#line 1369 "data/html_entities.gperf"
      {"circ", { 0xCB, 0x86 }, 2},
#line 233 "data/html_entities.gperf"
      {"NotSucceeds", { 0xE2, 0x8A, 0x81 }, 3},
#line 863 "data/html_entities.gperf"
      {"gtlPar", { 0xE2, 0xA6, 0x95 }, 3},
#line 1096 "data/html_entities.gperf"
      {"LeftCeiling", { 0xE2, 0x8C, 0x88 }, 3},
#line 282 "data/html_entities.gperf"
      {"CHcy", { 0xD0, 0xA7 }, 2},
#line 632 "data/html_entities.gperf"
      {"longleftarrow", { 0xE2, 0x9F, 0xB5 }, 3},
#line 804 "data/html_entities.gperf"
      {"egsdot", { 0xE2, 0xAA, 0x98 }, 3},
#line 864 "data/html_entities.gperf"
      {"aleph", { 0xE2, 0x84, 0xB5 }, 3},
#line 40 "data/html_entities.gperf"
      {"thetasym", { 0xCF, 0x91 }, 2},
#line 809 "data/html_entities.gperf"
      {"ctdot", { 0xE2, 0x8B, 0xAF }, 3},
#line 1915 "data/html_entities.gperf"
      {"geqslant", { 0xE2, 0xA9, 0xBE }, 3},
#line 887 "data/html_entities.gperf"
      {"NotSucceedsSlantEqual", { 0xE2, 0x8B, 0xA1 }, 3},
#line 1990 "data/html_entities.gperf"
      {"angrtvbd", { 0xE2, 0xA6, 0x9D }, 3},
#line 1416 "data/html_entities.gperf"
      {"OElig", { 0xC5, 0x92 }, 2},
#line 1976 "data/html_entities.gperf"
      {"sqsub", { 0xE2, 0x8A, 0x8F }, 3},
#line 1324 "data/html_entities.gperf"
      {"sqsube", { 0xE2, 0x8A, 0x91 }, 3},
#line 1362 "data/html_entities.gperf"
      {"cdot", { 0xC4, 0x8B }, 2},
#line 1651 "data/html_entities.gperf"
      {"sqsubset", { 0xE2, 0x8A, 0x8F }, 3},
#line 534 "data/html_entities.gperf"
      {"LeftVector", { 0xE2, 0x86, 0xBC }, 3},
#line 31 "data/html_entities.gperf"
      {"SucceedsTilde", { 0xE2, 0x89, 0xBF }, 3},
#line 1809 "data/html_entities.gperf"
      {"EmptyVerySmallSquare", { 0xE2, 0x96, 0xAB }, 3},
#line 760 "data/html_entities.gperf"
      {"bull", { 0xE2, 0x80, 0xA2 }, 3},
#line 24 "data/html_entities.gperf"
      {"Egrave", { 0xC3, 0x88 }, 2},
#line 1499 "data/html_entities.gperf"
      {"dscy", { 0xD1, 0x95 }, 2},
#line 44 "data/html_entities.gperf"
      {"sdotb", { 0xE2, 0x8A, 0xA1 }, 3},
#line 1862 "data/html_entities.gperf"
      {"Euml", { 0xC3, 0x8B }, 2},
#line 1484 "data/html_entities.gperf"
      {"eth", { 0xC3, 0xB0 }, 2},
#line 783 "data/html_entities.gperf"
      {"vnsub", { 0xE2, 0x8A, 0x82, 0xE2, 0x83, 0x92 }, 6},
#line 174 "data/html_entities.gperf"
      {"phiv", { 0xCF, 0x95 }, 2},
#line 1101 "data/html_entities.gperf"
      {"nvdash", { 0xE2, 0x8A, 0xAC }, 3},
#line 306 "data/html_entities.gperf"
      {"acute", { 0xC2, 0xB4 }, 2},
#line 323 "data/html_entities.gperf"
      {"boxdr", { 0xE2, 0x94, 0x8C }, 3},
#line 1899 "data/html_entities.gperf"
      {"lozenge", { 0xE2, 0x97, 0x8A }, 3},
#line 307 "data/html_entities.gperf"
      {"boxminus", { 0xE2, 0x8A, 0x9F }, 3},
#line 47 "data/html_entities.gperf"
      {"Omega", { 0xCE, 0xA9 }, 2},
#line 1468 "data/html_entities.gperf"
      {"Vvdash", { 0xE2, 0x8A, 0xAA }, 3},
#line 1358 "data/html_entities.gperf"
      {"Longleftarrow", { 0xE2, 0x9F, 0xB8 }, 3},
#line 926 "data/html_entities.gperf"
      {"UnderBar", { 0x5F }, 1},
#line 1138 "data/html_entities.gperf"
      {"bowtie", { 0xE2, 0x8B, 0x88 }, 3},
#line 466 "data/html_entities.gperf"
      {"boxDr", { 0xE2, 0x95, 0x93 }, 3},
#line 1105 "data/html_entities.gperf"
      {"lambda", { 0xCE, 0xBB }, 2},
#line 1822 "data/html_entities.gperf"
      {"timesbar", { 0xE2, 0xA8, 0xB1 }, 3},
#line 1599 "data/html_entities.gperf"
      {"ncongdot", { 0xE2, 0xA9, 0xAD, 0xCC, 0xB8 }, 5},
#line 613 "data/html_entities.gperf"
      {"OverBar", { 0xE2, 0x80, 0xBE }, 3},
#line 1896 "data/html_entities.gperf"
      {"scnsim", { 0xE2, 0x8B, 0xA9 }, 3},
#line 265 "data/html_entities.gperf"
      {"OverBrace", { 0xE2, 0x8F, 0x9E }, 3},
#line 2035 "data/html_entities.gperf"
      {"sigma", { 0xCF, 0x83 }, 2},
#line 2047 "data/html_entities.gperf"
      {"OverBracket", { 0xE2, 0x8E, 0xB4 }, 3},
#line 1670 "data/html_entities.gperf"
      {"NegativeThinSpace", { 0xE2, 0x80, 0x8B }, 3},
#line 471 "data/html_entities.gperf"
      {"NotSucceedsTilde", { 0xE2, 0x89, 0xBF, 0xCC, 0xB8 }, 5},
#line 372 "data/html_entities.gperf"
      {"LeftDownVector", { 0xE2, 0x87, 0x83 }, 3},
#line 21 "data/html_entities.gperf"
      {"VeryThinSpace", { 0xE2, 0x80, 0x8A }, 3},
#line 78 "data/html_entities.gperf"
      {"LeftDownVectorBar", { 0xE2, 0xA5, 0x99 }, 3},
#line 1986 "data/html_entities.gperf"
      {"rdca", { 0xE2, 0xA4, 0xB7 }, 3},
#line 861 "data/html_entities.gperf"
      {"ldca", { 0xE2, 0xA4, 0xB6 }, 3},
#line 1886 "data/html_entities.gperf"
      {"bullet", { 0xE2, 0x80, 0xA2 }, 3},
#line 1611 "data/html_entities.gperf"
      {"DownTeeArrow", { 0xE2, 0x86, 0xA7 }, 3},
#line 1753 "data/html_entities.gperf"
      {"Sigma", { 0xCE, 0xA3 }, 2},
#line 1418 "data/html_entities.gperf"
      {"PartialD", { 0xE2, 0x88, 0x82 }, 3},
#line 622 "data/html_entities.gperf"
      {"LeftDownTeeVector", { 0xE2, 0xA5, 0xA1 }, 3},
#line 914 "data/html_entities.gperf"
      {"bigstar", { 0xE2, 0x98, 0x85 }, 3},
#line 767 "data/html_entities.gperf"
      {"leftthreetimes", { 0xE2, 0x8B, 0x8B }, 3},
#line 273 "data/html_entities.gperf"
      {"minusdu", { 0xE2, 0xA8, 0xAA }, 3},
#line 892 "data/html_entities.gperf"
      {"boxdR", { 0xE2, 0x95, 0x92 }, 3},
#line 786 "data/html_entities.gperf"
      {"Backslash", { 0xE2, 0x88, 0x96 }, 3},
#line 549 "data/html_entities.gperf"
      {"uring", { 0xC5, 0xAF }, 2},
#line 176 "data/html_entities.gperf"
      {"InvisibleComma", { 0xE2, 0x81, 0xA3 }, 3},
#line 99 "data/html_entities.gperf"
      {"telrec", { 0xE2, 0x8C, 0x95 }, 3},
#line 816 "data/html_entities.gperf"
      {"grave", { 0x60 }, 1},
#line 175 "data/html_entities.gperf"
      {"Lambda", { 0xCE, 0x9B }, 2},
#line 1466 "data/html_entities.gperf"
      {"bigwedge", { 0xE2, 0x8B, 0x80 }, 3},
#line 1965 "data/html_entities.gperf"
      {"angmsd", { 0xE2, 0x88, 0xA1 }, 3},
#line 1248 "data/html_entities.gperf"
      {"Otimes", { 0xE2, 0xA8, 0xB7 }, 3},
#line 159 "data/html_entities.gperf"
      {"succsim", { 0xE2, 0x89, 0xBF }, 3},
#line 2002 "data/html_entities.gperf"
      {"boxDR", { 0xE2, 0x95, 0x94 }, 3},
#line 2123 "data/html_entities.gperf"
      {"omega", { 0xCF, 0x89 }, 2},
#line 384 "data/html_entities.gperf"
      {"supdsub", { 0xE2, 0xAB, 0x98 }, 3},
#line 1116 "data/html_entities.gperf"
      {"succneqq", { 0xE2, 0xAA, 0xB6 }, 3},
#line 367 "data/html_entities.gperf"
      {"supdot", { 0xE2, 0xAA, 0xBE }, 3},
#line 41 "data/html_entities.gperf"
      {"LeftUpTeeVector", { 0xE2, 0xA5, 0xA0 }, 3},
#line 245 "data/html_entities.gperf"
      {"utilde", { 0xC5, 0xA9 }, 2},
#line 1423 "data/html_entities.gperf"
      {"ntilde", { 0xC3, 0xB1 }, 2},
#line 1236 "data/html_entities.gperf"
      {"leftrightsquigarrow", { 0xE2, 0x86, 0xAD }, 3},
#line 2065 "data/html_entities.gperf"
      {"Ograve", { 0xC3, 0x92 }, 2},
#line 1205 "data/html_entities.gperf"
      {"empty", { 0xE2, 0x88, 0x85 }, 3},
#line 1772 "data/html_entities.gperf"
      {"ncong", { 0xE2, 0x89, 0x87 }, 3},
#line 383 "data/html_entities.gperf"
      {"bcong", { 0xE2, 0x89, 0x8C }, 3},
#line 465 "data/html_entities.gperf"
      {"cacute", { 0xC4, 0x87 }, 2},
#line 1239 "data/html_entities.gperf"
      {"wreath", { 0xE2, 0x89, 0x80 }, 3},
#line 2114 "data/html_entities.gperf"
      {"boxdL", { 0xE2, 0x95, 0x95 }, 3},
#line 2019 "data/html_entities.gperf"
      {"Ouml", { 0xC3, 0x96 }, 2},
#line 780 "data/html_entities.gperf"
      {"eta", { 0xCE, 0xB7 }, 2},
#line 1912 "data/html_entities.gperf"
      {"sqsubseteq", { 0xE2, 0x8A, 0x91 }, 3},
#line 1741 "data/html_entities.gperf"
      {"oelig", { 0xC5, 0x93 }, 2},
#line 652 "data/html_entities.gperf"
      {"Aring", { 0xC3, 0x85 }, 2},
#line 1029 "data/html_entities.gperf"
      {"LeftFloor", { 0xE2, 0x8C, 0x8A }, 3},
#line 1115 "data/html_entities.gperf"
      {"boxDL", { 0xE2, 0x95, 0x97 }, 3},
#line 989 "data/html_entities.gperf"
      {"odash", { 0xE2, 0x8A, 0x9D }, 3},
#line 193 "data/html_entities.gperf"
      {"hellip", { 0xE2, 0x80, 0xA6 }, 3},
#line 839 "data/html_entities.gperf"
      {"ltcc", { 0xE2, 0xAA, 0xA6 }, 3},
#line 77 "data/html_entities.gperf"
      {"tshcy", { 0xD1, 0x9B }, 2},
#line 376 "data/html_entities.gperf"
      {"Itilde", { 0xC4, 0xA8 }, 2},
#line 1474 "data/html_entities.gperf"
      {"natural", { 0xE2, 0x99, 0xAE }, 3},
#line 1492 "data/html_entities.gperf"
      {"naturals", { 0xE2, 0x84, 0x95 }, 3},
#line 215 "data/html_entities.gperf"
      {"Uring", { 0xC5, 0xAE }, 2},
#line 1482 "data/html_entities.gperf"
      {"DownRightTeeVector", { 0xE2, 0xA5, 0x9F }, 3},
#line 192 "data/html_entities.gperf"
      {"Atilde", { 0xC3, 0x83 }, 2},
#line 89 "data/html_entities.gperf"
      {"LongRightArrow", { 0xE2, 0x9F, 0xB6 }, 3},
#line 774 "data/html_entities.gperf"
      {"Ntilde", { 0xC3, 0x91 }, 2},
#line 660 "data/html_entities.gperf"
      {"varnothing", { 0xE2, 0x88, 0x85 }, 3},
#line 750 "data/html_entities.gperf"
      {"DiacriticalGrave", { 0x60 }, 1},
#line 1275 "data/html_entities.gperf"
      {"pitchfork", { 0xE2, 0x8B, 0x94 }, 3},
#line 1303 "data/html_entities.gperf"
      {"otimes", { 0xE2, 0x8A, 0x97 }, 3},
#line 1270 "data/html_entities.gperf"
      {"notinvc", { 0xE2, 0x8B, 0xB6 }, 3},
#line 1790 "data/html_entities.gperf"
      {"gesdoto", { 0xE2, 0xAA, 0x82 }, 3},
#line 521 "data/html_entities.gperf"
      {"gjcy", { 0xD1, 0x93 }, 2},
#line 829 "data/html_entities.gperf"
      {"abreve", { 0xC4, 0x83 }, 2},
#line 299 "data/html_entities.gperf"
      {"scirc", { 0xC5, 0x9D }, 2},
#line 737 "data/html_entities.gperf"
      {"ecirc", { 0xC3, 0xAA }, 2},
#line 1249 "data/html_entities.gperf"
      {"ucirc", { 0xC3, 0xBB }, 2},
#line 1255 "data/html_entities.gperf"
      {"triangledown", { 0xE2, 0x96, 0xBF }, 3},
#line 1078 "data/html_entities.gperf"
      {"Utilde", { 0xC5, 0xA8 }, 2},
#line 19 "data/html_entities.gperf"
      {"NotSucceedsEqual", { 0xE2, 0xAA, 0xB0, 0xCC, 0xB8 }, 5},
#line 1865 "data/html_entities.gperf"
      {"ograve", { 0xC3, 0xB2 }, 2},
#line 1697 "data/html_entities.gperf"
      {"minusd", { 0xE2, 0x88, 0xB8 }, 3},
#line 1346 "data/html_entities.gperf"
      {"Jcirc", { 0xC4, 0xB4 }, 2},
#line 1729 "data/html_entities.gperf"
      {"gtrless", { 0xE2, 0x89, 0xB7 }, 3},
#line 574 "data/html_entities.gperf"
      {"Scirc", { 0xC5, 0x9C }, 2},
#line 354 "data/html_entities.gperf"
      {"ouml", { 0xC3, 0xB6 }, 2},
#line 2007 "data/html_entities.gperf"
      {"ExponentialE", { 0xE2, 0x85, 0x87 }, 3},
#line 2097 "data/html_entities.gperf"
      {"robrk", { 0xE2, 0x9F, 0xA7 }, 3},
#line 1562 "data/html_entities.gperf"
      {"lobrk", { 0xE2, 0x9F, 0xA6 }, 3},
#line 322 "data/html_entities.gperf"
      {"NewLine", { 0x0A }, 1},
#line 1744 "data/html_entities.gperf"
      {"Hcirc", { 0xC4, 0xA4 }, 2},
#line 1633 "data/html_entities.gperf"
      {"biguplus", { 0xE2, 0xA8, 0x84 }, 3},
#line 894 "data/html_entities.gperf"
      {"complexes", { 0xE2, 0x84, 0x82 }, 3},
#line 928 "data/html_entities.gperf"
      {"UpDownArrow", { 0xE2, 0x86, 0x95 }, 3},
#line 788 "data/html_entities.gperf"
      {"Wcirc", { 0xC5, 0xB4 }, 2},
#line 1950 "data/html_entities.gperf"
      {"itilde", { 0xC4, 0xA9 }, 2},
#line 502 "data/html_entities.gperf"
      {"gnapprox", { 0xE2, 0xAA, 0x8A }, 3},
#line 932 "data/html_entities.gperf"
      {"aogon", { 0xC4, 0x85 }, 2},
#line 1893 "data/html_entities.gperf"
      {"Icirc", { 0xC3, 0x8E }, 2},
#line 1298 "data/html_entities.gperf"
      {"hkswarow", { 0xE2, 0xA4, 0xA6 }, 3},
#line 1472 "data/html_entities.gperf"
      {"LeftRightArrow", { 0xE2, 0x86, 0x94 }, 3},
#line 727 "data/html_entities.gperf"
      {"Ccedil", { 0xC3, 0x87 }, 2},
#line 1549 "data/html_entities.gperf"
      {"boxdl", { 0xE2, 0x94, 0x90 }, 3},
#line 12 "data/html_entities.gperf"
      {"LeftArrowRightArrow", { 0xE2, 0x87, 0x86 }, 3},
#line 1317 "data/html_entities.gperf"
      {"CounterClockwiseContourIntegral", { 0xE2, 0x88, 0xB3 }, 3},
#line 453 "data/html_entities.gperf"
      {"nvDash", { 0xE2, 0x8A, 0xAD }, 3},
#line 1139 "data/html_entities.gperf"
      {"Acirc", { 0xC3, 0x82 }, 2},
#line 1213 "data/html_entities.gperf"
      {"xvee", { 0xE2, 0x8B, 0x81 }, 3},
#line 120 "data/html_entities.gperf"
      {"rmoustache", { 0xE2, 0x8E, 0xB1 }, 3},
#line 826 "data/html_entities.gperf"
      {"lmoustache", { 0xE2, 0x8E, 0xB0 }, 3},
#line 1516 "data/html_entities.gperf"
      {"rbbrk", { 0xE2, 0x9D, 0xB3 }, 3},
#line 1151 "data/html_entities.gperf"
      {"lbbrk", { 0xE2, 0x9D, 0xB2 }, 3},
#line 1488 "data/html_entities.gperf"
      {"beth", { 0xE2, 0x84, 0xB6 }, 3},
#line 1431 "data/html_entities.gperf"
      {"fflig", { 0xEF, 0xAC, 0x80 }, 3},
#line 1691 "data/html_entities.gperf"
      {"boxDl", { 0xE2, 0x95, 0x96 }, 3},
#line 852 "data/html_entities.gperf"
      {"harrw", { 0xE2, 0x86, 0xAD }, 3},
#line 881 "data/html_entities.gperf"
      {"GJcy", { 0xD0, 0x83 }, 2},
#line 1357 "data/html_entities.gperf"
      {"hyphen", { 0xE2, 0x80, 0x90 }, 3},
#line 1658 "data/html_entities.gperf"
      {"sub", { 0xE2, 0x8A, 0x82 }, 3},
#line 2022 "data/html_entities.gperf"
      {"supe", { 0xE2, 0x8A, 0x87 }, 3},
#line 1621 "data/html_entities.gperf"
      {"Ycirc", { 0xC5, 0xB6 }, 2},
#line 1142 "data/html_entities.gperf"
      {"dash", { 0xE2, 0x80, 0x90 }, 3},
#line 800 "data/html_entities.gperf"
      {"angle", { 0xE2, 0x88, 0xA0 }, 3},
#line 630 "data/html_entities.gperf"
      {"congdot", { 0xE2, 0xA9, 0xAD }, 3},
#line 1536 "data/html_entities.gperf"
      {"Ucirc", { 0xC3, 0x9B }, 2},
#line 848 "data/html_entities.gperf"
      {"Sub", { 0xE2, 0x8B, 0x90 }, 3},
#line 1109 "data/html_entities.gperf"
      {"circleddash", { 0xE2, 0x8A, 0x9D }, 3},
#line 676 "data/html_entities.gperf"
      {"aacute", { 0xC3, 0xA1 }, 2},
#line 2026 "data/html_entities.gperf"
      {"CloseCurlyQuote", { 0xE2, 0x80, 0x99 }, 3},
#line 37 "data/html_entities.gperf"
      {"check", { 0xE2, 0x9C, 0x93 }, 3},
#line 545 "data/html_entities.gperf"
      {"subrarr", { 0xE2, 0xA5, 0xB9 }, 3},
#line 1080 "data/html_entities.gperf"
      {"rcy", { 0xD1, 0x80 }, 2},
#line 1408 "data/html_entities.gperf"
      {"tcy", { 0xD1, 0x82 }, 2},
#line 1547 "data/html_entities.gperf"
      {"lcy", { 0xD0, 0xBB }, 2},
#line 1093 "data/html_entities.gperf"
      {"scy", { 0xD1, 0x81 }, 2},
#line 2042 "data/html_entities.gperf"
      {"ecy", { 0xD1, 0x8D }, 2},
#line 960 "data/html_entities.gperf"
      {"ucy", { 0xD1, 0x83 }, 2},
#line 1602 "data/html_entities.gperf"
      {"ncy", { 0xD0, 0xBD }, 2},
#line 161 "data/html_entities.gperf"
      {"Hacek", { 0xCB, 0x87 }, 2},
#line 1680 "data/html_entities.gperf"
      {"Pcy", { 0xD0, 0x9F }, 2},
#line 1997 "data/html_entities.gperf"
      {"bcy", { 0xD0, 0xB1 }, 2},
#line 599 "data/html_entities.gperf"
      {"Superset", { 0xE2, 0x8A, 0x83 }, 3},
#line 877 "data/html_entities.gperf"
      {"nabla", { 0xE2, 0x88, 0x87 }, 3},
#line 1710 "data/html_entities.gperf"
      {"Zcy", { 0xD0, 0x97 }, 2},
#line 1144 "data/html_entities.gperf"
      {"icirc", { 0xC3, 0xAE }, 2},
#line 1606 "data/html_entities.gperf"
      {"Vcy", { 0xD0, 0x92 }, 2},
#line 479 "data/html_entities.gperf"
      {"approxeq", { 0xE2, 0x89, 0x8A }, 3},
#line 264 "data/html_entities.gperf"
      {"Jcy", { 0xD0, 0x99 }, 2},
#line 1143 "data/html_entities.gperf"
      {"succnsim", { 0xE2, 0x8B, 0xA9 }, 3},
#line 2024 "data/html_entities.gperf"
      {"Scy", { 0xD0, 0xA1 }, 2},
#line 503 "data/html_entities.gperf"
      {"ltquest", { 0xE2, 0xA9, 0xBB }, 3},
#line 1014 "data/html_entities.gperf"
      {"cuepr", { 0xE2, 0x8B, 0x9E }, 3},
#line 1338 "data/html_entities.gperf"
      {"pcy", { 0xD0, 0xBF }, 2},
#line 182 "data/html_entities.gperf"
      {"dzigrarr", { 0xE2, 0x9F, 0xBF }, 3},
#line 236 "data/html_entities.gperf"
      {"vcy", { 0xD0, 0xB2 }, 2},
#line 1856 "data/html_entities.gperf"
      {"curren", { 0xC2, 0xA4 }, 2},
#line 1189 "data/html_entities.gperf"
      {"cupor", { 0xE2, 0xA9, 0x85 }, 3},
#line 460 "data/html_entities.gperf"
      {"Icy", { 0xD0, 0x98 }, 2},
#line 240 "data/html_entities.gperf"
      {"Kcy", { 0xD0, 0x9A }, 2},
#line 339 "data/html_entities.gperf"
      {"ntgl", { 0xE2, 0x89, 0xB9 }, 3},
#line 1659 "data/html_entities.gperf"
      {"NestedGreaterGreater", { 0xE2, 0x89, 0xAB }, 3},
#line 1564 "data/html_entities.gperf"
      {"fcy", { 0xD1, 0x84 }, 2},
#line 1963 "data/html_entities.gperf"
      {"ddagger", { 0xE2, 0x80, 0xA1 }, 3},
#line 73 "data/html_entities.gperf"
      {"submult", { 0xE2, 0xAB, 0x81 }, 3},
#line 876 "data/html_entities.gperf"
      {"apid", { 0xE2, 0x89, 0x8B }, 3},
#line 618 "data/html_entities.gperf"
      {"circledcirc", { 0xE2, 0x8A, 0x9A }, 3},
#line 656 "data/html_entities.gperf"
      {"cup", { 0xE2, 0x88, 0xAA }, 3},
#line 391 "data/html_entities.gperf"
      {"Lcy", { 0xD0, 0x9B }, 2},
#line 1454 "data/html_entities.gperf"
      {"Rcy", { 0xD0, 0xA0 }, 2},
#line 416 "data/html_entities.gperf"
      {"subsub", { 0xE2, 0xAB, 0x95 }, 3},
#line 452 "data/html_entities.gperf"
      {"Acy", { 0xD0, 0x90 }, 2},
#line 419 "data/html_entities.gperf"
      {"Ncy", { 0xD0, 0x9D }, 2},
#line 1900 "data/html_entities.gperf"
      {"subset", { 0xE2, 0x8A, 0x82 }, 3},
#line 1701 "data/html_entities.gperf"
      {"lsimg", { 0xE2, 0xAA, 0x8F }, 3},
#line 353 "data/html_entities.gperf"
      {"Mcy", { 0xD0, 0x9C }, 2},
#line 1905 "data/html_entities.gperf"
      {"cups", { 0xE2, 0x88, 0xAA, 0xEF, 0xB8, 0x80 }, 6},
#line 287 "data/html_entities.gperf"
      {"Eta", { 0xCE, 0x97 }, 2},
#line 776 "data/html_entities.gperf"
      {"rdquo", { 0xE2, 0x80, 0x9D }, 3},
#line 1188 "data/html_entities.gperf"
      {"ldquo", { 0xE2, 0x80, 0x9C }, 3},
#line 1881 "data/html_entities.gperf"
      {"DownLeftRightVector", { 0xE2, 0xA5, 0x90 }, 3},
#line 1207 "data/html_entities.gperf"
      {"Subset", { 0xE2, 0x8B, 0x90 }, 3},
#line 142 "data/html_entities.gperf"
      {"bdquo", { 0xE2, 0x80, 0x9E }, 3},
#line 157 "data/html_entities.gperf"
      {"Ycy", { 0xD0, 0xAB }, 2},
#line 411 "data/html_entities.gperf"
      {"Fcy", { 0xD0, 0xA4 }, 2},
#line 217 "data/html_entities.gperf"
      {"Ucy", { 0xD0, 0xA3 }, 2},
#line 267 "data/html_entities.gperf"
      {"copy", { 0xC2, 0xA9 }, 2},
#line 90 "data/html_entities.gperf"
      {"subne", { 0xE2, 0x8A, 0x8A }, 3},
#line 1584 "data/html_entities.gperf"
      {"Tcy", { 0xD0, 0xA2 }, 2},
#line 410 "data/html_entities.gperf"
      {"subsup", { 0xE2, 0xAB, 0x93 }, 3},
#line 637 "data/html_entities.gperf"
      {"zwj", { 0xE2, 0x80, 0x8D }, 3},
#line 1184 "data/html_entities.gperf"
      {"UnderBracket", { 0xE2, 0x8E, 0xB5 }, 3},
#line 1698 "data/html_entities.gperf"
      {"ImaginaryI", { 0xE2, 0x85, 0x88 }, 3},
#line 962 "data/html_entities.gperf"
      {"quatint", { 0xE2, 0xA8, 0x96 }, 3},
#line 1654 "data/html_entities.gperf"
      {"boxVh", { 0xE2, 0x95, 0xAB }, 3},
#line 1991 "data/html_entities.gperf"
      {"LongLeftRightArrow", { 0xE2, 0x9F, 0xB7 }, 3},
#line 2094 "data/html_entities.gperf"
      {"gtrdot", { 0xE2, 0x8B, 0x97 }, 3},
#line 105 "data/html_entities.gperf"
      {"icy", { 0xD0, 0xB8 }, 2},
#line 801 "data/html_entities.gperf"
      {"curarr", { 0xE2, 0x86, 0xB7 }, 3},
#line 751 "data/html_entities.gperf"
      {"ntriangleright", { 0xE2, 0x8B, 0xAB }, 3},
#line 1518 "data/html_entities.gperf"
      {"cudarrr", { 0xE2, 0xA4, 0xB5 }, 3},
#line 2001 "data/html_entities.gperf"
      {"Ecirc", { 0xC3, 0x8A }, 2},
#line 154 "data/html_entities.gperf"
      {"cudarrl", { 0xE2, 0xA4, 0xB8 }, 3},
#line 757 "data/html_entities.gperf"
      {"subseteq", { 0xE2, 0x8A, 0x86 }, 3},
#line 409 "data/html_entities.gperf"
      {"subseteqq", { 0xE2, 0xAB, 0x85 }, 3},
#line 1251 "data/html_entities.gperf"
      {"Bcy", { 0xD0, 0x91 }, 2},
#line 363 "data/html_entities.gperf"
      {"subsetneq", { 0xE2, 0x8A, 0x8A }, 3},
#line 1494 "data/html_entities.gperf"
      {"dcy", { 0xD0, 0xB4 }, 2},
#line 352 "data/html_entities.gperf"
      {"ngeqslant", { 0xE2, 0xA9, 0xBE, 0xCC, 0xB8 }, 5},
#line 815 "data/html_entities.gperf"
      {"notnivc", { 0xE2, 0x8B, 0xBD }, 3},
#line 1738 "data/html_entities.gperf"
      {"Dcy", { 0xD0, 0x94 }, 2},
#line 624 "data/html_entities.gperf"
      {"cupcap", { 0xE2, 0xA9, 0x86 }, 3},
#line 449 "data/html_entities.gperf"
      {"kappa", { 0xCE, 0xBA }, 2},
#line 385 "data/html_entities.gperf"
      {"ang", { 0xE2, 0x88, 0xA0 }, 3},
#line 1240 "data/html_entities.gperf"
      {"LowerLeftArrow", { 0xE2, 0x86, 0x99 }, 3},
#line 1794 "data/html_entities.gperf"
      {"succ", { 0xE2, 0x89, 0xBB }, 3},
#line 2030 "data/html_entities.gperf"
      {"chcy", { 0xD1, 0x87 }, 2},
#line 1620 "data/html_entities.gperf"
      {"andv", { 0xE2, 0xA9, 0x9A }, 3},
#line 399 "data/html_entities.gperf"
      {"HumpDownHump", { 0xE2, 0x89, 0x8E }, 3},
#line 1806 "data/html_entities.gperf"
      {"cupcup", { 0xE2, 0xA9, 0x8A }, 3},
#line 1048 "data/html_entities.gperf"
      {"Otilde", { 0xC3, 0x95 }, 2},
#line 616 "data/html_entities.gperf"
      {"cemptyv", { 0xE2, 0xA6, 0xB2 }, 3},
#line 1108 "data/html_entities.gperf"
      {"precapprox", { 0xE2, 0xAA, 0xB7 }, 3},
#line 1500 "data/html_entities.gperf"
      {"lessapprox", { 0xE2, 0xAA, 0x85 }, 3},
#line 748 "data/html_entities.gperf"
      {"DDotrahd", { 0xE2, 0xA4, 0x91 }, 3},
#line 1053 "data/html_entities.gperf"
      {"cong", { 0xE2, 0x89, 0x85 }, 3},
#line 434 "data/html_entities.gperf"
      {"ntrianglerighteq", { 0xE2, 0x8B, 0xAD }, 3},
#line 982 "data/html_entities.gperf"
      {"bigvee", { 0xE2, 0x8B, 0x81 }, 3},
#line 967 "data/html_entities.gperf"
      {"downdownarrows", { 0xE2, 0x87, 0x8A }, 3},
#line 1038 "data/html_entities.gperf"
      {"LeftTeeVector", { 0xE2, 0xA5, 0x9A }, 3},
#line 1723 "data/html_entities.gperf"
      {"ac", { 0xE2, 0x88, 0xBE }, 3},
#line 1783 "data/html_entities.gperf"
      {"subsetneqq", { 0xE2, 0xAB, 0x8B }, 3},
#line 1039 "data/html_entities.gperf"
      {"expectation", { 0xE2, 0x84, 0xB0 }, 3},
#line 834 "data/html_entities.gperf"
      {"LowerRightArrow", { 0xE2, 0x86, 0x98 }, 3},
#line 1569 "data/html_entities.gperf"
      {"notinva", { 0xE2, 0x88, 0x89 }, 3},
#line 510 "data/html_entities.gperf"
      {"rightrightarrows", { 0xE2, 0x87, 0x89 }, 3},
#line 494 "data/html_entities.gperf"
      {"RightAngleBracket", { 0xE2, 0x9F, 0xA9 }, 3},
#line 1548 "data/html_entities.gperf"
      {"supsim", { 0xE2, 0xAB, 0x88 }, 3},
#line 2073 "data/html_entities.gperf"
      {"longleftrightarrow", { 0xE2, 0x9F, 0xB7 }, 3},
#line 803 "data/html_entities.gperf"
      {"varsigma", { 0xCF, 0x82 }, 2},
#line 1919 "data/html_entities.gperf"
      {"subplus", { 0xE2, 0xAA, 0xBF }, 3},
#line 440 "data/html_entities.gperf"
      {"RightFloor", { 0xE2, 0x8C, 0x8B }, 3},
#line 1864 "data/html_entities.gperf"
      {"Alpha", { 0xCE, 0x91 }, 2},
#line 2132 "data/html_entities.gperf"
      {"mcy", { 0xD0, 0xBC }, 2},
#line 382 "data/html_entities.gperf"
      {"Gcedil", { 0xC4, 0xA2 }, 2},
#line 355 "data/html_entities.gperf"
      {"RightTee", { 0xE2, 0x8A, 0xA2 }, 3},
#line 377 "data/html_entities.gperf"
      {"subE", { 0xE2, 0xAB, 0x85 }, 3},
#line 303 "data/html_entities.gperf"
      {"Ecy", { 0xD0, 0xAD }, 2},
#line 579 "data/html_entities.gperf"
      {"Cayleys", { 0xE2, 0x84, 0xAD }, 3},
#line 661 "data/html_entities.gperf"
      {"bigtriangleup", { 0xE2, 0x96, 0xB3 }, 3},
#line 1027 "data/html_entities.gperf"
      {"wcirc", { 0xC5, 0xB5 }, 2},
#line 1573 "data/html_entities.gperf"
      {"RightTeeVector", { 0xE2, 0xA5, 0x9B }, 3},
#line 1622 "data/html_entities.gperf"
      {"RightTriangleBar", { 0xE2, 0xA7, 0x90 }, 3},
#line 1539 "data/html_entities.gperf"
      {"RightTriangle", { 0xE2, 0x8A, 0xB3 }, 3},
#line 1967 "data/html_entities.gperf"
      {"RightTriangleEqual", { 0xE2, 0x8A, 0xB5 }, 3},
#line 1995 "data/html_entities.gperf"
      {"Ocirc", { 0xC3, 0x94 }, 2},
#line 554 "data/html_entities.gperf"
      {"otilde", { 0xC3, 0xB5 }, 2},
#line 2016 "data/html_entities.gperf"
      {"ntlg", { 0xE2, 0x89, 0xB8 }, 3},
#line 495 "data/html_entities.gperf"
      {"boxtimes", { 0xE2, 0x8A, 0xA0 }, 3},
#line 658 "data/html_entities.gperf"
      {"RightUpTeeVector", { 0xE2, 0xA5, 0x9C }, 3},
#line 509 "data/html_entities.gperf"
      {"boxur", { 0xE2, 0x94, 0x94 }, 3},
#line 1944 "data/html_entities.gperf"
      {"Longleftrightarrow", { 0xE2, 0x9F, 0xBA }, 3},
#line 2052 "data/html_entities.gperf"
      {"glj", { 0xE2, 0xAA, 0xA4 }, 3},
#line 553 "data/html_entities.gperf"
      {"gg", { 0xE2, 0x89, 0xAB }, 3},
#line 1495 "data/html_entities.gperf"
      {"ldrdhar", { 0xE2, 0xA5, 0xA7 }, 3},
#line 1353 "data/html_entities.gperf"
      {"Ccirc", { 0xC4, 0x88 }, 2},
#line 104 "data/html_entities.gperf"
      {"gtreqless", { 0xE2, 0x8B, 0x9B }, 3},
#line 1363 "data/html_entities.gperf"
      {"zcy", { 0xD0, 0xB7 }, 2},
#line 655 "data/html_entities.gperf"
      {"Gg", { 0xE2, 0x8B, 0x99 }, 3},
#line 699 "data/html_entities.gperf"
      {"ocirc", { 0xC3, 0xB4 }, 2},
#line 2079 "data/html_entities.gperf"
      {"boxuR", { 0xE2, 0x95, 0x98 }, 3},
#line 924 "data/html_entities.gperf"
      {"Oslash", { 0xC3, 0x98 }, 2},
#line 1114 "data/html_entities.gperf"
      {"leftrightharpoons", { 0xE2, 0x87, 0x8B }, 3},
#line 427 "data/html_entities.gperf"
      {"cularr", { 0xE2, 0x86, 0xB6 }, 3},
#line 1176 "data/html_entities.gperf"
      {"lhblk", { 0xE2, 0x96, 0x84 }, 3},
#line 1124 "data/html_entities.gperf"
      {"uhblk", { 0xE2, 0x96, 0x80 }, 3},
#line 1640 "data/html_entities.gperf"
      {"subnE", { 0xE2, 0xAB, 0x8B }, 3},
#line 567 "data/html_entities.gperf"
      {"ange", { 0xE2, 0xA6, 0xA4 }, 3},
#line 432 "data/html_entities.gperf"
      {"Ocy", { 0xD0, 0x9E }, 2},
#line 1993 "data/html_entities.gperf"
      {"xdtri", { 0xE2, 0x96, 0xBD }, 3},
#line 1786 "data/html_entities.gperf"
      {"bigtriangledown", { 0xE2, 0x96, 0xBD }, 3},
#line 51 "data/html_entities.gperf"
      {"leftharpoonup", { 0xE2, 0x86, 0xBC }, 3},
#line 1126 "data/html_entities.gperf"
      {"gtreqqless", { 0xE2, 0xAA, 0x8C }, 3},
#line 321 "data/html_entities.gperf"
      {"boxuL", { 0xE2, 0x95, 0x9B }, 3},
#line 904 "data/html_entities.gperf"
      {"cularrp", { 0xE2, 0xA4, 0xBD }, 3},
#line 206 "data/html_entities.gperf"
      {"NegativeVeryThinSpace", { 0xE2, 0x80, 0x8B }, 3},
#line 1812 "data/html_entities.gperf"
      {"yacute", { 0xC3, 0xBD }, 2},
#line 740 "data/html_entities.gperf"
      {"oslash", { 0xC3, 0xB8 }, 2},
#line 1850 "data/html_entities.gperf"
      {"intlarhk", { 0xE2, 0xA8, 0x97 }, 3},
#line 1203 "data/html_entities.gperf"
      {"Integral", { 0xE2, 0x88, 0xAB }, 3},
#line 279 "data/html_entities.gperf"
      {"supedot", { 0xE2, 0xAB, 0x84 }, 3},
#line 1655 "data/html_entities.gperf"
      {"CloseCurlyDoubleQuote", { 0xE2, 0x80, 0x9D }, 3},
#line 117 "data/html_entities.gperf"
      {"triangleright", { 0xE2, 0x96, 0xB9 }, 3},
#line 43 "data/html_entities.gperf"
      {"ocy", { 0xD0, 0xBE }, 2},
#line 133 "data/html_entities.gperf"
      {"FilledVerySmallSquare", { 0xE2, 0x96, 0xAA }, 3},
#line 537 "data/html_entities.gperf"
      {"notniva", { 0xE2, 0x88, 0x8C }, 3},
#line 2009 "data/html_entities.gperf"
      {"leftharpoondown", { 0xE2, 0x86, 0xBD }, 3},
#line 1171 "data/html_entities.gperf"
      {"ccedil", { 0xC3, 0xA7 }, 2},
#line 506 "data/html_entities.gperf"
      {"Cedilla", { 0xC2, 0xB8 }, 2},
#line 1544 "data/html_entities.gperf"
      {"napprox", { 0xE2, 0x89, 0x89 }, 3},
#line 1034 "data/html_entities.gperf"
      {"LeftRightVector", { 0xE2, 0xA5, 0x8E }, 3},
#line 1920 "data/html_entities.gperf"
      {"UnderParenthesis", { 0xE2, 0x8F, 0x9D }, 3},
#line 846 "data/html_entities.gperf"
      {"boxul", { 0xE2, 0x94, 0x98 }, 3},
#line 2039 "data/html_entities.gperf"
      {"aelig", { 0xC3, 0xA6 }, 2},
#line 1926 "data/html_entities.gperf"
      {"trianglerighteq", { 0xE2, 0x8A, 0xB5 }, 3},
#line 290 "data/html_entities.gperf"
      {"hksearow", { 0xE2, 0xA4, 0xA5 }, 3},
#line 1517 "data/html_entities.gperf"
      {"daleth", { 0xE2, 0x84, 0xB8 }, 3},
#line 817 "data/html_entities.gperf"
      {"rdldhar", { 0xE2, 0xA5, 0xA9 }, 3},
#line 802 "data/html_entities.gperf"
      {"gtcc", { 0xE2, 0xAA, 0xA7 }, 3},
#line 1238 "data/html_entities.gperf"
      {"jcirc", { 0xC4, 0xB5 }, 2},
#line 1055 "data/html_entities.gperf"
      {"circlearrowright", { 0xE2, 0x86, 0xBB }, 3},
#line 1626 "data/html_entities.gperf"
      {"circlearrowleft", { 0xE2, 0x86, 0xBA }, 3},
#line 1742 "data/html_entities.gperf"
      {"gtrsim", { 0xE2, 0x89, 0xB3 }, 3},
#line 497 "data/html_entities.gperf"
      {"boxhu", { 0xE2, 0x94, 0xB4 }, 3},
#line 1525 "data/html_entities.gperf"
      {"xwedge", { 0xE2, 0x8B, 0x80 }, 3},
#line 902 "data/html_entities.gperf"
      {"rarrhk", { 0xE2, 0x86, 0xAA }, 3},
#line 1278 "data/html_entities.gperf"
      {"larrhk", { 0xE2, 0x86, 0xA9 }, 3},
#line 1163 "data/html_entities.gperf"
      {"intercal", { 0xE2, 0x8A, 0xBA }, 3},
#line 1590 "data/html_entities.gperf"
      {"gcirc", { 0xC4, 0x9D }, 2},
#line 576 "data/html_entities.gperf"
      {"boxvr", { 0xE2, 0x94, 0x9C }, 3},
#line 198 "data/html_entities.gperf"
      {"agrave", { 0xC3, 0xA0 }, 2},
#line 249 "data/html_entities.gperf"
      {"leftrightarrows", { 0xE2, 0x87, 0x86 }, 3},
#line 1279 "data/html_entities.gperf"
      {"auml", { 0xC3, 0xA4 }, 2},
#line 151 "data/html_entities.gperf"
      {"curarrm", { 0xE2, 0xA4, 0xBC }, 3},
#line 1866 "data/html_entities.gperf"
      {"Gcirc", { 0xC4, 0x9C }, 2},
#line 2077 "data/html_entities.gperf"
      {"RuleDelayed", { 0xE2, 0xA7, 0xB4 }, 3},
#line 2000 "data/html_entities.gperf"
      {"suphsub", { 0xE2, 0xAB, 0x97 }, 3},
#line 211 "data/html_entities.gperf"
      {"boxv", { 0xE2, 0x94, 0x82 }, 3},
#line 2066 "data/html_entities.gperf"
      {"boxhU", { 0xE2, 0x95, 0xA8 }, 3},
#line 1724 "data/html_entities.gperf"
      {"RightVector", { 0xE2, 0x87, 0x80 }, 3},
#line 1119 "data/html_entities.gperf"
      {"longmapsto", { 0xE2, 0x9F, 0xBC }, 3},
#line 414 "data/html_entities.gperf"
      {"SucceedsEqual", { 0xE2, 0xAA, 0xB0 }, 3},
#line 366 "data/html_entities.gperf"
      {"RightUpDownVector", { 0xE2, 0xA5, 0x8F }, 3},
#line 1452 "data/html_entities.gperf"
      {"downharpoonright", { 0xE2, 0x87, 0x82 }, 3},
#line 1587 "data/html_entities.gperf"
      {"downharpoonleft", { 0xE2, 0x87, 0x83 }, 3},
#line 1413 "data/html_entities.gperf"
      {"jcy", { 0xD0, 0xB9 }, 2},
#line 978 "data/html_entities.gperf"
      {"boxvH", { 0xE2, 0x95, 0xAA }, 3},
#line 23 "data/html_entities.gperf"
      {"boxvR", { 0xE2, 0x95, 0x9E }, 3},
#line 1210 "data/html_entities.gperf"
      {"boxhd", { 0xE2, 0x94, 0xAC }, 3},
#line 775 "data/html_entities.gperf"
      {"topfork", { 0xE2, 0xAB, 0x9A }, 3},
#line 2003 "data/html_entities.gperf"
      {"updownarrow", { 0xE2, 0x86, 0x95 }, 3},
#line 49 "data/html_entities.gperf"
      {"searhk", { 0xE2, 0xA4, 0xA5 }, 3},
#line 1336 "data/html_entities.gperf"
      {"amalg", { 0xE2, 0xA8, 0xBF }, 3},
#line 1572 "data/html_entities.gperf"
      {"gcy", { 0xD0, 0xB3 }, 2},
#line 400 "data/html_entities.gperf"
      {"khcy", { 0xD1, 0x85 }, 2},
#line 1175 "data/html_entities.gperf"
      {"nearhk", { 0xE2, 0xA4, 0xA4 }, 3},
#line 189 "data/html_entities.gperf"
      {"kjcy", { 0xD1, 0x9C }, 2},
#line 1722 "data/html_entities.gperf"
      {"mcomma", { 0xE2, 0xA8, 0xA9 }, 3},
#line 25 "data/html_entities.gperf"
      {"subdot", { 0xE2, 0xAA, 0xBD }, 3},
#line 1570 "data/html_entities.gperf"
      {"boxvL", { 0xE2, 0x95, 0xA1 }, 3},
#line 1077 "data/html_entities.gperf"
      {"hookrightarrow", { 0xE2, 0x86, 0xAA }, 3},
#line 633 "data/html_entities.gperf"
      {"planck", { 0xE2, 0x84, 0x8F }, 3},
#line 2107 "data/html_entities.gperf"
      {"NegativeThickSpace", { 0xE2, 0x80, 0x8B }, 3},
#line 490 "data/html_entities.gperf"
      {"gtquest", { 0xE2, 0xA9, 0xBC }, 3},
#line 386 "data/html_entities.gperf"
      {"Gcy", { 0xD0, 0x93 }, 2},
#line 1470 "data/html_entities.gperf"
      {"rdsh", { 0xE2, 0x86, 0xB3 }, 3},
#line 428 "data/html_entities.gperf"
      {"ldsh", { 0xE2, 0x86, 0xB2 }, 3},
#line 604 "data/html_entities.gperf"
      {"DownRightVector", { 0xE2, 0x87, 0x81 }, 3},
#line 1837 "data/html_entities.gperf"
      {"DownRightVectorBar", { 0xE2, 0xA5, 0x97 }, 3},
#line 1118 "data/html_entities.gperf"
      {"Updownarrow", { 0xE2, 0x87, 0x95 }, 3},
#line 15 "data/html_entities.gperf"
      {"RightVectorBar", { 0xE2, 0xA5, 0x93 }, 3},
#line 237 "data/html_entities.gperf"
      {"yacy", { 0xD1, 0x8F }, 2},
#line 388 "data/html_entities.gperf"
      {"cupdot", { 0xE2, 0x8A, 0x8D }, 3},
#line 1771 "data/html_entities.gperf"
      {"rbrack", { 0x5D }, 1},
#line 218 "data/html_entities.gperf"
      {"lbrack", { 0x5B }, 1},
#line 345 "data/html_entities.gperf"
      {"swarhk", { 0xE2, 0xA4, 0xA6 }, 3},
#line 2100 "data/html_entities.gperf"
      {"nwarhk", { 0xE2, 0xA4, 0xA3 }, 3},
#line 1493 "data/html_entities.gperf"
      {"hcirc", { 0xC4, 0xA5 }, 2},
#line 1307 "data/html_entities.gperf"
      {"curlyvee", { 0xE2, 0x8B, 0x8E }, 3},
#line 1198 "data/html_entities.gperf"
      {"sung", { 0xE2, 0x99, 0xAA }, 3},
#line 2089 "data/html_entities.gperf"
      {"angmsdae", { 0xE2, 0xA6, 0xAC }, 3},
#line 1749 "data/html_entities.gperf"
      {"angmsdab", { 0xE2, 0xA6, 0xA9 }, 3},
#line 975 "data/html_entities.gperf"
      {"hybull", { 0xE2, 0x81, 0x83 }, 3},
#line 1428 "data/html_entities.gperf"
      {"LeftAngleBracket", { 0xE2, 0x9F, 0xA8 }, 3},
#line 1848 "data/html_entities.gperf"
      {"alefsym", { 0xE2, 0x84, 0xB5 }, 3},
#line 2101 "data/html_entities.gperf"
      {"boxvl", { 0xE2, 0x94, 0xA4 }, 3},
#line 838 "data/html_entities.gperf"
      {"xuplus", { 0xE2, 0xA8, 0x84 }, 3},
#line 1958 "data/html_entities.gperf"
      {"numero", { 0xE2, 0x84, 0x96 }, 3},
#line 1914 "data/html_entities.gperf"
      {"LeftVectorBar", { 0xE2, 0xA5, 0x92 }, 3},
#line 777 "data/html_entities.gperf"
      {"VerticalLine", { 0x7C }, 1},
#line 254 "data/html_entities.gperf"
      {"tstrok", { 0xC5, 0xA7 }, 2},
#line 1009 "data/html_entities.gperf"
      {"lstrok", { 0xC5, 0x82 }, 2},
#line 422 "data/html_entities.gperf"
      {"angmsdaf", { 0xE2, 0xA6, 0xAD }, 3},
#line 188 "data/html_entities.gperf"
      {"nRightarrow", { 0xE2, 0x87, 0x8F }, 3},
#line 1826 "data/html_entities.gperf"
      {"RightDownTeeVector", { 0xE2, 0xA5, 0x9D }, 3},
#line 231 "data/html_entities.gperf"
      {"ffllig", { 0xEF, 0xAC, 0x84 }, 3},
#line 1085 "data/html_entities.gperf"
      {"ccirc", { 0xC4, 0x89 }, 2},
#line 76 "data/html_entities.gperf"
      {"Hstrok", { 0xC4, 0xA6 }, 2},
#line 1455 "data/html_entities.gperf"
      {"nrightarrow", { 0xE2, 0x86, 0x9B }, 3},
#line 922 "data/html_entities.gperf"
      {"sube", { 0xE2, 0x8A, 0x86 }, 3},
#line 663 "data/html_entities.gperf"
      {"hslash", { 0xE2, 0x84, 0x8F }, 3},
#line 1846 "data/html_entities.gperf"
      {"longrightarrow", { 0xE2, 0x9F, 0xB6 }, 3},
#line 158 "data/html_entities.gperf"
      {"Lstrok", { 0xC5, 0x81 }, 2},
#line 1390 "data/html_entities.gperf"
      {"gtrapprox", { 0xE2, 0xAA, 0x86 }, 3},
#line 381 "data/html_entities.gperf"
      {"RightDoubleBracket", { 0xE2, 0x9F, 0xA7 }, 3},
#line 350 "data/html_entities.gperf"
      {"boxhD", { 0xE2, 0x95, 0xA5 }, 3},
#line 2127 "data/html_entities.gperf"
      {"Rrightarrow", { 0xE2, 0x87, 0x9B }, 3},
#line 977 "data/html_entities.gperf"
      {"aring", { 0xC3, 0xA5 }, 2},
#line 921 "data/html_entities.gperf"
      {"Tstrok", { 0xC5, 0xA6 }, 2},
#line 794 "data/html_entities.gperf"
      {"RightArrow", { 0xE2, 0x86, 0x92 }, 3},
#line 1843 "data/html_entities.gperf"
      {"precnapprox", { 0xE2, 0xAA, 0xB9 }, 3},
#line 1911 "data/html_entities.gperf"
      {"Longrightarrow", { 0xE2, 0x9F, 0xB9 }, 3},
#line 114 "data/html_entities.gperf"
      {"angmsdad", { 0xE2, 0xA6, 0xAB }, 3},
#line 1948 "data/html_entities.gperf"
      {"RightArrowLeftArrow", { 0xE2, 0x87, 0x84 }, 3},
#line 16 "data/html_entities.gperf"
      {"atilde", { 0xC3, 0xA3 }, 2},
#line 696 "data/html_entities.gperf"
      {"leftrightarrow", { 0xE2, 0x86, 0x94 }, 3},
#line 2036 "data/html_entities.gperf"
      {"Jukcy", { 0xD0, 0x84 }, 2},
#line 1194 "data/html_entities.gperf"
      {"VerticalTilde", { 0xE2, 0x89, 0x80 }, 3},
#line 1201 "data/html_entities.gperf"
      {"dstrok", { 0xC4, 0x91 }, 2},
#line 541 "data/html_entities.gperf"
      {"Iukcy", { 0xD0, 0x86 }, 2},
#line 2041 "data/html_entities.gperf"
      {"Dstrok", { 0xC4, 0x90 }, 2},
#line 1412 "data/html_entities.gperf"
      {"SHCHcy", { 0xD0, 0xA9 }, 2},
#line 1954 "data/html_entities.gperf"
      {"yicy", { 0xD1, 0x97 }, 2},
#line 568 "data/html_entities.gperf"
      {"NotRightTriangleBar", { 0xE2, 0xA7, 0x90, 0xCC, 0xB8 }, 5},
#line 598 "data/html_entities.gperf"
      {"NotRightTriangle", { 0xE2, 0x8B, 0xAB }, 3},
#line 1876 "data/html_entities.gperf"
      {"NotRightTriangleEqual", { 0xE2, 0x8B, 0xAD }, 3},
#line 429 "data/html_entities.gperf"
      {"Leftrightarrow", { 0xE2, 0x87, 0x94 }, 3},
#line 1892 "data/html_entities.gperf"
      {"pertenk", { 0xE2, 0x80, 0xB1 }, 3},
#line 269 "data/html_entities.gperf"
      {"rightleftharpoons", { 0xE2, 0x87, 0x8C }, 3},
#line 1529 "data/html_entities.gperf"
      {"planckh", { 0xE2, 0x84, 0x8E }, 3},
#line 1767 "data/html_entities.gperf"
      {"otimesas", { 0xE2, 0xA8, 0xB6 }, 3},
#line 1594 "data/html_entities.gperf"
      {"kcedil", { 0xC4, 0xB7 }, 2},
#line 998 "data/html_entities.gperf"
      {"yuml", { 0xC3, 0xBF }, 2},
#line 1867 "data/html_entities.gperf"
      {"acirc", { 0xC3, 0xA2 }, 2},
#line 1784 "data/html_entities.gperf"
      {"thickapprox", { 0xE2, 0x89, 0x88 }, 3},
#line 131 "data/html_entities.gperf"
      {"odiv", { 0xE2, 0xA8, 0xB8 }, 3},
#line 668 "data/html_entities.gperf"
      {"xutri", { 0xE2, 0x96, 0xB3 }, 3},
#line 683 "data/html_entities.gperf"
      {"suphsol", { 0xE2, 0x9F, 0x89 }, 3},
#line 1972 "data/html_entities.gperf"
      {"iukcy", { 0xD1, 0x96 }, 2},
#line 709 "data/html_entities.gperf"
      {"RightTeeArrow", { 0xE2, 0x86, 0xA6 }, 3},
#line 1167 "data/html_entities.gperf"
      {"rightthreetimes", { 0xE2, 0x8B, 0x8C }, 3},
#line 1410 "data/html_entities.gperf"
      {"subsim", { 0xE2, 0xAB, 0x87 }, 3},
#line 2044 "data/html_entities.gperf"
      {"curlywedge", { 0xE2, 0x8B, 0x8F }, 3},
#line 1017 "data/html_entities.gperf"
      {"acy", { 0xD0, 0xB0 }, 2},
#line 601 "data/html_entities.gperf"
      {"Jsercy", { 0xD0, 0x88 }, 2},
#line 671 "data/html_entities.gperf"
      {"divonx", { 0xE2, 0x8B, 0x87 }, 3},
#line 738 "data/html_entities.gperf"
      {"xcirc", { 0xE2, 0x97, 0xAF }, 3},
#line 278 "data/html_entities.gperf"
      {"cuesc", { 0xE2, 0x8B, 0x9F }, 3},
#line 1592 "data/html_entities.gperf"
      {"approx", { 0xE2, 0x89, 0x88 }, 3},
#line 70 "data/html_entities.gperf"
      {"ggg", { 0xE2, 0x8B, 0x99 }, 3},
#line 1287 "data/html_entities.gperf"
      {"bigcirc", { 0xE2, 0x97, 0xAF }, 3},
#line 1015 "data/html_entities.gperf"
      {"rightsquigarrow", { 0xE2, 0x86, 0x9D }, 3},
#line 706 "data/html_entities.gperf"
      {"SupersetEqual", { 0xE2, 0x8A, 0x87 }, 3},
#line 667 "data/html_entities.gperf"
      {"rightleftarrows", { 0xE2, 0x87, 0x84 }, 3},
#line 358 "data/html_entities.gperf"
      {"straightepsilon", { 0xCF, 0xB5 }, 2},
#line 1383 "data/html_entities.gperf"
      {"ffilig", { 0xEF, 0xAC, 0x83 }, 3},
#line 669 "data/html_entities.gperf"
      {"cuvee", { 0xE2, 0x8B, 0x8E }, 3},
#line 1589 "data/html_entities.gperf"
      {"alpha", { 0xCE, 0xB1 }, 2},
#line 1471 "data/html_entities.gperf"
      {"subedot", { 0xE2, 0xAB, 0x83 }, 3},
#line 570 "data/html_entities.gperf"
      {"angsph", { 0xE2, 0x88, 0xA2 }, 3},
#line 697 "data/html_entities.gperf"
      {"digamma", { 0xCF, 0x9D }, 2},
#line 103 "data/html_entities.gperf"
      {"checkmark", { 0xE2, 0x9C, 0x93 }, 3},
#line 525 "data/html_entities.gperf"
      {"kgreen", { 0xC4, 0xB8 }, 2},
#line 1755 "data/html_entities.gperf"
      {"boxh", { 0xE2, 0x94, 0x80 }, 3},
#line 1613 "data/html_entities.gperf"
      {"ycirc", { 0xC5, 0xB7 }, 2},
#line 558 "data/html_entities.gperf"
      {"SubsetEqual", { 0xE2, 0x8A, 0x86 }, 3},
#line 275 "data/html_entities.gperf"
      {"angmsdag", { 0xE2, 0xA6, 0xAE }, 3},
#line 891 "data/html_entities.gperf"
      {"SOFTcy", { 0xD0, 0xAC }, 2},
#line 2020 "data/html_entities.gperf"
      {"kcy", { 0xD0, 0xBA }, 2},
#line 855 "data/html_entities.gperf"
      {"vzigzag", { 0xE2, 0xA6, 0x9A }, 3},
#line 687 "data/html_entities.gperf"
      {"luruhar", { 0xE2, 0xA5, 0xA6 }, 3},
#line 1293 "data/html_entities.gperf"
      {"boxbox", { 0xE2, 0xA7, 0x89 }, 3},
#line 1511 "data/html_entities.gperf"
      {"ycy", { 0xD1, 0x8B }, 2},
#line 589 "data/html_entities.gperf"
      {"twoheadrightarrow", { 0xE2, 0x86, 0xA0 }, 3},
#line 1776 "data/html_entities.gperf"
      {"jukcy", { 0xD1, 0x94 }, 2},
#line 1520 "data/html_entities.gperf"
      {"boxvh", { 0xE2, 0x94, 0xBC }, 3},
#line 181 "data/html_entities.gperf"
      {"ldrushar", { 0xE2, 0xA5, 0x8B }, 3},
#line 1388 "data/html_entities.gperf"
      {"RightUpVector", { 0xE2, 0x86, 0xBE }, 3},
#line 1752 "data/html_entities.gperf"
      {"RightUpVectorBar", { 0xE2, 0xA5, 0x94 }, 3},
#line 1927 "data/html_entities.gperf"
      {"angmsdah", { 0xE2, 0xA6, 0xAF }, 3},
#line 1628 "data/html_entities.gperf"
      {"udblac", { 0xC5, 0xB1 }, 2},
#line 1277 "data/html_entities.gperf"
      {"RightArrowBar", { 0xE2, 0x87, 0xA5 }, 3},
#line 52 "data/html_entities.gperf"
      {"HARDcy", { 0xD0, 0xAA }, 2},
#line 773 "data/html_entities.gperf"
      {"hstrok", { 0xC4, 0xA7 }, 2},
#line 1258 "data/html_entities.gperf"
      {"RightDownVector", { 0xE2, 0x87, 0x82 }, 3},
#line 1069 "data/html_entities.gperf"
      {"RightDownVectorBar", { 0xE2, 0xA5, 0x95 }, 3},
#line 539 "data/html_entities.gperf"
      {"lurdshar", { 0xE2, 0xA5, 0x8A }, 3},
#line 844 "data/html_entities.gperf"
      {"angmsdac", { 0xE2, 0xA6, 0xAA }, 3},
#line 296 "data/html_entities.gperf"
      {"ruluhar", { 0xE2, 0xA5, 0xA8 }, 3},
#line 426 "data/html_entities.gperf"
      {"softcy", { 0xD1, 0x8C }, 2},
#line 1832 "data/html_entities.gperf"
      {"jsercy", { 0xD1, 0x98 }, 2},
#line 1679 "data/html_entities.gperf"
      {"succapprox", { 0xE2, 0xAA, 0xB8 }, 3},
#line 979 "data/html_entities.gperf"
      {"Udblac", { 0xC5, 0xB0 }, 2},
#line 698 "data/html_entities.gperf"
      {"curlyeqprec", { 0xE2, 0x8B, 0x9E }, 3},
#line 1793 "data/html_entities.gperf"
      {"cylcty", { 0xE2, 0x8C, 0xAD }, 3},
#line 331 "data/html_entities.gperf"
      {"VerticalBar", { 0xE2, 0x88, 0xA3 }, 3},
#line 1330 "data/html_entities.gperf"
      {"VerticalSeparator", { 0xE2, 0x9D, 0x98 }, 3},
#line 1951 "data/html_entities.gperf"
      {"multimap", { 0xE2, 0x8A, 0xB8 }, 3},
#line 577 "data/html_entities.gperf"
      {"angmsdaa", { 0xE2, 0xA6, 0xA8 }, 3},
#line 1437 "data/html_entities.gperf"
      {"rightarrow", { 0xE2, 0x86, 0x92 }, 3},
#line 1276 "data/html_entities.gperf"
      {"Rightarrow", { 0xE2, 0x87, 0x92 }, 3},
#line 575 "data/html_entities.gperf"
      {"twoheadleftarrow", { 0xE2, 0x86, 0x9E }, 3},
#line 270 "data/html_entities.gperf"
      {"Odblac", { 0xC5, 0x90 }, 2},
#line 1185 "data/html_entities.gperf"
      {"RightCeiling", { 0xE2, 0x8C, 0x89 }, 3},
#line 179 "data/html_entities.gperf"
      {"NoBreak", { 0xE2, 0x81, 0xA0 }, 3},
#line 602 "data/html_entities.gperf"
      {"straightphi", { 0xCF, 0x95 }, 2},
#line 1216 "data/html_entities.gperf"
      {"odblac", { 0xC5, 0x91 }, 2},
#line 423 "data/html_entities.gperf"
      {"cupbrcap", { 0xE2, 0xA9, 0x88 }, 3},
#line 512 "data/html_entities.gperf"
      {"cuwed", { 0xE2, 0x8B, 0x8F }, 3},
#line 596 "data/html_entities.gperf"
      {"hardcy", { 0xD1, 0x8A }, 2},
#line 1593 "data/html_entities.gperf"
      {"yucy", { 0xD1, 0x8E }, 2},
#line 1937 "data/html_entities.gperf"
      {"shchcy", { 0xD1, 0x89 }, 2},
#line 996 "data/html_entities.gperf"
      {"succnapprox", { 0xE2, 0xAA, 0xBA }, 3},
#line 1874 "data/html_entities.gperf"
      {"rightharpoondown", { 0xE2, 0x87, 0x81 }, 3},
#line 201 "data/html_entities.gperf"
      {"rightharpoonup", { 0xE2, 0x87, 0x80 }, 3},
#line 847 "data/html_entities.gperf"
      {"rightarrowtail", { 0xE2, 0x86, 0xA3 }, 3},
#line 1224 "data/html_entities.gperf"
      {"curlyeqsucc", { 0xE2, 0x8B, 0x9F }, 3},
#line 1938 "data/html_entities.gperf"
      {"SuchThat", { 0xE2, 0x88, 0x8B }, 3},
#line 116 "data/html_entities.gperf"
      {"curvearrowleft", { 0xE2, 0x86, 0xB6 }, 3},
#line 1443 "data/html_entities.gperf"
      {"curvearrowright", { 0xE2, 0x86, 0xB7 }, 3}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct html_entity *resword;

          switch (key - 91)
            {
              case 0:
                if (len == 3)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 1:
                if (len == 3)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 3)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 3)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 4)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 4)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 3)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 4)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 4)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 4)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 32:
                if (len == 4)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 33:
                if (len == 4)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 35:
                if (len == 2)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 2)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 42:
                if (len == 4)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 53:
                if (len == 5)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 55:
                if (len == 5)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 57:
                if (len == 3)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 58:
                if (len == 3)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
              case 61:
                if (len == 5)
                  {
                    resword = &wordlist[19];
                    goto compare;
                  }
                break;
              case 64:
                if (len == 2)
                  {
                    resword = &wordlist[20];
                    goto compare;
                  }
                break;
              case 65:
                if (len == 5)
                  {
                    resword = &wordlist[21];
                    goto compare;
                  }
                break;
              case 68:
                if (len == 3)
                  {
                    resword = &wordlist[22];
                    goto compare;
                  }
                break;
              case 69:
                if (len == 6)
                  {
                    resword = &wordlist[23];
                    goto compare;
                  }
                break;
              case 70:
                if (len == 6)
                  {
                    resword = &wordlist[24];
                    goto compare;
                  }
                break;
              case 71:
                if (len == 5)
                  {
                    resword = &wordlist[25];
                    goto compare;
                  }
                break;
              case 72:
                if (len == 6)
                  {
                    resword = &wordlist[26];
                    goto compare;
                  }
                break;
              case 73:
                if (len == 3)
                  {
                    resword = &wordlist[27];
                    goto compare;
                  }
                break;
              case 76:
                if (len == 6)
                  {
                    resword = &wordlist[28];
                    goto compare;
                  }
                break;
              case 77:
                if (len == 4)
                  {
                    resword = &wordlist[29];
                    goto compare;
                  }
                break;
              case 82:
                if (len == 3)
                  {
                    resword = &wordlist[30];
                    goto compare;
                  }
                break;
              case 84:
                if (len == 6)
                  {
                    resword = &wordlist[31];
                    goto compare;
                  }
                break;
              case 85:
                if (len == 6)
                  {
                    resword = &wordlist[32];
                    goto compare;
                  }
                break;
              case 89:
                if (len == 3)
                  {
                    resword = &wordlist[33];
                    goto compare;
                  }
                break;
              case 90:
                if (len == 4)
                  {
                    resword = &wordlist[34];
                    goto compare;
                  }
                break;
              case 95:
                if (len == 4)
                  {
                    resword = &wordlist[35];
                    goto compare;
                  }
                break;
              case 97:
                if (len == 7)
                  {
                    resword = &wordlist[36];
                    goto compare;
                  }
                break;
              case 99:
                if (len == 7)
                  {
                    resword = &wordlist[37];
                    goto compare;
                  }
                break;
              case 103:
                if (len == 4)
                  {
                    resword = &wordlist[38];
                    goto compare;
                  }
                break;
              case 109:
                if (len == 5)
                  {
                    resword = &wordlist[39];
                    goto compare;
                  }
                break;
              case 110:
                if (len == 5)
                  {
                    resword = &wordlist[40];
                    goto compare;
                  }
                break;
              case 112:
                if (len == 3)
                  {
                    resword = &wordlist[41];
                    goto compare;
                  }
                break;
              case 114:
                if (len == 3)
                  {
                    resword = &wordlist[42];
                    goto compare;
                  }
                break;
              case 115:
                if (len == 2)
                  {
                    resword = &wordlist[43];
                    goto compare;
                  }
                break;
              case 116:
                if (len == 5)
                  {
                    resword = &wordlist[44];
                    goto compare;
                  }
                break;
              case 118:
                if (len == 5)
                  {
                    resword = &wordlist[45];
                    goto compare;
                  }
                break;
              case 119:
                if (len == 5)
                  {
                    resword = &wordlist[46];
                    goto compare;
                  }
                break;
              case 123:
                if (len == 9)
                  {
                    resword = &wordlist[47];
                    goto compare;
                  }
                break;
              case 126:
                if (len == 3)
                  {
                    resword = &wordlist[48];
                    goto compare;
                  }
                break;
              case 128:
                if (len == 3)
                  {
                    resword = &wordlist[49];
                    goto compare;
                  }
                break;
              case 129:
                if (len == 5)
                  {
                    resword = &wordlist[50];
                    goto compare;
                  }
                break;
              case 133:
                if (len == 5)
                  {
                    resword = &wordlist[51];
                    goto compare;
                  }
                break;
              case 134:
                if (len == 5)
                  {
                    resword = &wordlist[52];
                    goto compare;
                  }
                break;
              case 136:
                if (len == 5)
                  {
                    resword = &wordlist[53];
                    goto compare;
                  }
                break;
              case 137:
                if (len == 5)
                  {
                    resword = &wordlist[54];
                    goto compare;
                  }
                break;
              case 138:
                if (len == 5)
                  {
                    resword = &wordlist[55];
                    goto compare;
                  }
                break;
              case 142:
                if (len == 5)
                  {
                    resword = &wordlist[56];
                    goto compare;
                  }
                break;
              case 144:
                if (len == 5)
                  {
                    resword = &wordlist[57];
                    goto compare;
                  }
                break;
              case 147:
                if (len == 5)
                  {
                    resword = &wordlist[58];
                    goto compare;
                  }
                break;
              case 156:
                if (len == 6)
                  {
                    resword = &wordlist[59];
                    goto compare;
                  }
                break;
              case 158:
                if (len == 6)
                  {
                    resword = &wordlist[60];
                    goto compare;
                  }
                break;
              case 160:
                if (len == 3)
                  {
                    resword = &wordlist[61];
                    goto compare;
                  }
                break;
              case 166:
                if (len == 4)
                  {
                    resword = &wordlist[62];
                    goto compare;
                  }
                break;
              case 168:
                if (len == 4)
                  {
                    resword = &wordlist[63];
                    goto compare;
                  }
                break;
              case 174:
                if (len == 5)
                  {
                    resword = &wordlist[64];
                    goto compare;
                  }
                break;
              case 175:
                if (len == 4)
                  {
                    resword = &wordlist[65];
                    goto compare;
                  }
                break;
              case 176:
                if (len == 5)
                  {
                    resword = &wordlist[66];
                    goto compare;
                  }
                break;
              case 177:
                if (len == 4)
                  {
                    resword = &wordlist[67];
                    goto compare;
                  }
                break;
              case 178:
                if (len == 3)
                  {
                    resword = &wordlist[68];
                    goto compare;
                  }
                break;
              case 180:
                if (len == 2)
                  {
                    resword = &wordlist[69];
                    goto compare;
                  }
                break;
              case 184:
                if (len == 4)
                  {
                    resword = &wordlist[70];
                    goto compare;
                  }
                break;
              case 185:
                if (len == 4)
                  {
                    resword = &wordlist[71];
                    goto compare;
                  }
                break;
              case 191:
                if (len == 3)
                  {
                    resword = &wordlist[72];
                    goto compare;
                  }
                break;
              case 200:
                if (len == 10)
                  {
                    resword = &wordlist[73];
                    goto compare;
                  }
                break;
              case 205:
                if (len == 6)
                  {
                    resword = &wordlist[74];
                    goto compare;
                  }
                break;
              case 206:
                if (len == 6)
                  {
                    resword = &wordlist[75];
                    goto compare;
                  }
                break;
              case 210:
                if (len == 4)
                  {
                    resword = &wordlist[76];
                    goto compare;
                  }
                break;
              case 215:
                if (len == 3)
                  {
                    resword = &wordlist[77];
                    goto compare;
                  }
                break;
              case 219:
                if (len == 6)
                  {
                    resword = &wordlist[78];
                    goto compare;
                  }
                break;
              case 221:
                if (len == 7)
                  {
                    resword = &wordlist[79];
                    goto compare;
                  }
                break;
              case 223:
                if (len == 7)
                  {
                    resword = &wordlist[80];
                    goto compare;
                  }
                break;
              case 224:
                if (len == 5)
                  {
                    resword = &wordlist[81];
                    goto compare;
                  }
                break;
              case 235:
                if (len == 3)
                  {
                    resword = &wordlist[82];
                    goto compare;
                  }
                break;
              case 237:
                if (len == 3)
                  {
                    resword = &wordlist[83];
                    goto compare;
                  }
                break;
              case 238:
                if (len == 4)
                  {
                    resword = &wordlist[84];
                    goto compare;
                  }
                break;
              case 242:
                if (len == 6)
                  {
                    resword = &wordlist[85];
                    goto compare;
                  }
                break;
              case 243:
                if (len == 6)
                  {
                    resword = &wordlist[86];
                    goto compare;
                  }
                break;
              case 244:
                if (len == 6)
                  {
                    resword = &wordlist[87];
                    goto compare;
                  }
                break;
              case 248:
                if (len == 3)
                  {
                    resword = &wordlist[88];
                    goto compare;
                  }
                break;
              case 249:
                if (len == 6)
                  {
                    resword = &wordlist[89];
                    goto compare;
                  }
                break;
              case 254:
                if (len == 4)
                  {
                    resword = &wordlist[90];
                    goto compare;
                  }
                break;
              case 258:
                if (len == 4)
                  {
                    resword = &wordlist[91];
                    goto compare;
                  }
                break;
              case 262:
                if (len == 3)
                  {
                    resword = &wordlist[92];
                    goto compare;
                  }
                break;
              case 265:
                if (len == 5)
                  {
                    resword = &wordlist[93];
                    goto compare;
                  }
                break;
              case 267:
                if (len == 5)
                  {
                    resword = &wordlist[94];
                    goto compare;
                  }
                break;
              case 271:
                if (len == 6)
                  {
                    resword = &wordlist[95];
                    goto compare;
                  }
                break;
              case 274:
                if (len == 6)
                  {
                    resword = &wordlist[96];
                    goto compare;
                  }
                break;
              case 288:
                if (len == 4)
                  {
                    resword = &wordlist[97];
                    goto compare;
                  }
                break;
              case 289:
                if (len == 2)
                  {
                    resword = &wordlist[98];
                    goto compare;
                  }
                break;
              case 290:
                if (len == 5)
                  {
                    resword = &wordlist[99];
                    goto compare;
                  }
                break;
              case 291:
                if (len == 2)
                  {
                    resword = &wordlist[100];
                    goto compare;
                  }
                break;
              case 292:
                if (len == 5)
                  {
                    resword = &wordlist[101];
                    goto compare;
                  }
                break;
              case 293:
                if (len == 4)
                  {
                    resword = &wordlist[102];
                    goto compare;
                  }
                break;
              case 296:
                if (len == 2)
                  {
                    resword = &wordlist[103];
                    goto compare;
                  }
                break;
              case 298:
                if (len == 6)
                  {
                    resword = &wordlist[104];
                    goto compare;
                  }
                break;
              case 299:
                if (len == 5)
                  {
                    resword = &wordlist[105];
                    goto compare;
                  }
                break;
              case 300:
                if (len == 2)
                  {
                    resword = &wordlist[106];
                    goto compare;
                  }
                break;
              case 301:
                if (len == 6)
                  {
                    resword = &wordlist[107];
                    goto compare;
                  }
                break;
              case 306:
                if (len == 4)
                  {
                    resword = &wordlist[108];
                    goto compare;
                  }
                break;
              case 308:
                if (len == 3)
                  {
                    resword = &wordlist[109];
                    goto compare;
                  }
                break;
              case 311:
                if (len == 4)
                  {
                    resword = &wordlist[110];
                    goto compare;
                  }
                break;
              case 312:
                if (len == 3)
                  {
                    resword = &wordlist[111];
                    goto compare;
                  }
                break;
              case 313:
                if (len == 5)
                  {
                    resword = &wordlist[112];
                    goto compare;
                  }
                break;
              case 319:
                if (len == 13)
                  {
                    resword = &wordlist[113];
                    goto compare;
                  }
                break;
              case 327:
                if (len == 4)
                  {
                    resword = &wordlist[114];
                    goto compare;
                  }
                break;
              case 328:
                if (len == 3)
                  {
                    resword = &wordlist[115];
                    goto compare;
                  }
                break;
              case 329:
                if (len == 4)
                  {
                    resword = &wordlist[116];
                    goto compare;
                  }
                break;
              case 330:
                if (len == 5)
                  {
                    resword = &wordlist[117];
                    goto compare;
                  }
                break;
              case 334:
                if (len == 4)
                  {
                    resword = &wordlist[118];
                    goto compare;
                  }
                break;
              case 342:
                if (len == 10)
                  {
                    resword = &wordlist[119];
                    goto compare;
                  }
                break;
              case 346:
                if (len == 13)
                  {
                    resword = &wordlist[120];
                    goto compare;
                  }
                break;
              case 347:
                if (len == 17)
                  {
                    resword = &wordlist[121];
                    goto compare;
                  }
                break;
              case 348:
                if (len == 18)
                  {
                    resword = &wordlist[122];
                    goto compare;
                  }
                break;
              case 350:
                if (len == 5)
                  {
                    resword = &wordlist[123];
                    goto compare;
                  }
                break;
              case 353:
                if (len == 12)
                  {
                    resword = &wordlist[124];
                    goto compare;
                  }
                break;
              case 355:
                if (len == 5)
                  {
                    resword = &wordlist[125];
                    goto compare;
                  }
                break;
              case 357:
                if (len == 5)
                  {
                    resword = &wordlist[126];
                    goto compare;
                  }
                break;
              case 359:
                if (len == 17)
                  {
                    resword = &wordlist[127];
                    goto compare;
                  }
                break;
              case 363:
                if (len == 6)
                  {
                    resword = &wordlist[128];
                    goto compare;
                  }
                break;
              case 367:
                if (len == 5)
                  {
                    resword = &wordlist[129];
                    goto compare;
                  }
                break;
              case 371:
                if (len == 5)
                  {
                    resword = &wordlist[130];
                    goto compare;
                  }
                break;
              case 374:
                if (len == 9)
                  {
                    resword = &wordlist[131];
                    goto compare;
                  }
                break;
              case 377:
                if (len == 3)
                  {
                    resword = &wordlist[132];
                    goto compare;
                  }
                break;
              case 380:
                if (len == 6)
                  {
                    resword = &wordlist[133];
                    goto compare;
                  }
                break;
              case 381:
                if (len == 5)
                  {
                    resword = &wordlist[134];
                    goto compare;
                  }
                break;
              case 388:
                if (len == 4)
                  {
                    resword = &wordlist[135];
                    goto compare;
                  }
                break;
              case 389:
                if (len == 6)
                  {
                    resword = &wordlist[136];
                    goto compare;
                  }
                break;
              case 391:
                if (len == 2)
                  {
                    resword = &wordlist[137];
                    goto compare;
                  }
                break;
              case 392:
                if (len == 6)
                  {
                    resword = &wordlist[138];
                    goto compare;
                  }
                break;
              case 393:
                if (len == 8)
                  {
                    resword = &wordlist[139];
                    goto compare;
                  }
                break;
              case 395:
                if (len == 6)
                  {
                    resword = &wordlist[140];
                    goto compare;
                  }
                break;
              case 396:
                if (len == 3)
                  {
                    resword = &wordlist[141];
                    goto compare;
                  }
                break;
              case 398:
                if (len == 6)
                  {
                    resword = &wordlist[142];
                    goto compare;
                  }
                break;
              case 399:
                if (len == 4)
                  {
                    resword = &wordlist[143];
                    goto compare;
                  }
                break;
              case 402:
                if (len == 6)
                  {
                    resword = &wordlist[144];
                    goto compare;
                  }
                break;
              case 404:
                if (len == 6)
                  {
                    resword = &wordlist[145];
                    goto compare;
                  }
                break;
              case 405:
                if (len == 3)
                  {
                    resword = &wordlist[146];
                    goto compare;
                  }
                break;
              case 406:
                if (len == 5)
                  {
                    resword = &wordlist[147];
                    goto compare;
                  }
                break;
              case 407:
                if (len == 5)
                  {
                    resword = &wordlist[148];
                    goto compare;
                  }
                break;
              case 408:
                if (len == 6)
                  {
                    resword = &wordlist[149];
                    goto compare;
                  }
                break;
              case 409:
                if (len == 6)
                  {
                    resword = &wordlist[150];
                    goto compare;
                  }
                break;
              case 412:
                if (len == 6)
                  {
                    resword = &wordlist[151];
                    goto compare;
                  }
                break;
              case 414:
                if (len == 5)
                  {
                    resword = &wordlist[152];
                    goto compare;
                  }
                break;
              case 415:
                if (len == 6)
                  {
                    resword = &wordlist[153];
                    goto compare;
                  }
                break;
              case 418:
                if (len == 4)
                  {
                    resword = &wordlist[154];
                    goto compare;
                  }
                break;
              case 421:
                if (len == 5)
                  {
                    resword = &wordlist[155];
                    goto compare;
                  }
                break;
              case 426:
                if (len == 5)
                  {
                    resword = &wordlist[156];
                    goto compare;
                  }
                break;
              case 428:
                if (len == 6)
                  {
                    resword = &wordlist[157];
                    goto compare;
                  }
                break;
              case 430:
                if (len == 6)
                  {
                    resword = &wordlist[158];
                    goto compare;
                  }
                break;
              case 431:
                if (len == 6)
                  {
                    resword = &wordlist[159];
                    goto compare;
                  }
                break;
              case 432:
                if (len == 5)
                  {
                    resword = &wordlist[160];
                    goto compare;
                  }
                break;
              case 433:
                if (len == 5)
                  {
                    resword = &wordlist[161];
                    goto compare;
                  }
                break;
              case 435:
                if (len == 5)
                  {
                    resword = &wordlist[162];
                    goto compare;
                  }
                break;
              case 436:
                if (len == 2)
                  {
                    resword = &wordlist[163];
                    goto compare;
                  }
                break;
              case 441:
                if (len == 6)
                  {
                    resword = &wordlist[164];
                    goto compare;
                  }
                break;
              case 442:
                if (len == 6)
                  {
                    resword = &wordlist[165];
                    goto compare;
                  }
                break;
              case 449:
                if (len == 11)
                  {
                    resword = &wordlist[166];
                    goto compare;
                  }
                break;
              case 450:
                if (len == 5)
                  {
                    resword = &wordlist[167];
                    goto compare;
                  }
                break;
              case 454:
                if (len == 6)
                  {
                    resword = &wordlist[168];
                    goto compare;
                  }
                break;
              case 459:
                if (len == 4)
                  {
                    resword = &wordlist[169];
                    goto compare;
                  }
                break;
              case 463:
                if (len == 3)
                  {
                    resword = &wordlist[170];
                    goto compare;
                  }
                break;
              case 464:
                if (len == 5)
                  {
                    resword = &wordlist[171];
                    goto compare;
                  }
                break;
              case 465:
                if (len == 5)
                  {
                    resword = &wordlist[172];
                    goto compare;
                  }
                break;
              case 466:
                if (len == 6)
                  {
                    resword = &wordlist[173];
                    goto compare;
                  }
                break;
              case 467:
                if (len == 6)
                  {
                    resword = &wordlist[174];
                    goto compare;
                  }
                break;
              case 485:
                if (len == 3)
                  {
                    resword = &wordlist[175];
                    goto compare;
                  }
                break;
              case 490:
                if (len == 5)
                  {
                    resword = &wordlist[176];
                    goto compare;
                  }
                break;
              case 494:
                if (len == 11)
                  {
                    resword = &wordlist[177];
                    goto compare;
                  }
                break;
              case 502:
                if (len == 5)
                  {
                    resword = &wordlist[178];
                    goto compare;
                  }
                break;
              case 505:
                if (len == 4)
                  {
                    resword = &wordlist[179];
                    goto compare;
                  }
                break;
              case 508:
                if (len == 5)
                  {
                    resword = &wordlist[180];
                    goto compare;
                  }
                break;
              case 512:
                if (len == 6)
                  {
                    resword = &wordlist[181];
                    goto compare;
                  }
                break;
              case 514:
                if (len == 3)
                  {
                    resword = &wordlist[182];
                    goto compare;
                  }
                break;
              case 517:
                if (len == 6)
                  {
                    resword = &wordlist[183];
                    goto compare;
                  }
                break;
              case 524:
                if (len == 3)
                  {
                    resword = &wordlist[184];
                    goto compare;
                  }
                break;
              case 525:
                if (len == 6)
                  {
                    resword = &wordlist[185];
                    goto compare;
                  }
                break;
              case 528:
                if (len == 6)
                  {
                    resword = &wordlist[186];
                    goto compare;
                  }
                break;
              case 529:
                if (len == 8)
                  {
                    resword = &wordlist[187];
                    goto compare;
                  }
                break;
              case 536:
                if (len == 8)
                  {
                    resword = &wordlist[188];
                    goto compare;
                  }
                break;
              case 540:
                if (len == 6)
                  {
                    resword = &wordlist[189];
                    goto compare;
                  }
                break;
              case 541:
                if (len == 4)
                  {
                    resword = &wordlist[190];
                    goto compare;
                  }
                break;
              case 543:
                if (len == 6)
                  {
                    resword = &wordlist[191];
                    goto compare;
                  }
                break;
              case 547:
                if (len == 8)
                  {
                    resword = &wordlist[192];
                    goto compare;
                  }
                break;
              case 552:
                if (len == 8)
                  {
                    resword = &wordlist[193];
                    goto compare;
                  }
                break;
              case 554:
                if (len == 8)
                  {
                    resword = &wordlist[194];
                    goto compare;
                  }
                break;
              case 555:
                if (len == 4)
                  {
                    resword = &wordlist[195];
                    goto compare;
                  }
                break;
              case 556:
                if (len == 5)
                  {
                    resword = &wordlist[196];
                    goto compare;
                  }
                break;
              case 560:
                if (len == 4)
                  {
                    resword = &wordlist[197];
                    goto compare;
                  }
                break;
              case 566:
                if (len == 6)
                  {
                    resword = &wordlist[198];
                    goto compare;
                  }
                break;
              case 581:
                if (len == 5)
                  {
                    resword = &wordlist[199];
                    goto compare;
                  }
                break;
              case 587:
                if (len == 6)
                  {
                    resword = &wordlist[200];
                    goto compare;
                  }
                break;
              case 589:
                if (len == 5)
                  {
                    resword = &wordlist[201];
                    goto compare;
                  }
                break;
              case 591:
                if (len == 5)
                  {
                    resword = &wordlist[202];
                    goto compare;
                  }
                break;
              case 592:
                if (len == 17)
                  {
                    resword = &wordlist[203];
                    goto compare;
                  }
                break;
              case 599:
                if (len == 4)
                  {
                    resword = &wordlist[204];
                    goto compare;
                  }
                break;
              case 601:
                if (len == 5)
                  {
                    resword = &wordlist[205];
                    goto compare;
                  }
                break;
              case 606:
                if (len == 5)
                  {
                    resword = &wordlist[206];
                    goto compare;
                  }
                break;
              case 616:
                if (len == 5)
                  {
                    resword = &wordlist[207];
                    goto compare;
                  }
                break;
              case 618:
                if (len == 3)
                  {
                    resword = &wordlist[208];
                    goto compare;
                  }
                break;
              case 626:
                if (len == 5)
                  {
                    resword = &wordlist[209];
                    goto compare;
                  }
                break;
              case 627:
                if (len == 3)
                  {
                    resword = &wordlist[210];
                    goto compare;
                  }
                break;
              case 629:
                if (len == 4)
                  {
                    resword = &wordlist[211];
                    goto compare;
                  }
                break;
              case 630:
                if (len == 4)
                  {
                    resword = &wordlist[212];
                    goto compare;
                  }
                break;
              case 631:
                if (len == 4)
                  {
                    resword = &wordlist[213];
                    goto compare;
                  }
                break;
              case 632:
                if (len == 4)
                  {
                    resword = &wordlist[214];
                    goto compare;
                  }
                break;
              case 633:
                if (len == 4)
                  {
                    resword = &wordlist[215];
                    goto compare;
                  }
                break;
              case 635:
                if (len == 4)
                  {
                    resword = &wordlist[216];
                    goto compare;
                  }
                break;
              case 638:
                if (len == 4)
                  {
                    resword = &wordlist[217];
                    goto compare;
                  }
                break;
              case 640:
                if (len == 3)
                  {
                    resword = &wordlist[218];
                    goto compare;
                  }
                break;
              case 642:
                if (len == 4)
                  {
                    resword = &wordlist[219];
                    goto compare;
                  }
                break;
              case 643:
                if (len == 6)
                  {
                    resword = &wordlist[220];
                    goto compare;
                  }
                break;
              case 644:
                if (len == 4)
                  {
                    resword = &wordlist[221];
                    goto compare;
                  }
                break;
              case 645:
                if (len == 4)
                  {
                    resword = &wordlist[222];
                    goto compare;
                  }
                break;
              case 652:
                if (len == 4)
                  {
                    resword = &wordlist[223];
                    goto compare;
                  }
                break;
              case 654:
                if (len == 5)
                  {
                    resword = &wordlist[224];
                    goto compare;
                  }
                break;
              case 655:
                if (len == 4)
                  {
                    resword = &wordlist[225];
                    goto compare;
                  }
                break;
              case 657:
                if (len == 4)
                  {
                    resword = &wordlist[226];
                    goto compare;
                  }
                break;
              case 658:
                if (len == 2)
                  {
                    resword = &wordlist[227];
                    goto compare;
                  }
                break;
              case 659:
                if (len == 4)
                  {
                    resword = &wordlist[228];
                    goto compare;
                  }
                break;
              case 661:
                if (len == 4)
                  {
                    resword = &wordlist[229];
                    goto compare;
                  }
                break;
              case 662:
                if (len == 4)
                  {
                    resword = &wordlist[230];
                    goto compare;
                  }
                break;
              case 664:
                if (len == 5)
                  {
                    resword = &wordlist[231];
                    goto compare;
                  }
                break;
              case 665:
                if (len == 4)
                  {
                    resword = &wordlist[232];
                    goto compare;
                  }
                break;
              case 666:
                if (len == 5)
                  {
                    resword = &wordlist[233];
                    goto compare;
                  }
                break;
              case 667:
                if (len == 4)
                  {
                    resword = &wordlist[234];
                    goto compare;
                  }
                break;
              case 668:
                if (len == 12)
                  {
                    resword = &wordlist[235];
                    goto compare;
                  }
                break;
              case 669:
                if (len == 4)
                  {
                    resword = &wordlist[236];
                    goto compare;
                  }
                break;
              case 670:
                if (len == 4)
                  {
                    resword = &wordlist[237];
                    goto compare;
                  }
                break;
              case 673:
                if (len == 14)
                  {
                    resword = &wordlist[238];
                    goto compare;
                  }
                break;
              case 674:
                if (len == 17)
                  {
                    resword = &wordlist[239];
                    goto compare;
                  }
                break;
              case 676:
                if (len == 4)
                  {
                    resword = &wordlist[240];
                    goto compare;
                  }
                break;
              case 677:
                if (len == 5)
                  {
                    resword = &wordlist[241];
                    goto compare;
                  }
                break;
              case 679:
                if (len == 19)
                  {
                    resword = &wordlist[242];
                    goto compare;
                  }
                break;
              case 682:
                if (len == 3)
                  {
                    resword = &wordlist[243];
                    goto compare;
                  }
                break;
              case 686:
                if (len == 5)
                  {
                    resword = &wordlist[244];
                    goto compare;
                  }
                break;
              case 689:
                if (len == 3)
                  {
                    resword = &wordlist[245];
                    goto compare;
                  }
                break;
              case 693:
                if (len == 6)
                  {
                    resword = &wordlist[246];
                    goto compare;
                  }
                break;
              case 695:
                if (len == 4)
                  {
                    resword = &wordlist[247];
                    goto compare;
                  }
                break;
              case 697:
                if (len == 6)
                  {
                    resword = &wordlist[248];
                    goto compare;
                  }
                break;
              case 699:
                if (len == 4)
                  {
                    resword = &wordlist[249];
                    goto compare;
                  }
                break;
              case 702:
                if (len == 5)
                  {
                    resword = &wordlist[250];
                    goto compare;
                  }
                break;
              case 703:
                if (len == 6)
                  {
                    resword = &wordlist[251];
                    goto compare;
                  }
                break;
              case 704:
                if (len == 5)
                  {
                    resword = &wordlist[252];
                    goto compare;
                  }
                break;
              case 708:
                if (len == 4)
                  {
                    resword = &wordlist[253];
                    goto compare;
                  }
                break;
              case 709:
                if (len == 3)
                  {
                    resword = &wordlist[254];
                    goto compare;
                  }
                break;
              case 710:
                if (len == 11)
                  {
                    resword = &wordlist[255];
                    goto compare;
                  }
                break;
              case 713:
                if (len == 4)
                  {
                    resword = &wordlist[256];
                    goto compare;
                  }
                break;
              case 719:
                if (len == 4)
                  {
                    resword = &wordlist[257];
                    goto compare;
                  }
                break;
              case 721:
                if (len == 6)
                  {
                    resword = &wordlist[258];
                    goto compare;
                  }
                break;
              case 727:
                if (len == 7)
                  {
                    resword = &wordlist[259];
                    goto compare;
                  }
                break;
              case 728:
                if (len == 5)
                  {
                    resword = &wordlist[260];
                    goto compare;
                  }
                break;
              case 729:
                if (len == 8)
                  {
                    resword = &wordlist[261];
                    goto compare;
                  }
                break;
              case 732:
                if (len == 5)
                  {
                    resword = &wordlist[262];
                    goto compare;
                  }
                break;
              case 735:
                if (len == 17)
                  {
                    resword = &wordlist[263];
                    goto compare;
                  }
                break;
              case 737:
                if (len == 2)
                  {
                    resword = &wordlist[264];
                    goto compare;
                  }
                break;
              case 740:
                if (len == 5)
                  {
                    resword = &wordlist[265];
                    goto compare;
                  }
                break;
              case 742:
                if (len == 5)
                  {
                    resword = &wordlist[266];
                    goto compare;
                  }
                break;
              case 743:
                if (len == 5)
                  {
                    resword = &wordlist[267];
                    goto compare;
                  }
                break;
              case 747:
                if (len == 4)
                  {
                    resword = &wordlist[268];
                    goto compare;
                  }
                break;
              case 748:
                if (len == 4)
                  {
                    resword = &wordlist[269];
                    goto compare;
                  }
                break;
              case 751:
                if (len == 4)
                  {
                    resword = &wordlist[270];
                    goto compare;
                  }
                break;
              case 753:
                if (len == 4)
                  {
                    resword = &wordlist[271];
                    goto compare;
                  }
                break;
              case 754:
                if (len == 12)
                  {
                    resword = &wordlist[272];
                    goto compare;
                  }
                break;
              case 755:
                if (len == 13)
                  {
                    resword = &wordlist[273];
                    goto compare;
                  }
                break;
              case 758:
                if (len == 5)
                  {
                    resword = &wordlist[274];
                    goto compare;
                  }
                break;
              case 766:
                if (len == 18)
                  {
                    resword = &wordlist[275];
                    goto compare;
                  }
                break;
              case 768:
                if (len == 6)
                  {
                    resword = &wordlist[276];
                    goto compare;
                  }
                break;
              case 771:
                if (len == 7)
                  {
                    resword = &wordlist[277];
                    goto compare;
                  }
                break;
              case 772:
                if (len == 5)
                  {
                    resword = &wordlist[278];
                    goto compare;
                  }
                break;
              case 775:
                if (len == 6)
                  {
                    resword = &wordlist[279];
                    goto compare;
                  }
                break;
              case 776:
                if (len == 4)
                  {
                    resword = &wordlist[280];
                    goto compare;
                  }
                break;
              case 778:
                if (len == 4)
                  {
                    resword = &wordlist[281];
                    goto compare;
                  }
                break;
              case 785:
                if (len == 4)
                  {
                    resword = &wordlist[282];
                    goto compare;
                  }
                break;
              case 789:
                if (len == 5)
                  {
                    resword = &wordlist[283];
                    goto compare;
                  }
                break;
              case 791:
                if (len == 8)
                  {
                    resword = &wordlist[284];
                    goto compare;
                  }
                break;
              case 792:
                if (len == 4)
                  {
                    resword = &wordlist[285];
                    goto compare;
                  }
                break;
              case 799:
                if (len == 4)
                  {
                    resword = &wordlist[286];
                    goto compare;
                  }
                break;
              case 802:
                if (len == 3)
                  {
                    resword = &wordlist[287];
                    goto compare;
                  }
                break;
              case 804:
                if (len == 12)
                  {
                    resword = &wordlist[288];
                    goto compare;
                  }
                break;
              case 805:
                if (len == 13)
                  {
                    resword = &wordlist[289];
                    goto compare;
                  }
                break;
              case 807:
                if (len == 5)
                  {
                    resword = &wordlist[290];
                    goto compare;
                  }
                break;
              case 808:
                if (len == 9)
                  {
                    resword = &wordlist[291];
                    goto compare;
                  }
                break;
              case 809:
                if (len == 5)
                  {
                    resword = &wordlist[292];
                    goto compare;
                  }
                break;
              case 810:
                if (len == 4)
                  {
                    resword = &wordlist[293];
                    goto compare;
                  }
                break;
              case 811:
                if (len == 6)
                  {
                    resword = &wordlist[294];
                    goto compare;
                  }
                break;
              case 814:
                if (len == 5)
                  {
                    resword = &wordlist[295];
                    goto compare;
                  }
                break;
              case 815:
                if (len == 6)
                  {
                    resword = &wordlist[296];
                    goto compare;
                  }
                break;
              case 817:
                if (len == 6)
                  {
                    resword = &wordlist[297];
                    goto compare;
                  }
                break;
              case 833:
                if (len == 2)
                  {
                    resword = &wordlist[298];
                    goto compare;
                  }
                break;
              case 838:
                if (len == 2)
                  {
                    resword = &wordlist[299];
                    goto compare;
                  }
                break;
              case 843:
                if (len == 4)
                  {
                    resword = &wordlist[300];
                    goto compare;
                  }
                break;
              case 844:
                if (len == 4)
                  {
                    resword = &wordlist[301];
                    goto compare;
                  }
                break;
              case 853:
                if (len == 3)
                  {
                    resword = &wordlist[302];
                    goto compare;
                  }
                break;
              case 856:
                if (len == 3)
                  {
                    resword = &wordlist[303];
                    goto compare;
                  }
                break;
              case 861:
                if (len == 3)
                  {
                    resword = &wordlist[304];
                    goto compare;
                  }
                break;
              case 864:
                if (len == 4)
                  {
                    resword = &wordlist[305];
                    goto compare;
                  }
                break;
              case 876:
                if (len == 4)
                  {
                    resword = &wordlist[306];
                    goto compare;
                  }
                break;
              case 890:
                if (len == 2)
                  {
                    resword = &wordlist[307];
                    goto compare;
                  }
                break;
              case 896:
                if (len == 6)
                  {
                    resword = &wordlist[308];
                    goto compare;
                  }
                break;
              case 914:
                if (len == 6)
                  {
                    resword = &wordlist[309];
                    goto compare;
                  }
                break;
              case 919:
                if (len == 8)
                  {
                    resword = &wordlist[310];
                    goto compare;
                  }
                break;
              case 922:
                if (len == 2)
                  {
                    resword = &wordlist[311];
                    goto compare;
                  }
                break;
              case 923:
                if (len == 4)
                  {
                    resword = &wordlist[312];
                    goto compare;
                  }
                break;
              case 924:
                if (len == 2)
                  {
                    resword = &wordlist[313];
                    goto compare;
                  }
                break;
              case 925:
                if (len == 6)
                  {
                    resword = &wordlist[314];
                    goto compare;
                  }
                break;
              case 930:
                if (len == 3)
                  {
                    resword = &wordlist[315];
                    goto compare;
                  }
                break;
              case 936:
                if (len == 6)
                  {
                    resword = &wordlist[316];
                    goto compare;
                  }
                break;
              case 938:
                if (len == 6)
                  {
                    resword = &wordlist[317];
                    goto compare;
                  }
                break;
              case 941:
                if (len == 2)
                  {
                    resword = &wordlist[318];
                    goto compare;
                  }
                break;
              case 947:
                if (len == 4)
                  {
                    resword = &wordlist[319];
                    goto compare;
                  }
                break;
              case 948:
                if (len == 4)
                  {
                    resword = &wordlist[320];
                    goto compare;
                  }
                break;
              case 958:
                if (len == 5)
                  {
                    resword = &wordlist[321];
                    goto compare;
                  }
                break;
              case 963:
                if (len == 7)
                  {
                    resword = &wordlist[322];
                    goto compare;
                  }
                break;
              case 965:
                if (len == 7)
                  {
                    resword = &wordlist[323];
                    goto compare;
                  }
                break;
              case 972:
                if (len == 10)
                  {
                    resword = &wordlist[324];
                    goto compare;
                  }
                break;
              case 973:
                if (len == 5)
                  {
                    resword = &wordlist[325];
                    goto compare;
                  }
                break;
              case 975:
                if (len == 2)
                  {
                    resword = &wordlist[326];
                    goto compare;
                  }
                break;
              case 977:
                if (len == 5)
                  {
                    resword = &wordlist[327];
                    goto compare;
                  }
                break;
              case 978:
                if (len == 9)
                  {
                    resword = &wordlist[328];
                    goto compare;
                  }
                break;
              case 979:
                if (len == 18)
                  {
                    resword = &wordlist[329];
                    goto compare;
                  }
                break;
              case 987:
                if (len == 5)
                  {
                    resword = &wordlist[330];
                    goto compare;
                  }
                break;
              case 990:
                if (len == 4)
                  {
                    resword = &wordlist[331];
                    goto compare;
                  }
                break;
              case 992:
                if (len == 4)
                  {
                    resword = &wordlist[332];
                    goto compare;
                  }
                break;
              case 995:
                if (len == 5)
                  {
                    resword = &wordlist[333];
                    goto compare;
                  }
                break;
              case 998:
                if (len == 5)
                  {
                    resword = &wordlist[334];
                    goto compare;
                  }
                break;
              case 999:
                if (len == 2)
                  {
                    resword = &wordlist[335];
                    goto compare;
                  }
                break;
              case 1000:
                if (len == 6)
                  {
                    resword = &wordlist[336];
                    goto compare;
                  }
                break;
              case 1001:
                if (len == 3)
                  {
                    resword = &wordlist[337];
                    goto compare;
                  }
                break;
              case 1006:
                if (len == 4)
                  {
                    resword = &wordlist[338];
                    goto compare;
                  }
                break;
              case 1007:
                if (len == 5)
                  {
                    resword = &wordlist[339];
                    goto compare;
                  }
                break;
              case 1009:
                if (len == 4)
                  {
                    resword = &wordlist[340];
                    goto compare;
                  }
                break;
              case 1010:
                if (len == 4)
                  {
                    resword = &wordlist[341];
                    goto compare;
                  }
                break;
              case 1013:
                if (len == 4)
                  {
                    resword = &wordlist[342];
                    goto compare;
                  }
                break;
              case 1016:
                if (len == 2)
                  {
                    resword = &wordlist[343];
                    goto compare;
                  }
                break;
              case 1022:
                if (len == 4)
                  {
                    resword = &wordlist[344];
                    goto compare;
                  }
                break;
              case 1024:
                if (len == 4)
                  {
                    resword = &wordlist[345];
                    goto compare;
                  }
                break;
              case 1028:
                if (len == 4)
                  {
                    resword = &wordlist[346];
                    goto compare;
                  }
                break;
              case 1039:
                if (len == 2)
                  {
                    resword = &wordlist[347];
                    goto compare;
                  }
                break;
              case 1041:
                if (len == 5)
                  {
                    resword = &wordlist[348];
                    goto compare;
                  }
                break;
              case 1043:
                if (len == 10)
                  {
                    resword = &wordlist[349];
                    goto compare;
                  }
                break;
              case 1044:
                if (len == 4)
                  {
                    resword = &wordlist[350];
                    goto compare;
                  }
                break;
              case 1047:
                if (len == 4)
                  {
                    resword = &wordlist[351];
                    goto compare;
                  }
                break;
              case 1053:
                if (len == 4)
                  {
                    resword = &wordlist[352];
                    goto compare;
                  }
                break;
              case 1054:
                if (len == 11)
                  {
                    resword = &wordlist[353];
                    goto compare;
                  }
                break;
              case 1057:
                if (len == 5)
                  {
                    resword = &wordlist[354];
                    goto compare;
                  }
                break;
              case 1058:
                if (len == 7)
                  {
                    resword = &wordlist[355];
                    goto compare;
                  }
                break;
              case 1065:
                if (len == 8)
                  {
                    resword = &wordlist[356];
                    goto compare;
                  }
                break;
              case 1074:
                if (len == 6)
                  {
                    resword = &wordlist[357];
                    goto compare;
                  }
                break;
              case 1077:
                if (len == 14)
                  {
                    resword = &wordlist[358];
                    goto compare;
                  }
                break;
              case 1081:
                if (len == 5)
                  {
                    resword = &wordlist[359];
                    goto compare;
                  }
                break;
              case 1087:
                if (len == 4)
                  {
                    resword = &wordlist[360];
                    goto compare;
                  }
                break;
              case 1089:
                if (len == 6)
                  {
                    resword = &wordlist[361];
                    goto compare;
                  }
                break;
              case 1092:
                if (len == 6)
                  {
                    resword = &wordlist[362];
                    goto compare;
                  }
                break;
              case 1096:
                if (len == 7)
                  {
                    resword = &wordlist[363];
                    goto compare;
                  }
                break;
              case 1107:
                if (len == 7)
                  {
                    resword = &wordlist[364];
                    goto compare;
                  }
                break;
              case 1111:
                if (len == 4)
                  {
                    resword = &wordlist[365];
                    goto compare;
                  }
                break;
              case 1114:
                if (len == 5)
                  {
                    resword = &wordlist[366];
                    goto compare;
                  }
                break;
              case 1118:
                if (len == 3)
                  {
                    resword = &wordlist[367];
                    goto compare;
                  }
                break;
              case 1125:
                if (len == 16)
                  {
                    resword = &wordlist[368];
                    goto compare;
                  }
                break;
              case 1128:
                if (len == 6)
                  {
                    resword = &wordlist[369];
                    goto compare;
                  }
                break;
              case 1130:
                if (len == 6)
                  {
                    resword = &wordlist[370];
                    goto compare;
                  }
                break;
              case 1134:
                if (len == 7)
                  {
                    resword = &wordlist[371];
                    goto compare;
                  }
                break;
              case 1135:
                if (len == 7)
                  {
                    resword = &wordlist[372];
                    goto compare;
                  }
                break;
              case 1136:
                if (len == 4)
                  {
                    resword = &wordlist[373];
                    goto compare;
                  }
                break;
              case 1141:
                if (len == 6)
                  {
                    resword = &wordlist[374];
                    goto compare;
                  }
                break;
              case 1144:
                if (len == 4)
                  {
                    resword = &wordlist[375];
                    goto compare;
                  }
                break;
              case 1148:
                if (len == 8)
                  {
                    resword = &wordlist[376];
                    goto compare;
                  }
                break;
              case 1150:
                if (len == 6)
                  {
                    resword = &wordlist[377];
                    goto compare;
                  }
                break;
              case 1171:
                if (len == 9)
                  {
                    resword = &wordlist[378];
                    goto compare;
                  }
                break;
              case 1172:
                if (len == 5)
                  {
                    resword = &wordlist[379];
                    goto compare;
                  }
                break;
              case 1177:
                if (len == 4)
                  {
                    resword = &wordlist[380];
                    goto compare;
                  }
                break;
              case 1181:
                if (len == 6)
                  {
                    resword = &wordlist[381];
                    goto compare;
                  }
                break;
              case 1184:
                if (len == 12)
                  {
                    resword = &wordlist[382];
                    goto compare;
                  }
                break;
              case 1201:
                if (len == 8)
                  {
                    resword = &wordlist[383];
                    goto compare;
                  }
                break;
              case 1202:
                if (len == 4)
                  {
                    resword = &wordlist[384];
                    goto compare;
                  }
                break;
              case 1216:
                if (len == 5)
                  {
                    resword = &wordlist[385];
                    goto compare;
                  }
                break;
              case 1217:
                if (len == 5)
                  {
                    resword = &wordlist[386];
                    goto compare;
                  }
                break;
              case 1218:
                if (len == 5)
                  {
                    resword = &wordlist[387];
                    goto compare;
                  }
                break;
              case 1225:
                if (len == 6)
                  {
                    resword = &wordlist[388];
                    goto compare;
                  }
                break;
              case 1226:
                if (len == 6)
                  {
                    resword = &wordlist[389];
                    goto compare;
                  }
                break;
              case 1227:
                if (len == 2)
                  {
                    resword = &wordlist[390];
                    goto compare;
                  }
                break;
              case 1232:
                if (len == 7)
                  {
                    resword = &wordlist[391];
                    goto compare;
                  }
                break;
              case 1244:
                if (len == 4)
                  {
                    resword = &wordlist[392];
                    goto compare;
                  }
                break;
              case 1249:
                if (len == 7)
                  {
                    resword = &wordlist[393];
                    goto compare;
                  }
                break;
              case 1251:
                if (len == 9)
                  {
                    resword = &wordlist[394];
                    goto compare;
                  }
                break;
              case 1252:
                if (len == 3)
                  {
                    resword = &wordlist[395];
                    goto compare;
                  }
                break;
              case 1253:
                if (len == 13)
                  {
                    resword = &wordlist[396];
                    goto compare;
                  }
                break;
              case 1255:
                if (len == 4)
                  {
                    resword = &wordlist[397];
                    goto compare;
                  }
                break;
              case 1256:
                if (len == 6)
                  {
                    resword = &wordlist[398];
                    goto compare;
                  }
                break;
              case 1264:
                if (len == 2)
                  {
                    resword = &wordlist[399];
                    goto compare;
                  }
                break;
              case 1267:
                if (len == 3)
                  {
                    resword = &wordlist[400];
                    goto compare;
                  }
                break;
              case 1275:
                if (len == 3)
                  {
                    resword = &wordlist[401];
                    goto compare;
                  }
                break;
              case 1277:
                if (len == 5)
                  {
                    resword = &wordlist[402];
                    goto compare;
                  }
                break;
              case 1281:
                if (len == 4)
                  {
                    resword = &wordlist[403];
                    goto compare;
                  }
                break;
              case 1282:
                if (len == 7)
                  {
                    resword = &wordlist[404];
                    goto compare;
                  }
                break;
              case 1291:
                if (len == 6)
                  {
                    resword = &wordlist[405];
                    goto compare;
                  }
                break;
              case 1306:
                if (len == 6)
                  {
                    resword = &wordlist[406];
                    goto compare;
                  }
                break;
              case 1311:
                if (len == 2)
                  {
                    resword = &wordlist[407];
                    goto compare;
                  }
                break;
              case 1316:
                if (len == 9)
                  {
                    resword = &wordlist[408];
                    goto compare;
                  }
                break;
              case 1317:
                if (len == 9)
                  {
                    resword = &wordlist[409];
                    goto compare;
                  }
                break;
              case 1318:
                if (len == 5)
                  {
                    resword = &wordlist[410];
                    goto compare;
                  }
                break;
              case 1319:
                if (len == 6)
                  {
                    resword = &wordlist[411];
                    goto compare;
                  }
                break;
              case 1325:
                if (len == 4)
                  {
                    resword = &wordlist[412];
                    goto compare;
                  }
                break;
              case 1328:
                if (len == 5)
                  {
                    resword = &wordlist[413];
                    goto compare;
                  }
                break;
              case 1329:
                if (len == 3)
                  {
                    resword = &wordlist[414];
                    goto compare;
                  }
                break;
              case 1331:
                if (len == 5)
                  {
                    resword = &wordlist[415];
                    goto compare;
                  }
                break;
              case 1336:
                if (len == 5)
                  {
                    resword = &wordlist[416];
                    goto compare;
                  }
                break;
              case 1340:
                if (len == 10)
                  {
                    resword = &wordlist[417];
                    goto compare;
                  }
                break;
              case 1344:
                if (len == 3)
                  {
                    resword = &wordlist[418];
                    goto compare;
                  }
                break;
              case 1346:
                if (len == 7)
                  {
                    resword = &wordlist[419];
                    goto compare;
                  }
                break;
              case 1347:
                if (len == 11)
                  {
                    resword = &wordlist[420];
                    goto compare;
                  }
                break;
              case 1349:
                if (len == 5)
                  {
                    resword = &wordlist[421];
                    goto compare;
                  }
                break;
              case 1350:
                if (len == 6)
                  {
                    resword = &wordlist[422];
                    goto compare;
                  }
                break;
              case 1358:
                if (len == 7)
                  {
                    resword = &wordlist[423];
                    goto compare;
                  }
                break;
              case 1359:
                if (len == 4)
                  {
                    resword = &wordlist[424];
                    goto compare;
                  }
                break;
              case 1360:
                if (len == 4)
                  {
                    resword = &wordlist[425];
                    goto compare;
                  }
                break;
              case 1361:
                if (len == 4)
                  {
                    resword = &wordlist[426];
                    goto compare;
                  }
                break;
              case 1362:
                if (len == 4)
                  {
                    resword = &wordlist[427];
                    goto compare;
                  }
                break;
              case 1363:
                if (len == 4)
                  {
                    resword = &wordlist[428];
                    goto compare;
                  }
                break;
              case 1368:
                if (len == 4)
                  {
                    resword = &wordlist[429];
                    goto compare;
                  }
                break;
              case 1369:
                if (len == 5)
                  {
                    resword = &wordlist[430];
                    goto compare;
                  }
                break;
              case 1372:
                if (len == 4)
                  {
                    resword = &wordlist[431];
                    goto compare;
                  }
                break;
              case 1374:
                if (len == 4)
                  {
                    resword = &wordlist[432];
                    goto compare;
                  }
                break;
              case 1375:
                if (len == 4)
                  {
                    resword = &wordlist[433];
                    goto compare;
                  }
                break;
              case 1376:
                if (len == 4)
                  {
                    resword = &wordlist[434];
                    goto compare;
                  }
                break;
              case 1377:
                if (len == 4)
                  {
                    resword = &wordlist[435];
                    goto compare;
                  }
                break;
              case 1378:
                if (len == 13)
                  {
                    resword = &wordlist[436];
                    goto compare;
                  }
                break;
              case 1380:
                if (len == 5)
                  {
                    resword = &wordlist[437];
                    goto compare;
                  }
                break;
              case 1382:
                if (len == 4)
                  {
                    resword = &wordlist[438];
                    goto compare;
                  }
                break;
              case 1383:
                if (len == 11)
                  {
                    resword = &wordlist[439];
                    goto compare;
                  }
                break;
              case 1389:
                if (len == 4)
                  {
                    resword = &wordlist[440];
                    goto compare;
                  }
                break;
              case 1391:
                if (len == 4)
                  {
                    resword = &wordlist[441];
                    goto compare;
                  }
                break;
              case 1392:
                if (len == 4)
                  {
                    resword = &wordlist[442];
                    goto compare;
                  }
                break;
              case 1395:
                if (len == 4)
                  {
                    resword = &wordlist[443];
                    goto compare;
                  }
                break;
              case 1397:
                if (len == 5)
                  {
                    resword = &wordlist[444];
                    goto compare;
                  }
                break;
              case 1398:
                if (len == 4)
                  {
                    resword = &wordlist[445];
                    goto compare;
                  }
                break;
              case 1399:
                if (len == 3)
                  {
                    resword = &wordlist[446];
                    goto compare;
                  }
                break;
              case 1400:
                if (len == 4)
                  {
                    resword = &wordlist[447];
                    goto compare;
                  }
                break;
              case 1401:
                if (len == 5)
                  {
                    resword = &wordlist[448];
                    goto compare;
                  }
                break;
              case 1402:
                if (len == 6)
                  {
                    resword = &wordlist[449];
                    goto compare;
                  }
                break;
              case 1403:
                if (len == 14)
                  {
                    resword = &wordlist[450];
                    goto compare;
                  }
                break;
              case 1404:
                if (len == 7)
                  {
                    resword = &wordlist[451];
                    goto compare;
                  }
                break;
              case 1406:
                if (len == 12)
                  {
                    resword = &wordlist[452];
                    goto compare;
                  }
                break;
              case 1409:
                if (len == 12)
                  {
                    resword = &wordlist[453];
                    goto compare;
                  }
                break;
              case 1416:
                if (len == 3)
                  {
                    resword = &wordlist[454];
                    goto compare;
                  }
                break;
              case 1418:
                if (len == 7)
                  {
                    resword = &wordlist[455];
                    goto compare;
                  }
                break;
              case 1425:
                if (len == 4)
                  {
                    resword = &wordlist[456];
                    goto compare;
                  }
                break;
              case 1429:
                if (len == 4)
                  {
                    resword = &wordlist[457];
                    goto compare;
                  }
                break;
              case 1443:
                if (len == 4)
                  {
                    resword = &wordlist[458];
                    goto compare;
                  }
                break;
              case 1449:
                if (len == 4)
                  {
                    resword = &wordlist[459];
                    goto compare;
                  }
                break;
              case 1474:
                if (len == 8)
                  {
                    resword = &wordlist[460];
                    goto compare;
                  }
                break;
              case 1476:
                if (len == 4)
                  {
                    resword = &wordlist[461];
                    goto compare;
                  }
                break;
              case 1477:
                if (len == 4)
                  {
                    resword = &wordlist[462];
                    goto compare;
                  }
                break;
              case 1478:
                if (len == 4)
                  {
                    resword = &wordlist[463];
                    goto compare;
                  }
                break;
              case 1483:
                if (len == 4)
                  {
                    resword = &wordlist[464];
                    goto compare;
                  }
                break;
              case 1504:
                if (len == 14)
                  {
                    resword = &wordlist[465];
                    goto compare;
                  }
                break;
              case 1506:
                if (len == 4)
                  {
                    resword = &wordlist[466];
                    goto compare;
                  }
                break;
              case 1508:
                if (len == 4)
                  {
                    resword = &wordlist[467];
                    goto compare;
                  }
                break;
              case 1510:
                if (len == 6)
                  {
                    resword = &wordlist[468];
                    goto compare;
                  }
                break;
              case 1515:
                if (len == 4)
                  {
                    resword = &wordlist[469];
                    goto compare;
                  }
                break;
              case 1516:
                if (len == 10)
                  {
                    resword = &wordlist[470];
                    goto compare;
                  }
                break;
              case 1517:
                if (len == 10)
                  {
                    resword = &wordlist[471];
                    goto compare;
                  }
                break;
              case 1522:
                if (len == 4)
                  {
                    resword = &wordlist[472];
                    goto compare;
                  }
                break;
              case 1524:
                if (len == 5)
                  {
                    resword = &wordlist[473];
                    goto compare;
                  }
                break;
              case 1529:
                if (len == 4)
                  {
                    resword = &wordlist[474];
                    goto compare;
                  }
                break;
              case 1530:
                if (len == 6)
                  {
                    resword = &wordlist[475];
                    goto compare;
                  }
                break;
              case 1532:
                if (len == 6)
                  {
                    resword = &wordlist[476];
                    goto compare;
                  }
                break;
              case 1540:
                if (len == 4)
                  {
                    resword = &wordlist[477];
                    goto compare;
                  }
                break;
              case 1554:
                if (len == 4)
                  {
                    resword = &wordlist[478];
                    goto compare;
                  }
                break;
              case 1556:
                if (len == 8)
                  {
                    resword = &wordlist[479];
                    goto compare;
                  }
                break;
              case 1561:
                if (len == 5)
                  {
                    resword = &wordlist[480];
                    goto compare;
                  }
                break;
              case 1563:
                if (len == 12)
                  {
                    resword = &wordlist[481];
                    goto compare;
                  }
                break;
              case 1566:
                if (len == 5)
                  {
                    resword = &wordlist[482];
                    goto compare;
                  }
                break;
              case 1570:
                if (len == 6)
                  {
                    resword = &wordlist[483];
                    goto compare;
                  }
                break;
              case 1573:
                if (len == 4)
                  {
                    resword = &wordlist[484];
                    goto compare;
                  }
                break;
              case 1574:
                if (len == 4)
                  {
                    resword = &wordlist[485];
                    goto compare;
                  }
                break;
              case 1575:
                if (len == 5)
                  {
                    resword = &wordlist[486];
                    goto compare;
                  }
                break;
              case 1582:
                if (len == 9)
                  {
                    resword = &wordlist[487];
                    goto compare;
                  }
                break;
              case 1584:
                if (len == 10)
                  {
                    resword = &wordlist[488];
                    goto compare;
                  }
                break;
              case 1588:
                if (len == 6)
                  {
                    resword = &wordlist[489];
                    goto compare;
                  }
                break;
              case 1590:
                if (len == 12)
                  {
                    resword = &wordlist[490];
                    goto compare;
                  }
                break;
              case 1593:
                if (len == 13)
                  {
                    resword = &wordlist[491];
                    goto compare;
                  }
                break;
              case 1594:
                if (len == 4)
                  {
                    resword = &wordlist[492];
                    goto compare;
                  }
                break;
              case 1596:
                if (len == 4)
                  {
                    resword = &wordlist[493];
                    goto compare;
                  }
                break;
              case 1601:
                if (len == 9)
                  {
                    resword = &wordlist[494];
                    goto compare;
                  }
                break;
              case 1606:
                if (len == 4)
                  {
                    resword = &wordlist[495];
                    goto compare;
                  }
                break;
              case 1610:
                if (len == 7)
                  {
                    resword = &wordlist[496];
                    goto compare;
                  }
                break;
              case 1617:
                if (len == 6)
                  {
                    resword = &wordlist[497];
                    goto compare;
                  }
                break;
              case 1618:
                if (len == 5)
                  {
                    resword = &wordlist[498];
                    goto compare;
                  }
                break;
              case 1619:
                if (len == 4)
                  {
                    resword = &wordlist[499];
                    goto compare;
                  }
                break;
              case 1620:
                if (len == 3)
                  {
                    resword = &wordlist[500];
                    goto compare;
                  }
                break;
              case 1646:
                if (len == 5)
                  {
                    resword = &wordlist[501];
                    goto compare;
                  }
                break;
              case 1647:
                if (len == 7)
                  {
                    resword = &wordlist[502];
                    goto compare;
                  }
                break;
              case 1649:
                if (len == 7)
                  {
                    resword = &wordlist[503];
                    goto compare;
                  }
                break;
              case 1651:
                if (len == 6)
                  {
                    resword = &wordlist[504];
                    goto compare;
                  }
                break;
              case 1659:
                if (len == 13)
                  {
                    resword = &wordlist[505];
                    goto compare;
                  }
                break;
              case 1660:
                if (len == 6)
                  {
                    resword = &wordlist[506];
                    goto compare;
                  }
                break;
              case 1665:
                if (len == 9)
                  {
                    resword = &wordlist[507];
                    goto compare;
                  }
                break;
              case 1666:
                if (len == 15)
                  {
                    resword = &wordlist[508];
                    goto compare;
                  }
                break;
              case 1667:
                if (len == 3)
                  {
                    resword = &wordlist[509];
                    goto compare;
                  }
                break;
              case 1669:
                if (len == 4)
                  {
                    resword = &wordlist[510];
                    goto compare;
                  }
                break;
              case 1672:
                if (len == 4)
                  {
                    resword = &wordlist[511];
                    goto compare;
                  }
                break;
              case 1674:
                if (len == 3)
                  {
                    resword = &wordlist[512];
                    goto compare;
                  }
                break;
              case 1677:
                if (len == 4)
                  {
                    resword = &wordlist[513];
                    goto compare;
                  }
                break;
              case 1680:
                if (len == 6)
                  {
                    resword = &wordlist[514];
                    goto compare;
                  }
                break;
              case 1686:
                if (len == 7)
                  {
                    resword = &wordlist[515];
                    goto compare;
                  }
                break;
              case 1688:
                if (len == 5)
                  {
                    resword = &wordlist[516];
                    goto compare;
                  }
                break;
              case 1717:
                if (len == 4)
                  {
                    resword = &wordlist[517];
                    goto compare;
                  }
                break;
              case 1718:
                if (len == 6)
                  {
                    resword = &wordlist[518];
                    goto compare;
                  }
                break;
              case 1727:
                if (len == 3)
                  {
                    resword = &wordlist[519];
                    goto compare;
                  }
                break;
              case 1731:
                if (len == 3)
                  {
                    resword = &wordlist[520];
                    goto compare;
                  }
                break;
              case 1732:
                if (len == 3)
                  {
                    resword = &wordlist[521];
                    goto compare;
                  }
                break;
              case 1733:
                if (len == 3)
                  {
                    resword = &wordlist[522];
                    goto compare;
                  }
                break;
              case 1734:
                if (len == 3)
                  {
                    resword = &wordlist[523];
                    goto compare;
                  }
                break;
              case 1735:
                if (len == 3)
                  {
                    resword = &wordlist[524];
                    goto compare;
                  }
                break;
              case 1736:
                if (len == 4)
                  {
                    resword = &wordlist[525];
                    goto compare;
                  }
                break;
              case 1738:
                if (len == 4)
                  {
                    resword = &wordlist[526];
                    goto compare;
                  }
                break;
              case 1739:
                if (len == 4)
                  {
                    resword = &wordlist[527];
                    goto compare;
                  }
                break;
              case 1740:
                if (len == 3)
                  {
                    resword = &wordlist[528];
                    goto compare;
                  }
                break;
              case 1743:
                if (len == 4)
                  {
                    resword = &wordlist[529];
                    goto compare;
                  }
                break;
              case 1744:
                if (len == 3)
                  {
                    resword = &wordlist[530];
                    goto compare;
                  }
                break;
              case 1746:
                if (len == 3)
                  {
                    resword = &wordlist[531];
                    goto compare;
                  }
                break;
              case 1747:
                if (len == 3)
                  {
                    resword = &wordlist[532];
                    goto compare;
                  }
                break;
              case 1748:
                if (len == 4)
                  {
                    resword = &wordlist[533];
                    goto compare;
                  }
                break;
              case 1754:
                if (len == 3)
                  {
                    resword = &wordlist[534];
                    goto compare;
                  }
                break;
              case 1758:
                if (len == 4)
                  {
                    resword = &wordlist[535];
                    goto compare;
                  }
                break;
              case 1761:
                if (len == 3)
                  {
                    resword = &wordlist[536];
                    goto compare;
                  }
                break;
              case 1763:
                if (len == 3)
                  {
                    resword = &wordlist[537];
                    goto compare;
                  }
                break;
              case 1764:
                if (len == 3)
                  {
                    resword = &wordlist[538];
                    goto compare;
                  }
                break;
              case 1767:
                if (len == 3)
                  {
                    resword = &wordlist[539];
                    goto compare;
                  }
                break;
              case 1769:
                if (len == 6)
                  {
                    resword = &wordlist[540];
                    goto compare;
                  }
                break;
              case 1772:
                if (len == 3)
                  {
                    resword = &wordlist[541];
                    goto compare;
                  }
                break;
              case 1775:
                if (len == 5)
                  {
                    resword = &wordlist[542];
                    goto compare;
                  }
                break;
              case 1777:
                if (len == 9)
                  {
                    resword = &wordlist[543];
                    goto compare;
                  }
                break;
              case 1795:
                if (len == 6)
                  {
                    resword = &wordlist[544];
                    goto compare;
                  }
                break;
              case 1797:
                if (len == 3)
                  {
                    resword = &wordlist[545];
                    goto compare;
                  }
                break;
              case 1801:
                if (len == 3)
                  {
                    resword = &wordlist[546];
                    goto compare;
                  }
                break;
              case 1805:
                if (len == 7)
                  {
                    resword = &wordlist[547];
                    goto compare;
                  }
                break;
              case 1815:
                if (len == 3)
                  {
                    resword = &wordlist[548];
                    goto compare;
                  }
                break;
              case 1819:
                if (len == 5)
                  {
                    resword = &wordlist[549];
                    goto compare;
                  }
                break;
              case 1820:
                if (len == 9)
                  {
                    resword = &wordlist[550];
                    goto compare;
                  }
                break;
              case 1821:
                if (len == 3)
                  {
                    resword = &wordlist[551];
                    goto compare;
                  }
                break;
              case 1840:
                if (len == 3)
                  {
                    resword = &wordlist[552];
                    goto compare;
                  }
                break;
              case 1844:
                if (len == 4)
                  {
                    resword = &wordlist[553];
                    goto compare;
                  }
                break;
              case 1849:
                if (len == 3)
                  {
                    resword = &wordlist[554];
                    goto compare;
                  }
                break;
              case 1850:
                if (len == 3)
                  {
                    resword = &wordlist[555];
                    goto compare;
                  }
                break;
              case 1852:
                if (len == 18)
                  {
                    resword = &wordlist[556];
                    goto compare;
                  }
                break;
              case 1853:
                if (len == 15)
                  {
                    resword = &wordlist[557];
                    goto compare;
                  }
                break;
              case 1855:
                if (len == 3)
                  {
                    resword = &wordlist[558];
                    goto compare;
                  }
                break;
              case 1856:
                if (len == 20)
                  {
                    resword = &wordlist[559];
                    goto compare;
                  }
                break;
              case 1862:
                if (len == 4)
                  {
                    resword = &wordlist[560];
                    goto compare;
                  }
                break;
              case 1869:
                if (len == 15)
                  {
                    resword = &wordlist[561];
                    goto compare;
                  }
                break;
              case 1878:
                if (len == 3)
                  {
                    resword = &wordlist[562];
                    goto compare;
                  }
                break;
              case 1880:
                if (len == 3)
                  {
                    resword = &wordlist[563];
                    goto compare;
                  }
                break;
              case 1887:
                if (len == 3)
                  {
                    resword = &wordlist[564];
                    goto compare;
                  }
                break;
              case 1890:
                if (len == 6)
                  {
                    resword = &wordlist[565];
                    goto compare;
                  }
                break;
              case 1893:
                if (len == 3)
                  {
                    resword = &wordlist[566];
                    goto compare;
                  }
                break;
              case 1894:
                if (len == 3)
                  {
                    resword = &wordlist[567];
                    goto compare;
                  }
                break;
              case 1895:
                if (len == 2)
                  {
                    resword = &wordlist[568];
                    goto compare;
                  }
                break;
              case 1901:
                if (len == 3)
                  {
                    resword = &wordlist[569];
                    goto compare;
                  }
                break;
              case 1908:
                if (len == 6)
                  {
                    resword = &wordlist[570];
                    goto compare;
                  }
                break;
              case 1911:
                if (len == 9)
                  {
                    resword = &wordlist[571];
                    goto compare;
                  }
                break;
              case 1912:
                if (len == 3)
                  {
                    resword = &wordlist[572];
                    goto compare;
                  }
                break;
              case 1916:
                if (len == 11)
                  {
                    resword = &wordlist[573];
                    goto compare;
                  }
                break;
              case 1919:
                if (len == 6)
                  {
                    resword = &wordlist[574];
                    goto compare;
                  }
                break;
              case 1920:
                if (len == 15)
                  {
                    resword = &wordlist[575];
                    goto compare;
                  }
                break;
              case 1925:
                if (len == 6)
                  {
                    resword = &wordlist[576];
                    goto compare;
                  }
                break;
              case 1927:
                if (len == 6)
                  {
                    resword = &wordlist[577];
                    goto compare;
                  }
                break;
              case 1929:
                if (len == 6)
                  {
                    resword = &wordlist[578];
                    goto compare;
                  }
                break;
              case 1931:
                if (len == 7)
                  {
                    resword = &wordlist[579];
                    goto compare;
                  }
                break;
              case 1935:
                if (len == 7)
                  {
                    resword = &wordlist[580];
                    goto compare;
                  }
                break;
              case 1940:
                if (len == 7)
                  {
                    resword = &wordlist[581];
                    goto compare;
                  }
                break;
              case 1945:
                if (len == 3)
                  {
                    resword = &wordlist[582];
                    goto compare;
                  }
                break;
              case 1946:
                if (len == 3)
                  {
                    resword = &wordlist[583];
                    goto compare;
                  }
                break;
              case 1948:
                if (len == 11)
                  {
                    resword = &wordlist[584];
                    goto compare;
                  }
                break;
              case 1950:
                if (len == 4)
                  {
                    resword = &wordlist[585];
                    goto compare;
                  }
                break;
              case 1953:
                if (len == 4)
                  {
                    resword = &wordlist[586];
                    goto compare;
                  }
                break;
              case 1956:
                if (len == 5)
                  {
                    resword = &wordlist[587];
                    goto compare;
                  }
                break;
              case 1957:
                if (len == 5)
                  {
                    resword = &wordlist[588];
                    goto compare;
                  }
                break;
              case 1963:
                if (len == 4)
                  {
                    resword = &wordlist[589];
                    goto compare;
                  }
                break;
              case 1966:
                if (len == 3)
                  {
                    resword = &wordlist[590];
                    goto compare;
                  }
                break;
              case 1969:
                if (len == 4)
                  {
                    resword = &wordlist[591];
                    goto compare;
                  }
                break;
              case 1971:
                if (len == 4)
                  {
                    resword = &wordlist[592];
                    goto compare;
                  }
                break;
              case 1974:
                if (len == 3)
                  {
                    resword = &wordlist[593];
                    goto compare;
                  }
                break;
              case 1977:
                if (len == 3)
                  {
                    resword = &wordlist[594];
                    goto compare;
                  }
                break;
              case 1978:
                if (len == 3)
                  {
                    resword = &wordlist[595];
                    goto compare;
                  }
                break;
              case 1985:
                if (len == 4)
                  {
                    resword = &wordlist[596];
                    goto compare;
                  }
                break;
              case 1987:
                if (len == 7)
                  {
                    resword = &wordlist[597];
                    goto compare;
                  }
                break;
              case 1994:
                if (len == 7)
                  {
                    resword = &wordlist[598];
                    goto compare;
                  }
                break;
              case 1998:
                if (len == 4)
                  {
                    resword = &wordlist[599];
                    goto compare;
                  }
                break;
              case 2003:
                if (len == 5)
                  {
                    resword = &wordlist[600];
                    goto compare;
                  }
                break;
              case 2006:
                if (len == 7)
                  {
                    resword = &wordlist[601];
                    goto compare;
                  }
                break;
              case 2011:
                if (len == 4)
                  {
                    resword = &wordlist[602];
                    goto compare;
                  }
                break;
              case 2014:
                if (len == 5)
                  {
                    resword = &wordlist[603];
                    goto compare;
                  }
                break;
              case 2020:
                if (len == 6)
                  {
                    resword = &wordlist[604];
                    goto compare;
                  }
                break;
              case 2021:
                if (len == 6)
                  {
                    resword = &wordlist[605];
                    goto compare;
                  }
                break;
              case 2022:
                if (len == 6)
                  {
                    resword = &wordlist[606];
                    goto compare;
                  }
                break;
              case 2023:
                if (len == 6)
                  {
                    resword = &wordlist[607];
                    goto compare;
                  }
                break;
              case 2024:
                if (len == 6)
                  {
                    resword = &wordlist[608];
                    goto compare;
                  }
                break;
              case 2028:
                if (len == 6)
                  {
                    resword = &wordlist[609];
                    goto compare;
                  }
                break;
              case 2029:
                if (len == 7)
                  {
                    resword = &wordlist[610];
                    goto compare;
                  }
                break;
              case 2031:
                if (len == 4)
                  {
                    resword = &wordlist[611];
                    goto compare;
                  }
                break;
              case 2033:
                if (len == 6)
                  {
                    resword = &wordlist[612];
                    goto compare;
                  }
                break;
              case 2036:
                if (len == 7)
                  {
                    resword = &wordlist[613];
                    goto compare;
                  }
                break;
              case 2040:
                if (len == 8)
                  {
                    resword = &wordlist[614];
                    goto compare;
                  }
                break;
              case 2041:
                if (len == 3)
                  {
                    resword = &wordlist[615];
                    goto compare;
                  }
                break;
              case 2042:
                if (len == 6)
                  {
                    resword = &wordlist[616];
                    goto compare;
                  }
                break;
              case 2043:
                if (len == 6)
                  {
                    resword = &wordlist[617];
                    goto compare;
                  }
                break;
              case 2044:
                if (len == 7)
                  {
                    resword = &wordlist[618];
                    goto compare;
                  }
                break;
              case 2049:
                if (len == 3)
                  {
                    resword = &wordlist[619];
                    goto compare;
                  }
                break;
              case 2053:
                if (len == 6)
                  {
                    resword = &wordlist[620];
                    goto compare;
                  }
                break;
              case 2056:
                if (len == 14)
                  {
                    resword = &wordlist[621];
                    goto compare;
                  }
                break;
              case 2059:
                if (len == 5)
                  {
                    resword = &wordlist[622];
                    goto compare;
                  }
                break;
              case 2061:
                if (len == 6)
                  {
                    resword = &wordlist[623];
                    goto compare;
                  }
                break;
              case 2063:
                if (len == 3)
                  {
                    resword = &wordlist[624];
                    goto compare;
                  }
                break;
              case 2066:
                if (len == 11)
                  {
                    resword = &wordlist[625];
                    goto compare;
                  }
                break;
              case 2072:
                if (len == 8)
                  {
                    resword = &wordlist[626];
                    goto compare;
                  }
                break;
              case 2081:
                if (len == 9)
                  {
                    resword = &wordlist[627];
                    goto compare;
                  }
                break;
              case 2090:
                if (len == 4)
                  {
                    resword = &wordlist[628];
                    goto compare;
                  }
                break;
              case 2094:
                if (len == 6)
                  {
                    resword = &wordlist[629];
                    goto compare;
                  }
                break;
              case 2097:
                if (len == 3)
                  {
                    resword = &wordlist[630];
                    goto compare;
                  }
                break;
              case 2100:
                if (len == 6)
                  {
                    resword = &wordlist[631];
                    goto compare;
                  }
                break;
              case 2102:
                if (len == 6)
                  {
                    resword = &wordlist[632];
                    goto compare;
                  }
                break;
              case 2108:
                if (len == 3)
                  {
                    resword = &wordlist[633];
                    goto compare;
                  }
                break;
              case 2110:
                if (len == 5)
                  {
                    resword = &wordlist[634];
                    goto compare;
                  }
                break;
              case 2111:
                if (len == 3)
                  {
                    resword = &wordlist[635];
                    goto compare;
                  }
                break;
              case 2113:
                if (len == 5)
                  {
                    resword = &wordlist[636];
                    goto compare;
                  }
                break;
              case 2114:
                if (len == 3)
                  {
                    resword = &wordlist[637];
                    goto compare;
                  }
                break;
              case 2126:
                if (len == 7)
                  {
                    resword = &wordlist[638];
                    goto compare;
                  }
                break;
              case 2130:
                if (len == 3)
                  {
                    resword = &wordlist[639];
                    goto compare;
                  }
                break;
              case 2131:
                if (len == 6)
                  {
                    resword = &wordlist[640];
                    goto compare;
                  }
                break;
              case 2141:
                if (len == 6)
                  {
                    resword = &wordlist[641];
                    goto compare;
                  }
                break;
              case 2149:
                if (len == 2)
                  {
                    resword = &wordlist[642];
                    goto compare;
                  }
                break;
              case 2153:
                if (len == 6)
                  {
                    resword = &wordlist[643];
                    goto compare;
                  }
                break;
              case 2154:
                if (len == 2)
                  {
                    resword = &wordlist[644];
                    goto compare;
                  }
                break;
              case 2156:
                if (len == 6)
                  {
                    resword = &wordlist[645];
                    goto compare;
                  }
                break;
              case 2166:
                if (len == 7)
                  {
                    resword = &wordlist[646];
                    goto compare;
                  }
                break;
              case 2167:
                if (len == 6)
                  {
                    resword = &wordlist[647];
                    goto compare;
                  }
                break;
              case 2168:
                if (len == 3)
                  {
                    resword = &wordlist[648];
                    goto compare;
                  }
                break;
              case 2169:
                if (len == 6)
                  {
                    resword = &wordlist[649];
                    goto compare;
                  }
                break;
              case 2170:
                if (len == 5)
                  {
                    resword = &wordlist[650];
                    goto compare;
                  }
                break;
              case 2171:
                if (len == 4)
                  {
                    resword = &wordlist[651];
                    goto compare;
                  }
                break;
              case 2177:
                if (len == 5)
                  {
                    resword = &wordlist[652];
                    goto compare;
                  }
                break;
              case 2178:
                if (len == 5)
                  {
                    resword = &wordlist[653];
                    goto compare;
                  }
                break;
              case 2181:
                if (len == 5)
                  {
                    resword = &wordlist[654];
                    goto compare;
                  }
                break;
              case 2182:
                if (len == 6)
                  {
                    resword = &wordlist[655];
                    goto compare;
                  }
                break;
              case 2183:
                if (len == 6)
                  {
                    resword = &wordlist[656];
                    goto compare;
                  }
                break;
              case 2184:
                if (len == 6)
                  {
                    resword = &wordlist[657];
                    goto compare;
                  }
                break;
              case 2188:
                if (len == 5)
                  {
                    resword = &wordlist[658];
                    goto compare;
                  }
                break;
              case 2190:
                if (len == 5)
                  {
                    resword = &wordlist[659];
                    goto compare;
                  }
                break;
              case 2191:
                if (len == 4)
                  {
                    resword = &wordlist[660];
                    goto compare;
                  }
                break;
              case 2195:
                if (len == 5)
                  {
                    resword = &wordlist[661];
                    goto compare;
                  }
                break;
              case 2199:
                if (len == 5)
                  {
                    resword = &wordlist[662];
                    goto compare;
                  }
                break;
              case 2204:
                if (len == 10)
                  {
                    resword = &wordlist[663];
                    goto compare;
                  }
                break;
              case 2206:
                if (len == 4)
                  {
                    resword = &wordlist[664];
                    goto compare;
                  }
                break;
              case 2213:
                if (len == 14)
                  {
                    resword = &wordlist[665];
                    goto compare;
                  }
                break;
              case 2219:
                if (len == 7)
                  {
                    resword = &wordlist[666];
                    goto compare;
                  }
                break;
              case 2221:
                if (len == 13)
                  {
                    resword = &wordlist[667];
                    goto compare;
                  }
                break;
              case 2225:
                if (len == 20)
                  {
                    resword = &wordlist[668];
                    goto compare;
                  }
                break;
              case 2226:
                if (len == 8)
                  {
                    resword = &wordlist[669];
                    goto compare;
                  }
                break;
              case 2227:
                if (len == 4)
                  {
                    resword = &wordlist[670];
                    goto compare;
                  }
                break;
              case 2231:
                if (len == 3)
                  {
                    resword = &wordlist[671];
                    goto compare;
                  }
                break;
              case 2236:
                if (len == 6)
                  {
                    resword = &wordlist[672];
                    goto compare;
                  }
                break;
              case 2242:
                if (len == 6)
                  {
                    resword = &wordlist[673];
                    goto compare;
                  }
                break;
              case 2249:
                if (len == 8)
                  {
                    resword = &wordlist[674];
                    goto compare;
                  }
                break;
              case 2252:
                if (len == 5)
                  {
                    resword = &wordlist[675];
                    goto compare;
                  }
                break;
              case 2255:
                if (len == 8)
                  {
                    resword = &wordlist[676];
                    goto compare;
                  }
                break;
              case 2259:
                if (len == 5)
                  {
                    resword = &wordlist[677];
                    goto compare;
                  }
                break;
              case 2267:
                if (len == 6)
                  {
                    resword = &wordlist[678];
                    goto compare;
                  }
                break;
              case 2269:
                if (len == 4)
                  {
                    resword = &wordlist[679];
                    goto compare;
                  }
                break;
              case 2270:
                if (len == 5)
                  {
                    resword = &wordlist[680];
                    goto compare;
                  }
                break;
              case 2277:
                if (len == 15)
                  {
                    resword = &wordlist[681];
                    goto compare;
                  }
                break;
              case 2281:
                if (len == 6)
                  {
                    resword = &wordlist[682];
                    goto compare;
                  }
                break;
              case 2288:
                if (len == 8)
                  {
                    resword = &wordlist[683];
                    goto compare;
                  }
                break;
              case 2290:
                if (len == 5)
                  {
                    resword = &wordlist[684];
                    goto compare;
                  }
                break;
              case 2292:
                if (len == 6)
                  {
                    resword = &wordlist[685];
                    goto compare;
                  }
                break;
              case 2296:
                if (len == 14)
                  {
                    resword = &wordlist[686];
                    goto compare;
                  }
                break;
              case 2306:
                if (len == 5)
                  {
                    resword = &wordlist[687];
                    goto compare;
                  }
                break;
              case 2315:
                if (len == 10)
                  {
                    resword = &wordlist[688];
                    goto compare;
                  }
                break;
              case 2318:
                if (len == 20)
                  {
                    resword = &wordlist[689];
                    goto compare;
                  }
                break;
              case 2320:
                if (len == 7)
                  {
                    resword = &wordlist[690];
                    goto compare;
                  }
                break;
              case 2323:
                if (len == 7)
                  {
                    resword = &wordlist[691];
                    goto compare;
                  }
                break;
              case 2326:
                if (len == 4)
                  {
                    resword = &wordlist[692];
                    goto compare;
                  }
                break;
              case 2334:
                if (len == 3)
                  {
                    resword = &wordlist[693];
                    goto compare;
                  }
                break;
              case 2339:
                if (len == 15)
                  {
                    resword = &wordlist[694];
                    goto compare;
                  }
                break;
              case 2345:
                if (len == 3)
                  {
                    resword = &wordlist[695];
                    goto compare;
                  }
                break;
              case 2349:
                if (len == 4)
                  {
                    resword = &wordlist[696];
                    goto compare;
                  }
                break;
              case 2351:
                if (len == 21)
                  {
                    resword = &wordlist[697];
                    goto compare;
                  }
                break;
              case 2354:
                if (len == 6)
                  {
                    resword = &wordlist[698];
                    goto compare;
                  }
                break;
              case 2355:
                if (len == 6)
                  {
                    resword = &wordlist[699];
                    goto compare;
                  }
                break;
              case 2357:
                if (len == 3)
                  {
                    resword = &wordlist[700];
                    goto compare;
                  }
                break;
              case 2359:
                if (len == 23)
                  {
                    resword = &wordlist[701];
                    goto compare;
                  }
                break;
              case 2365:
                if (len == 4)
                  {
                    resword = &wordlist[702];
                    goto compare;
                  }
                break;
              case 2368:
                if (len == 7)
                  {
                    resword = &wordlist[703];
                    goto compare;
                  }
                break;
              case 2370:
                if (len == 9)
                  {
                    resword = &wordlist[704];
                    goto compare;
                  }
                break;
              case 2371:
                if (len == 5)
                  {
                    resword = &wordlist[705];
                    goto compare;
                  }
                break;
              case 2373:
                if (len == 4)
                  {
                    resword = &wordlist[706];
                    goto compare;
                  }
                break;
              case 2383:
                if (len == 3)
                  {
                    resword = &wordlist[707];
                    goto compare;
                  }
                break;
              case 2388:
                if (len == 10)
                  {
                    resword = &wordlist[708];
                    goto compare;
                  }
                break;
              case 2389:
                if (len == 6)
                  {
                    resword = &wordlist[709];
                    goto compare;
                  }
                break;
              case 2396:
                if (len == 8)
                  {
                    resword = &wordlist[710];
                    goto compare;
                  }
                break;
              case 2400:
                if (len == 6)
                  {
                    resword = &wordlist[711];
                    goto compare;
                  }
                break;
              case 2401:
                if (len == 14)
                  {
                    resword = &wordlist[712];
                    goto compare;
                  }
                break;
              case 2402:
                if (len == 6)
                  {
                    resword = &wordlist[713];
                    goto compare;
                  }
                break;
              case 2403:
                if (len == 6)
                  {
                    resword = &wordlist[714];
                    goto compare;
                  }
                break;
              case 2405:
                if (len == 10)
                  {
                    resword = &wordlist[715];
                    goto compare;
                  }
                break;
              case 2409:
                if (len == 5)
                  {
                    resword = &wordlist[716];
                    goto compare;
                  }
                break;
              case 2418:
                if (len == 7)
                  {
                    resword = &wordlist[717];
                    goto compare;
                  }
                break;
              case 2419:
                if (len == 6)
                  {
                    resword = &wordlist[718];
                    goto compare;
                  }
                break;
              case 2424:
                if (len == 11)
                  {
                    resword = &wordlist[719];
                    goto compare;
                  }
                break;
              case 2430:
                if (len == 6)
                  {
                    resword = &wordlist[720];
                    goto compare;
                  }
                break;
              case 2432:
                if (len == 5)
                  {
                    resword = &wordlist[721];
                    goto compare;
                  }
                break;
              case 2436:
                if (len == 4)
                  {
                    resword = &wordlist[722];
                    goto compare;
                  }
                break;
              case 2438:
                if (len == 12)
                  {
                    resword = &wordlist[723];
                    goto compare;
                  }
                break;
              case 2439:
                if (len == 4)
                  {
                    resword = &wordlist[724];
                    goto compare;
                  }
                break;
              case 2441:
                if (len == 4)
                  {
                    resword = &wordlist[725];
                    goto compare;
                  }
                break;
              case 2456:
                if (len == 8)
                  {
                    resword = &wordlist[726];
                    goto compare;
                  }
                break;
              case 2457:
                if (len == 4)
                  {
                    resword = &wordlist[727];
                    goto compare;
                  }
                break;
              case 2458:
                if (len == 5)
                  {
                    resword = &wordlist[728];
                    goto compare;
                  }
                break;
              case 2461:
                if (len == 4)
                  {
                    resword = &wordlist[729];
                    goto compare;
                  }
                break;
              case 2463:
                if (len == 12)
                  {
                    resword = &wordlist[730];
                    goto compare;
                  }
                break;
              case 2468:
                if (len == 4)
                  {
                    resword = &wordlist[731];
                    goto compare;
                  }
                break;
              case 2470:
                if (len == 5)
                  {
                    resword = &wordlist[732];
                    goto compare;
                  }
                break;
              case 2476:
                if (len == 5)
                  {
                    resword = &wordlist[733];
                    goto compare;
                  }
                break;
              case 2477:
                if (len == 6)
                  {
                    resword = &wordlist[734];
                    goto compare;
                  }
                break;
              case 2479:
                if (len == 6)
                  {
                    resword = &wordlist[735];
                    goto compare;
                  }
                break;
              case 2480:
                if (len == 13)
                  {
                    resword = &wordlist[736];
                    goto compare;
                  }
                break;
              case 2484:
                if (len == 6)
                  {
                    resword = &wordlist[737];
                    goto compare;
                  }
                break;
              case 2486:
                if (len == 6)
                  {
                    resword = &wordlist[738];
                    goto compare;
                  }
                break;
              case 2491:
                if (len == 4)
                  {
                    resword = &wordlist[739];
                    goto compare;
                  }
                break;
              case 2510:
                if (len == 17)
                  {
                    resword = &wordlist[740];
                    goto compare;
                  }
                break;
              case 2515:
                if (len == 6)
                  {
                    resword = &wordlist[741];
                    goto compare;
                  }
                break;
              case 2526:
                if (len == 5)
                  {
                    resword = &wordlist[742];
                    goto compare;
                  }
                break;
              case 2529:
                if (len == 5)
                  {
                    resword = &wordlist[743];
                    goto compare;
                  }
                break;
              case 2533:
                if (len == 7)
                  {
                    resword = &wordlist[744];
                    goto compare;
                  }
                break;
              case 2539:
                if (len == 4)
                  {
                    resword = &wordlist[745];
                    goto compare;
                  }
                break;
              case 2548:
                if (len == 6)
                  {
                    resword = &wordlist[746];
                    goto compare;
                  }
                break;
              case 2558:
                if (len == 6)
                  {
                    resword = &wordlist[747];
                    goto compare;
                  }
                break;
              case 2569:
                if (len == 4)
                  {
                    resword = &wordlist[748];
                    goto compare;
                  }
                break;
              case 2571:
                if (len == 14)
                  {
                    resword = &wordlist[749];
                    goto compare;
                  }
                break;
              case 2574:
                if (len == 4)
                  {
                    resword = &wordlist[750];
                    goto compare;
                  }
                break;
              case 2578:
                if (len == 3)
                  {
                    resword = &wordlist[751];
                    goto compare;
                  }
                break;
              case 2583:
                if (len == 7)
                  {
                    resword = &wordlist[752];
                    goto compare;
                  }
                break;
              case 2587:
                if (len == 6)
                  {
                    resword = &wordlist[753];
                    goto compare;
                  }
                break;
              case 2592:
                if (len == 3)
                  {
                    resword = &wordlist[754];
                    goto compare;
                  }
                break;
              case 2594:
                if (len == 10)
                  {
                    resword = &wordlist[755];
                    goto compare;
                  }
                break;
              case 2597:
                if (len == 2)
                  {
                    resword = &wordlist[756];
                    goto compare;
                  }
                break;
              case 2599:
                if (len == 11)
                  {
                    resword = &wordlist[757];
                    goto compare;
                  }
                break;
              case 2603:
                if (len == 15)
                  {
                    resword = &wordlist[758];
                    goto compare;
                  }
                break;
              case 2606:
                if (len == 10)
                  {
                    resword = &wordlist[759];
                    goto compare;
                  }
                break;
              case 2613:
                if (len == 6)
                  {
                    resword = &wordlist[760];
                    goto compare;
                  }
                break;
              case 2617:
                if (len == 4)
                  {
                    resword = &wordlist[761];
                    goto compare;
                  }
                break;
              case 2619:
                if (len == 14)
                  {
                    resword = &wordlist[762];
                    goto compare;
                  }
                break;
              case 2621:
                if (len == 8)
                  {
                    resword = &wordlist[763];
                    goto compare;
                  }
                break;
              case 2622:
                if (len == 12)
                  {
                    resword = &wordlist[764];
                    goto compare;
                  }
                break;
              case 2625:
                if (len == 12)
                  {
                    resword = &wordlist[765];
                    goto compare;
                  }
                break;
              case 2630:
                if (len == 16)
                  {
                    resword = &wordlist[766];
                    goto compare;
                  }
                break;
              case 2633:
                if (len == 4)
                  {
                    resword = &wordlist[767];
                    goto compare;
                  }
                break;
              case 2634:
                if (len == 9)
                  {
                    resword = &wordlist[768];
                    goto compare;
                  }
                break;
              case 2636:
                if (len == 5)
                  {
                    resword = &wordlist[769];
                    goto compare;
                  }
                break;
              case 2638:
                if (len == 5)
                  {
                    resword = &wordlist[770];
                    goto compare;
                  }
                break;
              case 2640:
                if (len == 5)
                  {
                    resword = &wordlist[771];
                    goto compare;
                  }
                break;
              case 2655:
                if (len == 9)
                  {
                    resword = &wordlist[772];
                    goto compare;
                  }
                break;
              case 2657:
                if (len == 5)
                  {
                    resword = &wordlist[773];
                    goto compare;
                  }
                break;
              case 2659:
                if (len == 5)
                  {
                    resword = &wordlist[774];
                    goto compare;
                  }
                break;
              case 2662:
                if (len == 20)
                  {
                    resword = &wordlist[775];
                    goto compare;
                  }
                break;
              case 2671:
                if (len == 8)
                  {
                    resword = &wordlist[776];
                    goto compare;
                  }
                break;
              case 2672:
                if (len == 6)
                  {
                    resword = &wordlist[777];
                    goto compare;
                  }
                break;
              case 2675:
                if (len == 6)
                  {
                    resword = &wordlist[778];
                    goto compare;
                  }
                break;
              case 2683:
                if (len == 5)
                  {
                    resword = &wordlist[779];
                    goto compare;
                  }
                break;
              case 2685:
                if (len == 6)
                  {
                    resword = &wordlist[780];
                    goto compare;
                  }
                break;
              case 2691:
                if (len == 4)
                  {
                    resword = &wordlist[781];
                    goto compare;
                  }
                break;
              case 2698:
                if (len == 3)
                  {
                    resword = &wordlist[782];
                    goto compare;
                  }
                break;
              case 2699:
                if (len == 6)
                  {
                    resword = &wordlist[783];
                    goto compare;
                  }
                break;
              case 2713:
                if (len == 3)
                  {
                    resword = &wordlist[784];
                    goto compare;
                  }
                break;
              case 2715:
                if (len == 7)
                  {
                    resword = &wordlist[785];
                    goto compare;
                  }
                break;
              case 2716:
                if (len == 3)
                  {
                    resword = &wordlist[786];
                    goto compare;
                  }
                break;
              case 2721:
                if (len == 3)
                  {
                    resword = &wordlist[787];
                    goto compare;
                  }
                break;
              case 2737:
                if (len == 5)
                  {
                    resword = &wordlist[788];
                    goto compare;
                  }
                break;
              case 2744:
                if (len == 6)
                  {
                    resword = &wordlist[789];
                    goto compare;
                  }
                break;
              case 2746:
                if (len == 5)
                  {
                    resword = &wordlist[790];
                    goto compare;
                  }
                break;
              case 2756:
                if (len == 11)
                  {
                    resword = &wordlist[791];
                    goto compare;
                  }
                break;
              case 2762:
                if (len == 6)
                  {
                    resword = &wordlist[792];
                    goto compare;
                  }
                break;
              case 2765:
                if (len == 3)
                  {
                    resword = &wordlist[793];
                    goto compare;
                  }
                break;
              case 2770:
                if (len == 5)
                  {
                    resword = &wordlist[794];
                    goto compare;
                  }
                break;
              case 2775:
                if (len == 6)
                  {
                    resword = &wordlist[795];
                    goto compare;
                  }
                break;
              case 2779:
                if (len == 3)
                  {
                    resword = &wordlist[796];
                    goto compare;
                  }
                break;
              case 2783:
                if (len == 5)
                  {
                    resword = &wordlist[797];
                    goto compare;
                  }
                break;
              case 2789:
                if (len == 4)
                  {
                    resword = &wordlist[798];
                    goto compare;
                  }
                break;
              case 2792:
                if (len == 3)
                  {
                    resword = &wordlist[799];
                    goto compare;
                  }
                break;
              case 2806:
                if (len == 6)
                  {
                    resword = &wordlist[800];
                    goto compare;
                  }
                break;
              case 2808:
                if (len == 4)
                  {
                    resword = &wordlist[801];
                    goto compare;
                  }
                break;
              case 2809:
                if (len == 7)
                  {
                    resword = &wordlist[802];
                    goto compare;
                  }
                break;
              case 2810:
                if (len == 6)
                  {
                    resword = &wordlist[803];
                    goto compare;
                  }
                break;
              case 2811:
                if (len == 7)
                  {
                    resword = &wordlist[804];
                    goto compare;
                  }
                break;
              case 2813:
                if (len == 4)
                  {
                    resword = &wordlist[805];
                    goto compare;
                  }
                break;
              case 2816:
                if (len == 6)
                  {
                    resword = &wordlist[806];
                    goto compare;
                  }
                break;
              case 2828:
                if (len == 11)
                  {
                    resword = &wordlist[807];
                    goto compare;
                  }
                break;
              case 2830:
                if (len == 6)
                  {
                    resword = &wordlist[808];
                    goto compare;
                  }
                break;
              case 2832:
                if (len == 6)
                  {
                    resword = &wordlist[809];
                    goto compare;
                  }
                break;
              case 2838:
                if (len == 3)
                  {
                    resword = &wordlist[810];
                    goto compare;
                  }
                break;
              case 2840:
                if (len == 3)
                  {
                    resword = &wordlist[811];
                    goto compare;
                  }
                break;
              case 2842:
                if (len == 7)
                  {
                    resword = &wordlist[812];
                    goto compare;
                  }
                break;
              case 2844:
                if (len == 9)
                  {
                    resword = &wordlist[813];
                    goto compare;
                  }
                break;
              case 2847:
                if (len == 5)
                  {
                    resword = &wordlist[814];
                    goto compare;
                  }
                break;
              case 2854:
                if (len == 3)
                  {
                    resword = &wordlist[815];
                    goto compare;
                  }
                break;
              case 2863:
                if (len == 5)
                  {
                    resword = &wordlist[816];
                    goto compare;
                  }
                break;
              case 2867:
                if (len == 6)
                  {
                    resword = &wordlist[817];
                    goto compare;
                  }
                break;
              case 2872:
                if (len == 6)
                  {
                    resword = &wordlist[818];
                    goto compare;
                  }
                break;
              case 2878:
                if (len == 4)
                  {
                    resword = &wordlist[819];
                    goto compare;
                  }
                break;
              case 2881:
                if (len == 8)
                  {
                    resword = &wordlist[820];
                    goto compare;
                  }
                break;
              case 2883:
                if (len == 7)
                  {
                    resword = &wordlist[821];
                    goto compare;
                  }
                break;
              case 2885:
                if (len == 4)
                  {
                    resword = &wordlist[822];
                    goto compare;
                  }
                break;
              case 2888:
                if (len == 10)
                  {
                    resword = &wordlist[823];
                    goto compare;
                  }
                break;
              case 2889:
                if (len == 6)
                  {
                    resword = &wordlist[824];
                    goto compare;
                  }
                break;
              case 2899:
                if (len == 8)
                  {
                    resword = &wordlist[825];
                    goto compare;
                  }
                break;
              case 2901:
                if (len == 5)
                  {
                    resword = &wordlist[826];
                    goto compare;
                  }
                break;
              case 2903:
                if (len == 5)
                  {
                    resword = &wordlist[827];
                    goto compare;
                  }
                break;
              case 2913:
                if (len == 6)
                  {
                    resword = &wordlist[828];
                    goto compare;
                  }
                break;
              case 2915:
                if (len == 11)
                  {
                    resword = &wordlist[829];
                    goto compare;
                  }
                break;
              case 2929:
                if (len == 5)
                  {
                    resword = &wordlist[830];
                    goto compare;
                  }
                break;
              case 2940:
                if (len == 5)
                  {
                    resword = &wordlist[831];
                    goto compare;
                  }
                break;
              case 2941:
                if (len == 5)
                  {
                    resword = &wordlist[832];
                    goto compare;
                  }
                break;
              case 2943:
                if (len == 5)
                  {
                    resword = &wordlist[833];
                    goto compare;
                  }
                break;
              case 2944:
                if (len == 5)
                  {
                    resword = &wordlist[834];
                    goto compare;
                  }
                break;
              case 2946:
                if (len == 3)
                  {
                    resword = &wordlist[835];
                    goto compare;
                  }
                break;
              case 2954:
                if (len == 9)
                  {
                    resword = &wordlist[836];
                    goto compare;
                  }
                break;
              case 2960:
                if (len == 5)
                  {
                    resword = &wordlist[837];
                    goto compare;
                  }
                break;
              case 2967:
                if (len == 14)
                  {
                    resword = &wordlist[838];
                    goto compare;
                  }
                break;
              case 2968:
                if (len == 6)
                  {
                    resword = &wordlist[839];
                    goto compare;
                  }
                break;
              case 2974:
                if (len == 16)
                  {
                    resword = &wordlist[840];
                    goto compare;
                  }
                break;
              case 2983:
                if (len == 21)
                  {
                    resword = &wordlist[841];
                    goto compare;
                  }
                break;
              case 2988:
                if (len == 5)
                  {
                    resword = &wordlist[842];
                    goto compare;
                  }
                break;
              case 2993:
                if (len == 4)
                  {
                    resword = &wordlist[843];
                    goto compare;
                  }
                break;
              case 2995:
                if (len == 6)
                  {
                    resword = &wordlist[844];
                    goto compare;
                  }
                break;
              case 2999:
                if (len == 12)
                  {
                    resword = &wordlist[845];
                    goto compare;
                  }
                break;
              case 3002:
                if (len == 6)
                  {
                    resword = &wordlist[846];
                    goto compare;
                  }
                break;
              case 3004:
                if (len == 4)
                  {
                    resword = &wordlist[847];
                    goto compare;
                  }
                break;
              case 3011:
                if (len == 5)
                  {
                    resword = &wordlist[848];
                    goto compare;
                  }
                break;
              case 3012:
                if (len == 5)
                  {
                    resword = &wordlist[849];
                    goto compare;
                  }
                break;
              case 3015:
                if (len == 5)
                  {
                    resword = &wordlist[850];
                    goto compare;
                  }
                break;
              case 3021:
                if (len == 5)
                  {
                    resword = &wordlist[851];
                    goto compare;
                  }
                break;
              case 3028:
                if (len == 3)
                  {
                    resword = &wordlist[852];
                    goto compare;
                  }
                break;
              case 3038:
                if (len == 5)
                  {
                    resword = &wordlist[853];
                    goto compare;
                  }
                break;
              case 3046:
                if (len == 4)
                  {
                    resword = &wordlist[854];
                    goto compare;
                  }
                break;
              case 3056:
                if (len == 14)
                  {
                    resword = &wordlist[855];
                    goto compare;
                  }
                break;
              case 3065:
                if (len == 8)
                  {
                    resword = &wordlist[856];
                    goto compare;
                  }
                break;
              case 3066:
                if (len == 4)
                  {
                    resword = &wordlist[857];
                    goto compare;
                  }
                break;
              case 3079:
                if (len == 3)
                  {
                    resword = &wordlist[858];
                    goto compare;
                  }
                break;
              case 3083:
                if (len == 5)
                  {
                    resword = &wordlist[859];
                    goto compare;
                  }
                break;
              case 3084:
                if (len == 4)
                  {
                    resword = &wordlist[860];
                    goto compare;
                  }
                break;
              case 3092:
                if (len == 2)
                  {
                    resword = &wordlist[861];
                    goto compare;
                  }
                break;
              case 3093:
                if (len == 6)
                  {
                    resword = &wordlist[862];
                    goto compare;
                  }
                break;
              case 3101:
                if (len == 6)
                  {
                    resword = &wordlist[863];
                    goto compare;
                  }
                break;
              case 3103:
                if (len == 4)
                  {
                    resword = &wordlist[864];
                    goto compare;
                  }
                break;
              case 3105:
                if (len == 6)
                  {
                    resword = &wordlist[865];
                    goto compare;
                  }
                break;
              case 3111:
                if (len == 9)
                  {
                    resword = &wordlist[866];
                    goto compare;
                  }
                break;
              case 3113:
                if (len == 5)
                  {
                    resword = &wordlist[867];
                    goto compare;
                  }
                break;
              case 3114:
                if (len == 7)
                  {
                    resword = &wordlist[868];
                    goto compare;
                  }
                break;
              case 3117:
                if (len == 10)
                  {
                    resword = &wordlist[869];
                    goto compare;
                  }
                break;
              case 3125:
                if (len == 10)
                  {
                    resword = &wordlist[870];
                    goto compare;
                  }
                break;
              case 3126:
                if (len == 6)
                  {
                    resword = &wordlist[871];
                    goto compare;
                  }
                break;
              case 3129:
                if (len == 6)
                  {
                    resword = &wordlist[872];
                    goto compare;
                  }
                break;
              case 3131:
                if (len == 6)
                  {
                    resword = &wordlist[873];
                    goto compare;
                  }
                break;
              case 3142:
                if (len == 2)
                  {
                    resword = &wordlist[874];
                    goto compare;
                  }
                break;
              case 3146:
                if (len == 5)
                  {
                    resword = &wordlist[875];
                    goto compare;
                  }
                break;
              case 3147:
                if (len == 8)
                  {
                    resword = &wordlist[876];
                    goto compare;
                  }
                break;
              case 3149:
                if (len == 5)
                  {
                    resword = &wordlist[877];
                    goto compare;
                  }
                break;
              case 3157:
                if (len == 3)
                  {
                    resword = &wordlist[878];
                    goto compare;
                  }
                break;
              case 3165:
                if (len == 6)
                  {
                    resword = &wordlist[879];
                    goto compare;
                  }
                break;
              case 3169:
                if (len == 6)
                  {
                    resword = &wordlist[880];
                    goto compare;
                  }
                break;
              case 3170:
                if (len == 9)
                  {
                    resword = &wordlist[881];
                    goto compare;
                  }
                break;
              case 3173:
                if (len == 3)
                  {
                    resword = &wordlist[882];
                    goto compare;
                  }
                break;
              case 3183:
                if (len == 5)
                  {
                    resword = &wordlist[883];
                    goto compare;
                  }
                break;
              case 3191:
                if (len == 7)
                  {
                    resword = &wordlist[884];
                    goto compare;
                  }
                break;
              case 3194:
                if (len == 6)
                  {
                    resword = &wordlist[885];
                    goto compare;
                  }
                break;
              case 3195:
                if (len == 13)
                  {
                    resword = &wordlist[886];
                    goto compare;
                  }
                break;
              case 3216:
                if (len == 3)
                  {
                    resword = &wordlist[887];
                    goto compare;
                  }
                break;
              case 3217:
                if (len == 4)
                  {
                    resword = &wordlist[888];
                    goto compare;
                  }
                break;
              case 3219:
                if (len == 9)
                  {
                    resword = &wordlist[889];
                    goto compare;
                  }
                break;
              case 3221:
                if (len == 4)
                  {
                    resword = &wordlist[890];
                    goto compare;
                  }
                break;
              case 3226:
                if (len == 4)
                  {
                    resword = &wordlist[891];
                    goto compare;
                  }
                break;
              case 3227:
                if (len == 6)
                  {
                    resword = &wordlist[892];
                    goto compare;
                  }
                break;
              case 3229:
                if (len == 5)
                  {
                    resword = &wordlist[893];
                    goto compare;
                  }
                break;
              case 3232:
                if (len == 4)
                  {
                    resword = &wordlist[894];
                    goto compare;
                  }
                break;
              case 3236:
                if (len == 5)
                  {
                    resword = &wordlist[895];
                    goto compare;
                  }
                break;
              case 3240:
                if (len == 7)
                  {
                    resword = &wordlist[896];
                    goto compare;
                  }
                break;
              case 3247:
                if (len == 7)
                  {
                    resword = &wordlist[897];
                    goto compare;
                  }
                break;
              case 3256:
                if (len == 7)
                  {
                    resword = &wordlist[898];
                    goto compare;
                  }
                break;
              case 3257:
                if (len == 5)
                  {
                    resword = &wordlist[899];
                    goto compare;
                  }
                break;
              case 3262:
                if (len == 5)
                  {
                    resword = &wordlist[900];
                    goto compare;
                  }
                break;
              case 3265:
                if (len == 5)
                  {
                    resword = &wordlist[901];
                    goto compare;
                  }
                break;
              case 3269:
                if (len == 4)
                  {
                    resword = &wordlist[902];
                    goto compare;
                  }
                break;
              case 3272:
                if (len == 16)
                  {
                    resword = &wordlist[903];
                    goto compare;
                  }
                break;
              case 3275:
                if (len == 5)
                  {
                    resword = &wordlist[904];
                    goto compare;
                  }
                break;
              case 3276:
                if (len == 9)
                  {
                    resword = &wordlist[905];
                    goto compare;
                  }
                break;
              case 3280:
                if (len == 6)
                  {
                    resword = &wordlist[906];
                    goto compare;
                  }
                break;
              case 3281:
                if (len == 8)
                  {
                    resword = &wordlist[907];
                    goto compare;
                  }
                break;
              case 3293:
                if (len == 5)
                  {
                    resword = &wordlist[908];
                    goto compare;
                  }
                break;
              case 3297:
                if (len == 6)
                  {
                    resword = &wordlist[909];
                    goto compare;
                  }
                break;
              case 3298:
                if (len == 8)
                  {
                    resword = &wordlist[910];
                    goto compare;
                  }
                break;
              case 3299:
                if (len == 8)
                  {
                    resword = &wordlist[911];
                    goto compare;
                  }
                break;
              case 3301:
                if (len == 8)
                  {
                    resword = &wordlist[912];
                    goto compare;
                  }
                break;
              case 3315:
                if (len == 8)
                  {
                    resword = &wordlist[913];
                    goto compare;
                  }
                break;
              case 3317:
                if (len == 6)
                  {
                    resword = &wordlist[914];
                    goto compare;
                  }
                break;
              case 3325:
                if (len == 13)
                  {
                    resword = &wordlist[915];
                    goto compare;
                  }
                break;
              case 3330:
                if (len == 9)
                  {
                    resword = &wordlist[916];
                    goto compare;
                  }
                break;
              case 3337:
                if (len == 6)
                  {
                    resword = &wordlist[917];
                    goto compare;
                  }
                break;
              case 3353:
                if (len == 2)
                  {
                    resword = &wordlist[918];
                    goto compare;
                  }
                break;
              case 3356:
                if (len == 5)
                  {
                    resword = &wordlist[919];
                    goto compare;
                  }
                break;
              case 3359:
                if (len == 10)
                  {
                    resword = &wordlist[920];
                    goto compare;
                  }
                break;
              case 3366:
                if (len == 5)
                  {
                    resword = &wordlist[921];
                    goto compare;
                  }
                break;
              case 3369:
                if (len == 5)
                  {
                    resword = &wordlist[922];
                    goto compare;
                  }
                break;
              case 3371:
                if (len == 5)
                  {
                    resword = &wordlist[923];
                    goto compare;
                  }
                break;
              case 3372:
                if (len == 6)
                  {
                    resword = &wordlist[924];
                    goto compare;
                  }
                break;
              case 3373:
                if (len == 8)
                  {
                    resword = &wordlist[925];
                    goto compare;
                  }
                break;
              case 3374:
                if (len == 7)
                  {
                    resword = &wordlist[926];
                    goto compare;
                  }
                break;
              case 3375:
                if (len == 6)
                  {
                    resword = &wordlist[927];
                    goto compare;
                  }
                break;
              case 3377:
                if (len == 8)
                  {
                    resword = &wordlist[928];
                    goto compare;
                  }
                break;
              case 3380:
                if (len == 17)
                  {
                    resword = &wordlist[929];
                    goto compare;
                  }
                break;
              case 3384:
                if (len == 17)
                  {
                    resword = &wordlist[930];
                    goto compare;
                  }
                break;
              case 3388:
                if (len == 14)
                  {
                    resword = &wordlist[931];
                    goto compare;
                  }
                break;
              case 3391:
                if (len == 20)
                  {
                    resword = &wordlist[932];
                    goto compare;
                  }
                break;
              case 3397:
                if (len == 19)
                  {
                    resword = &wordlist[933];
                    goto compare;
                  }
                break;
              case 3401:
                if (len == 4)
                  {
                    resword = &wordlist[934];
                    goto compare;
                  }
                break;
              case 3405:
                if (len == 5)
                  {
                    resword = &wordlist[935];
                    goto compare;
                  }
                break;
              case 3406:
                if (len == 5)
                  {
                    resword = &wordlist[936];
                    goto compare;
                  }
                break;
              case 3408:
                if (len == 4)
                  {
                    resword = &wordlist[937];
                    goto compare;
                  }
                break;
              case 3410:
                if (len == 4)
                  {
                    resword = &wordlist[938];
                    goto compare;
                  }
                break;
              case 3416:
                if (len == 4)
                  {
                    resword = &wordlist[939];
                    goto compare;
                  }
                break;
              case 3417:
                if (len == 6)
                  {
                    resword = &wordlist[940];
                    goto compare;
                  }
                break;
              case 3419:
                if (len == 4)
                  {
                    resword = &wordlist[941];
                    goto compare;
                  }
                break;
              case 3420:
                if (len == 6)
                  {
                    resword = &wordlist[942];
                    goto compare;
                  }
                break;
              case 3422:
                if (len == 4)
                  {
                    resword = &wordlist[943];
                    goto compare;
                  }
                break;
              case 3423:
                if (len == 5)
                  {
                    resword = &wordlist[944];
                    goto compare;
                  }
                break;
              case 3424:
                if (len == 5)
                  {
                    resword = &wordlist[945];
                    goto compare;
                  }
                break;
              case 3428:
                if (len == 3)
                  {
                    resword = &wordlist[946];
                    goto compare;
                  }
                break;
              case 3430:
                if (len == 5)
                  {
                    resword = &wordlist[947];
                    goto compare;
                  }
                break;
              case 3432:
                if (len == 5)
                  {
                    resword = &wordlist[948];
                    goto compare;
                  }
                break;
              case 3436:
                if (len == 5)
                  {
                    resword = &wordlist[949];
                    goto compare;
                  }
                break;
              case 3437:
                if (len == 5)
                  {
                    resword = &wordlist[950];
                    goto compare;
                  }
                break;
              case 3439:
                if (len == 15)
                  {
                    resword = &wordlist[951];
                    goto compare;
                  }
                break;
              case 3440:
                if (len == 6)
                  {
                    resword = &wordlist[952];
                    goto compare;
                  }
                break;
              case 3445:
                if (len == 20)
                  {
                    resword = &wordlist[953];
                    goto compare;
                  }
                break;
              case 3448:
                if (len == 4)
                  {
                    resword = &wordlist[954];
                    goto compare;
                  }
                break;
              case 3450:
                if (len == 5)
                  {
                    resword = &wordlist[955];
                    goto compare;
                  }
                break;
              case 3451:
                if (len == 6)
                  {
                    resword = &wordlist[956];
                    goto compare;
                  }
                break;
              case 3452:
                if (len == 6)
                  {
                    resword = &wordlist[957];
                    goto compare;
                  }
                break;
              case 3454:
                if (len == 4)
                  {
                    resword = &wordlist[958];
                    goto compare;
                  }
                break;
              case 3455:
                if (len == 4)
                  {
                    resword = &wordlist[959];
                    goto compare;
                  }
                break;
              case 3456:
                if (len == 5)
                  {
                    resword = &wordlist[960];
                    goto compare;
                  }
                break;
              case 3457:
                if (len == 4)
                  {
                    resword = &wordlist[961];
                    goto compare;
                  }
                break;
              case 3458:
                if (len == 4)
                  {
                    resword = &wordlist[962];
                    goto compare;
                  }
                break;
              case 3461:
                if (len == 6)
                  {
                    resword = &wordlist[963];
                    goto compare;
                  }
                break;
              case 3468:
                if (len == 4)
                  {
                    resword = &wordlist[964];
                    goto compare;
                  }
                break;
              case 3472:
                if (len == 3)
                  {
                    resword = &wordlist[965];
                    goto compare;
                  }
                break;
              case 3473:
                if (len == 7)
                  {
                    resword = &wordlist[966];
                    goto compare;
                  }
                break;
              case 3475:
                if (len == 3)
                  {
                    resword = &wordlist[967];
                    goto compare;
                  }
                break;
              case 3477:
                if (len == 4)
                  {
                    resword = &wordlist[968];
                    goto compare;
                  }
                break;
              case 3488:
                if (len == 6)
                  {
                    resword = &wordlist[969];
                    goto compare;
                  }
                break;
              case 3489:
                if (len == 2)
                  {
                    resword = &wordlist[970];
                    goto compare;
                  }
                break;
              case 3491:
                if (len == 17)
                  {
                    resword = &wordlist[971];
                    goto compare;
                  }
                break;
              case 3492:
                if (len == 4)
                  {
                    resword = &wordlist[972];
                    goto compare;
                  }
                break;
              case 3497:
                if (len == 22)
                  {
                    resword = &wordlist[973];
                    goto compare;
                  }
                break;
              case 3498:
                if (len == 2)
                  {
                    resword = &wordlist[974];
                    goto compare;
                  }
                break;
              case 3501:
                if (len == 5)
                  {
                    resword = &wordlist[975];
                    goto compare;
                  }
                break;
              case 3503:
                if (len == 5)
                  {
                    resword = &wordlist[976];
                    goto compare;
                  }
                break;
              case 3509:
                if (len == 7)
                  {
                    resword = &wordlist[977];
                    goto compare;
                  }
                break;
              case 3511:
                if (len == 5)
                  {
                    resword = &wordlist[978];
                    goto compare;
                  }
                break;
              case 3516:
                if (len == 4)
                  {
                    resword = &wordlist[979];
                    goto compare;
                  }
                break;
              case 3519:
                if (len == 5)
                  {
                    resword = &wordlist[980];
                    goto compare;
                  }
                break;
              case 3526:
                if (len == 8)
                  {
                    resword = &wordlist[981];
                    goto compare;
                  }
                break;
              case 3528:
                if (len == 12)
                  {
                    resword = &wordlist[982];
                    goto compare;
                  }
                break;
              case 3531:
                if (len == 15)
                  {
                    resword = &wordlist[983];
                    goto compare;
                  }
                break;
              case 3539:
                if (len == 6)
                  {
                    resword = &wordlist[984];
                    goto compare;
                  }
                break;
              case 3540:
                if (len == 5)
                  {
                    resword = &wordlist[985];
                    goto compare;
                  }
                break;
              case 3541:
                if (len == 6)
                  {
                    resword = &wordlist[986];
                    goto compare;
                  }
                break;
              case 3542:
                if (len == 5)
                  {
                    resword = &wordlist[987];
                    goto compare;
                  }
                break;
              case 3558:
                if (len == 7)
                  {
                    resword = &wordlist[988];
                    goto compare;
                  }
                break;
              case 3560:
                if (len == 6)
                  {
                    resword = &wordlist[989];
                    goto compare;
                  }
                break;
              case 3565:
                if (len == 15)
                  {
                    resword = &wordlist[990];
                    goto compare;
                  }
                break;
              case 3567:
                if (len == 6)
                  {
                    resword = &wordlist[991];
                    goto compare;
                  }
                break;
              case 3568:
                if (len == 7)
                  {
                    resword = &wordlist[992];
                    goto compare;
                  }
                break;
              case 3569:
                if (len == 6)
                  {
                    resword = &wordlist[993];
                    goto compare;
                  }
                break;
              case 3571:
                if (len == 4)
                  {
                    resword = &wordlist[994];
                    goto compare;
                  }
                break;
              case 3572:
                if (len == 4)
                  {
                    resword = &wordlist[995];
                    goto compare;
                  }
                break;
              case 3573:
                if (len == 4)
                  {
                    resword = &wordlist[996];
                    goto compare;
                  }
                break;
              case 3577:
                if (len == 5)
                  {
                    resword = &wordlist[997];
                    goto compare;
                  }
                break;
              case 3587:
                if (len == 6)
                  {
                    resword = &wordlist[998];
                    goto compare;
                  }
                break;
              case 3588:
                if (len == 13)
                  {
                    resword = &wordlist[999];
                    goto compare;
                  }
                break;
              case 3589:
                if (len == 16)
                  {
                    resword = &wordlist[1000];
                    goto compare;
                  }
                break;
              case 3593:
                if (len == 3)
                  {
                    resword = &wordlist[1001];
                    goto compare;
                  }
                break;
              case 3594:
                if (len == 11)
                  {
                    resword = &wordlist[1002];
                    goto compare;
                  }
                break;
              case 3598:
                if (len == 5)
                  {
                    resword = &wordlist[1003];
                    goto compare;
                  }
                break;
              case 3601:
                if (len == 7)
                  {
                    resword = &wordlist[1004];
                    goto compare;
                  }
                break;
              case 3603:
                if (len == 5)
                  {
                    resword = &wordlist[1005];
                    goto compare;
                  }
                break;
              case 3610:
                if (len == 6)
                  {
                    resword = &wordlist[1006];
                    goto compare;
                  }
                break;
              case 3611:
                if (len == 9)
                  {
                    resword = &wordlist[1007];
                    goto compare;
                  }
                break;
              case 3613:
                if (len == 8)
                  {
                    resword = &wordlist[1008];
                    goto compare;
                  }
                break;
              case 3622:
                if (len == 4)
                  {
                    resword = &wordlist[1009];
                    goto compare;
                  }
                break;
              case 3625:
                if (len == 13)
                  {
                    resword = &wordlist[1010];
                    goto compare;
                  }
                break;
              case 3627:
                if (len == 7)
                  {
                    resword = &wordlist[1011];
                    goto compare;
                  }
                break;
              case 3628:
                if (len == 6)
                  {
                    resword = &wordlist[1012];
                    goto compare;
                  }
                break;
              case 3638:
                if (len == 6)
                  {
                    resword = &wordlist[1013];
                    goto compare;
                  }
                break;
              case 3639:
                if (len == 13)
                  {
                    resword = &wordlist[1014];
                    goto compare;
                  }
                break;
              case 3640:
                if (len == 6)
                  {
                    resword = &wordlist[1015];
                    goto compare;
                  }
                break;
              case 3641:
                if (len == 3)
                  {
                    resword = &wordlist[1016];
                    goto compare;
                  }
                break;
              case 3648:
                if (len == 8)
                  {
                    resword = &wordlist[1017];
                    goto compare;
                  }
                break;
              case 3654:
                if (len == 4)
                  {
                    resword = &wordlist[1018];
                    goto compare;
                  }
                break;
              case 3656:
                if (len == 17)
                  {
                    resword = &wordlist[1019];
                    goto compare;
                  }
                break;
              case 3663:
                if (len == 6)
                  {
                    resword = &wordlist[1020];
                    goto compare;
                  }
                break;
              case 3667:
                if (len == 5)
                  {
                    resword = &wordlist[1021];
                    goto compare;
                  }
                break;
              case 3669:
                if (len == 2)
                  {
                    resword = &wordlist[1022];
                    goto compare;
                  }
                break;
              case 3673:
                if (len == 8)
                  {
                    resword = &wordlist[1023];
                    goto compare;
                  }
                break;
              case 3674:
                if (len == 5)
                  {
                    resword = &wordlist[1024];
                    goto compare;
                  }
                break;
              case 3676:
                if (len == 6)
                  {
                    resword = &wordlist[1025];
                    goto compare;
                  }
                break;
              case 3677:
                if (len == 4)
                  {
                    resword = &wordlist[1026];
                    goto compare;
                  }
                break;
              case 3678:
                if (len == 6)
                  {
                    resword = &wordlist[1027];
                    goto compare;
                  }
                break;
              case 3679:
                if (len == 5)
                  {
                    resword = &wordlist[1028];
                    goto compare;
                  }
                break;
              case 3680:
                if (len == 4)
                  {
                    resword = &wordlist[1029];
                    goto compare;
                  }
                break;
              case 3686:
                if (len == 3)
                  {
                    resword = &wordlist[1030];
                    goto compare;
                  }
                break;
              case 3688:
                if (len == 3)
                  {
                    resword = &wordlist[1031];
                    goto compare;
                  }
                break;
              case 3689:
                if (len == 4)
                  {
                    resword = &wordlist[1032];
                    goto compare;
                  }
                break;
              case 3698:
                if (len == 6)
                  {
                    resword = &wordlist[1033];
                    goto compare;
                  }
                break;
              case 3699:
                if (len == 6)
                  {
                    resword = &wordlist[1034];
                    goto compare;
                  }
                break;
              case 3704:
                if (len == 15)
                  {
                    resword = &wordlist[1035];
                    goto compare;
                  }
                break;
              case 3711:
                if (len == 4)
                  {
                    resword = &wordlist[1036];
                    goto compare;
                  }
                break;
              case 3713:
                if (len == 4)
                  {
                    resword = &wordlist[1037];
                    goto compare;
                  }
                break;
              case 3716:
                if (len == 6)
                  {
                    resword = &wordlist[1038];
                    goto compare;
                  }
                break;
              case 3720:
                if (len == 4)
                  {
                    resword = &wordlist[1039];
                    goto compare;
                  }
                break;
              case 3723:
                if (len == 6)
                  {
                    resword = &wordlist[1040];
                    goto compare;
                  }
                break;
              case 3725:
                if (len == 8)
                  {
                    resword = &wordlist[1041];
                    goto compare;
                  }
                break;
              case 3726:
                if (len == 4)
                  {
                    resword = &wordlist[1042];
                    goto compare;
                  }
                break;
              case 3729:
                if (len == 5)
                  {
                    resword = &wordlist[1043];
                    goto compare;
                  }
                break;
              case 3739:
                if (len == 5)
                  {
                    resword = &wordlist[1044];
                    goto compare;
                  }
                break;
              case 3745:
                if (len == 5)
                  {
                    resword = &wordlist[1045];
                    goto compare;
                  }
                break;
              case 3761:
                if (len == 6)
                  {
                    resword = &wordlist[1046];
                    goto compare;
                  }
                break;
              case 3766:
                if (len == 7)
                  {
                    resword = &wordlist[1047];
                    goto compare;
                  }
                break;
              case 3773:
                if (len == 4)
                  {
                    resword = &wordlist[1048];
                    goto compare;
                  }
                break;
              case 3776:
                if (len == 4)
                  {
                    resword = &wordlist[1049];
                    goto compare;
                  }
                break;
              case 3781:
                if (len == 8)
                  {
                    resword = &wordlist[1050];
                    goto compare;
                  }
                break;
              case 3784:
                if (len == 4)
                  {
                    resword = &wordlist[1051];
                    goto compare;
                  }
                break;
              case 3786:
                if (len == 4)
                  {
                    resword = &wordlist[1052];
                    goto compare;
                  }
                break;
              case 3787:
                if (len == 16)
                  {
                    resword = &wordlist[1053];
                    goto compare;
                  }
                break;
              case 3788:
                if (len == 5)
                  {
                    resword = &wordlist[1054];
                    goto compare;
                  }
                break;
              case 3793:
                if (len == 4)
                  {
                    resword = &wordlist[1055];
                    goto compare;
                  }
                break;
              case 3794:
                if (len == 5)
                  {
                    resword = &wordlist[1056];
                    goto compare;
                  }
                break;
              case 3795:
                if (len == 6)
                  {
                    resword = &wordlist[1057];
                    goto compare;
                  }
                break;
              case 3798:
                if (len == 5)
                  {
                    resword = &wordlist[1058];
                    goto compare;
                  }
                break;
              case 3800:
                if (len == 6)
                  {
                    resword = &wordlist[1059];
                    goto compare;
                  }
                break;
              case 3801:
                if (len == 5)
                  {
                    resword = &wordlist[1060];
                    goto compare;
                  }
                break;
              case 3803:
                if (len == 7)
                  {
                    resword = &wordlist[1061];
                    goto compare;
                  }
                break;
              case 3805:
                if (len == 4)
                  {
                    resword = &wordlist[1062];
                    goto compare;
                  }
                break;
              case 3807:
                if (len == 5)
                  {
                    resword = &wordlist[1063];
                    goto compare;
                  }
                break;
              case 3808:
                if (len == 5)
                  {
                    resword = &wordlist[1064];
                    goto compare;
                  }
                break;
              case 3813:
                if (len == 7)
                  {
                    resword = &wordlist[1065];
                    goto compare;
                  }
                break;
              case 3814:
                if (len == 6)
                  {
                    resword = &wordlist[1066];
                    goto compare;
                  }
                break;
              case 3826:
                if (len == 5)
                  {
                    resword = &wordlist[1067];
                    goto compare;
                  }
                break;
              case 3827:
                if (len == 6)
                  {
                    resword = &wordlist[1068];
                    goto compare;
                  }
                break;
              case 3829:
                if (len == 6)
                  {
                    resword = &wordlist[1069];
                    goto compare;
                  }
                break;
              case 3830:
                if (len == 6)
                  {
                    resword = &wordlist[1070];
                    goto compare;
                  }
                break;
              case 3831:
                if (len == 6)
                  {
                    resword = &wordlist[1071];
                    goto compare;
                  }
                break;
              case 3833:
                if (len == 3)
                  {
                    resword = &wordlist[1072];
                    goto compare;
                  }
                break;
              case 3834:
                if (len == 7)
                  {
                    resword = &wordlist[1073];
                    goto compare;
                  }
                break;
              case 3835:
                if (len == 3)
                  {
                    resword = &wordlist[1074];
                    goto compare;
                  }
                break;
              case 3836:
                if (len == 6)
                  {
                    resword = &wordlist[1075];
                    goto compare;
                  }
                break;
              case 3840:
                if (len == 6)
                  {
                    resword = &wordlist[1076];
                    goto compare;
                  }
                break;
              case 3850:
                if (len == 6)
                  {
                    resword = &wordlist[1077];
                    goto compare;
                  }
                break;
              case 3859:
                if (len == 6)
                  {
                    resword = &wordlist[1078];
                    goto compare;
                  }
                break;
              case 3860:
                if (len == 5)
                  {
                    resword = &wordlist[1079];
                    goto compare;
                  }
                break;
              case 3862:
                if (len == 5)
                  {
                    resword = &wordlist[1080];
                    goto compare;
                  }
                break;
              case 3863:
                if (len == 17)
                  {
                    resword = &wordlist[1081];
                    goto compare;
                  }
                break;
              case 3868:
                if (len == 6)
                  {
                    resword = &wordlist[1082];
                    goto compare;
                  }
                break;
              case 3880:
                if (len == 5)
                  {
                    resword = &wordlist[1083];
                    goto compare;
                  }
                break;
              case 3883:
                if (len == 6)
                  {
                    resword = &wordlist[1084];
                    goto compare;
                  }
                break;
              case 3885:
                if (len == 6)
                  {
                    resword = &wordlist[1085];
                    goto compare;
                  }
                break;
              case 3887:
                if (len == 6)
                  {
                    resword = &wordlist[1086];
                    goto compare;
                  }
                break;
              case 3889:
                if (len == 24)
                  {
                    resword = &wordlist[1087];
                    goto compare;
                  }
                break;
              case 3898:
                if (len == 6)
                  {
                    resword = &wordlist[1088];
                    goto compare;
                  }
                break;
              case 3905:
                if (len == 5)
                  {
                    resword = &wordlist[1089];
                    goto compare;
                  }
                break;
              case 3910:
                if (len == 4)
                  {
                    resword = &wordlist[1090];
                    goto compare;
                  }
                break;
              case 3912:
                if (len == 3)
                  {
                    resword = &wordlist[1091];
                    goto compare;
                  }
                break;
              case 3914:
                if (len == 16)
                  {
                    resword = &wordlist[1092];
                    goto compare;
                  }
                break;
              case 3930:
                if (len == 4)
                  {
                    resword = &wordlist[1093];
                    goto compare;
                  }
                break;
              case 3933:
                if (len == 6)
                  {
                    resword = &wordlist[1094];
                    goto compare;
                  }
                break;
              case 3934:
                if (len == 11)
                  {
                    resword = &wordlist[1095];
                    goto compare;
                  }
                break;
              case 3935:
                if (len == 6)
                  {
                    resword = &wordlist[1096];
                    goto compare;
                  }
                break;
              case 3942:
                if (len == 6)
                  {
                    resword = &wordlist[1097];
                    goto compare;
                  }
                break;
              case 3944:
                if (len == 8)
                  {
                    resword = &wordlist[1098];
                    goto compare;
                  }
                break;
              case 3945:
                if (len == 6)
                  {
                    resword = &wordlist[1099];
                    goto compare;
                  }
                break;
              case 3947:
                if (len == 3)
                  {
                    resword = &wordlist[1100];
                    goto compare;
                  }
                break;
              case 3948:
                if (len == 6)
                  {
                    resword = &wordlist[1101];
                    goto compare;
                  }
                break;
              case 3955:
                if (len == 13)
                  {
                    resword = &wordlist[1102];
                    goto compare;
                  }
                break;
              case 3957:
                if (len == 4)
                  {
                    resword = &wordlist[1103];
                    goto compare;
                  }
                break;
              case 3958:
                if (len == 14)
                  {
                    resword = &wordlist[1104];
                    goto compare;
                  }
                break;
              case 3961:
                if (len == 10)
                  {
                    resword = &wordlist[1105];
                    goto compare;
                  }
                break;
              case 3962:
                if (len == 4)
                  {
                    resword = &wordlist[1106];
                    goto compare;
                  }
                break;
              case 3973:
                if (len == 14)
                  {
                    resword = &wordlist[1107];
                    goto compare;
                  }
                break;
              case 3974:
                if (len == 6)
                  {
                    resword = &wordlist[1108];
                    goto compare;
                  }
                break;
              case 3975:
                if (len == 7)
                  {
                    resword = &wordlist[1109];
                    goto compare;
                  }
                break;
              case 3976:
                if (len == 6)
                  {
                    resword = &wordlist[1110];
                    goto compare;
                  }
                break;
              case 3983:
                if (len == 6)
                  {
                    resword = &wordlist[1111];
                    goto compare;
                  }
                break;
              case 3988:
                if (len == 5)
                  {
                    resword = &wordlist[1112];
                    goto compare;
                  }
                break;
              case 3990:
                if (len == 6)
                  {
                    resword = &wordlist[1113];
                    goto compare;
                  }
                break;
              case 4005:
                if (len == 6)
                  {
                    resword = &wordlist[1114];
                    goto compare;
                  }
                break;
              case 4014:
                if (len == 4)
                  {
                    resword = &wordlist[1115];
                    goto compare;
                  }
                break;
              case 4021:
                if (len == 3)
                  {
                    resword = &wordlist[1116];
                    goto compare;
                  }
                break;
              case 4024:
                if (len == 3)
                  {
                    resword = &wordlist[1117];
                    goto compare;
                  }
                break;
              case 4027:
                if (len == 4)
                  {
                    resword = &wordlist[1118];
                    goto compare;
                  }
                break;
              case 4029:
                if (len == 10)
                  {
                    resword = &wordlist[1119];
                    goto compare;
                  }
                break;
              case 4032:
                if (len == 3)
                  {
                    resword = &wordlist[1120];
                    goto compare;
                  }
                break;
              case 4039:
                if (len == 3)
                  {
                    resword = &wordlist[1121];
                    goto compare;
                  }
                break;
              case 4040:
                if (len == 14)
                  {
                    resword = &wordlist[1122];
                    goto compare;
                  }
                break;
              case 4041:
                if (len == 6)
                  {
                    resword = &wordlist[1123];
                    goto compare;
                  }
                break;
              case 4042:
                if (len == 5)
                  {
                    resword = &wordlist[1124];
                    goto compare;
                  }
                break;
              case 4043:
                if (len == 6)
                  {
                    resword = &wordlist[1125];
                    goto compare;
                  }
                break;
              case 4046:
                if (len == 5)
                  {
                    resword = &wordlist[1126];
                    goto compare;
                  }
                break;
              case 4047:
                if (len == 5)
                  {
                    resword = &wordlist[1127];
                    goto compare;
                  }
                break;
              case 4054:
                if (len == 14)
                  {
                    resword = &wordlist[1128];
                    goto compare;
                  }
                break;
              case 4058:
                if (len == 4)
                  {
                    resword = &wordlist[1129];
                    goto compare;
                  }
                break;
              case 4062:
                if (len == 6)
                  {
                    resword = &wordlist[1130];
                    goto compare;
                  }
                break;
              case 4065:
                if (len == 5)
                  {
                    resword = &wordlist[1131];
                    goto compare;
                  }
                break;
              case 4066:
                if (len == 4)
                  {
                    resword = &wordlist[1132];
                    goto compare;
                  }
                break;
              case 4074:
                if (len == 7)
                  {
                    resword = &wordlist[1133];
                    goto compare;
                  }
                break;
              case 4077:
                if (len == 9)
                  {
                    resword = &wordlist[1134];
                    goto compare;
                  }
                break;
              case 4091:
                if (len == 4)
                  {
                    resword = &wordlist[1135];
                    goto compare;
                  }
                break;
              case 4098:
                if (len == 7)
                  {
                    resword = &wordlist[1136];
                    goto compare;
                  }
                break;
              case 4099:
                if (len == 5)
                  {
                    resword = &wordlist[1137];
                    goto compare;
                  }
                break;
              case 4106:
                if (len == 4)
                  {
                    resword = &wordlist[1138];
                    goto compare;
                  }
                break;
              case 4118:
                if (len == 13)
                  {
                    resword = &wordlist[1139];
                    goto compare;
                  }
                break;
              case 4123:
                if (len == 19)
                  {
                    resword = &wordlist[1140];
                    goto compare;
                  }
                break;
              case 4139:
                if (len == 10)
                  {
                    resword = &wordlist[1141];
                    goto compare;
                  }
                break;
              case 4145:
                if (len == 6)
                  {
                    resword = &wordlist[1142];
                    goto compare;
                  }
                break;
              case 4147:
                if (len == 4)
                  {
                    resword = &wordlist[1143];
                    goto compare;
                  }
                break;
              case 4148:
                if (len == 3)
                  {
                    resword = &wordlist[1144];
                    goto compare;
                  }
                break;
              case 4149:
                if (len == 12)
                  {
                    resword = &wordlist[1145];
                    goto compare;
                  }
                break;
              case 4150:
                if (len == 9)
                  {
                    resword = &wordlist[1146];
                    goto compare;
                  }
                break;
              case 4152:
                if (len == 6)
                  {
                    resword = &wordlist[1147];
                    goto compare;
                  }
                break;
              case 4154:
                if (len == 13)
                  {
                    resword = &wordlist[1148];
                    goto compare;
                  }
                break;
              case 4157:
                if (len == 3)
                  {
                    resword = &wordlist[1149];
                    goto compare;
                  }
                break;
              case 4160:
                if (len == 6)
                  {
                    resword = &wordlist[1150];
                    goto compare;
                  }
                break;
              case 4165:
                if (len == 8)
                  {
                    resword = &wordlist[1151];
                    goto compare;
                  }
                break;
              case 4173:
                if (len == 4)
                  {
                    resword = &wordlist[1152];
                    goto compare;
                  }
                break;
              case 4176:
                if (len == 4)
                  {
                    resword = &wordlist[1153];
                    goto compare;
                  }
                break;
              case 4178:
                if (len == 4)
                  {
                    resword = &wordlist[1154];
                    goto compare;
                  }
                break;
              case 4183:
                if (len == 4)
                  {
                    resword = &wordlist[1155];
                    goto compare;
                  }
                break;
              case 4191:
                if (len == 4)
                  {
                    resword = &wordlist[1156];
                    goto compare;
                  }
                break;
              case 4192:
                if (len == 5)
                  {
                    resword = &wordlist[1157];
                    goto compare;
                  }
                break;
              case 4193:
                if (len == 5)
                  {
                    resword = &wordlist[1158];
                    goto compare;
                  }
                break;
              case 4194:
                if (len == 9)
                  {
                    resword = &wordlist[1159];
                    goto compare;
                  }
                break;
              case 4195:
                if (len == 9)
                  {
                    resword = &wordlist[1160];
                    goto compare;
                  }
                break;
              case 4200:
                if (len == 13)
                  {
                    resword = &wordlist[1161];
                    goto compare;
                  }
                break;
              case 4207:
                if (len == 2)
                  {
                    resword = &wordlist[1162];
                    goto compare;
                  }
                break;
              case 4208:
                if (len == 19)
                  {
                    resword = &wordlist[1163];
                    goto compare;
                  }
                break;
              case 4213:
                if (len == 24)
                  {
                    resword = &wordlist[1164];
                    goto compare;
                  }
                break;
              case 4214:
                if (len == 14)
                  {
                    resword = &wordlist[1165];
                    goto compare;
                  }
                break;
              case 4225:
                if (len == 5)
                  {
                    resword = &wordlist[1166];
                    goto compare;
                  }
                break;
              case 4239:
                if (len == 5)
                  {
                    resword = &wordlist[1167];
                    goto compare;
                  }
                break;
              case 4248:
                if (len == 4)
                  {
                    resword = &wordlist[1168];
                    goto compare;
                  }
                break;
              case 4251:
                if (len == 4)
                  {
                    resword = &wordlist[1169];
                    goto compare;
                  }
                break;
              case 4253:
                if (len == 4)
                  {
                    resword = &wordlist[1170];
                    goto compare;
                  }
                break;
              case 4257:
                if (len == 7)
                  {
                    resword = &wordlist[1171];
                    goto compare;
                  }
                break;
              case 4259:
                if (len == 4)
                  {
                    resword = &wordlist[1172];
                    goto compare;
                  }
                break;
              case 4260:
                if (len == 8)
                  {
                    resword = &wordlist[1173];
                    goto compare;
                  }
                break;
              case 4265:
                if (len == 6)
                  {
                    resword = &wordlist[1174];
                    goto compare;
                  }
                break;
              case 4267:
                if (len == 3)
                  {
                    resword = &wordlist[1175];
                    goto compare;
                  }
                break;
              case 4273:
                if (len == 9)
                  {
                    resword = &wordlist[1176];
                    goto compare;
                  }
                break;
              case 4274:
                if (len == 8)
                  {
                    resword = &wordlist[1177];
                    goto compare;
                  }
                break;
              case 4275:
                if (len == 7)
                  {
                    resword = &wordlist[1178];
                    goto compare;
                  }
                break;
              case 4279:
                if (len == 5)
                  {
                    resword = &wordlist[1179];
                    goto compare;
                  }
                break;
              case 4282:
                if (len == 14)
                  {
                    resword = &wordlist[1180];
                    goto compare;
                  }
                break;
              case 4283:
                if (len == 5)
                  {
                    resword = &wordlist[1181];
                    goto compare;
                  }
                break;
              case 4288:
                if (len == 6)
                  {
                    resword = &wordlist[1182];
                    goto compare;
                  }
                break;
              case 4294:
                if (len == 2)
                  {
                    resword = &wordlist[1183];
                    goto compare;
                  }
                break;
              case 4296:
                if (len == 5)
                  {
                    resword = &wordlist[1184];
                    goto compare;
                  }
                break;
              case 4301:
                if (len == 4)
                  {
                    resword = &wordlist[1185];
                    goto compare;
                  }
                break;
              case 4313:
                if (len == 6)
                  {
                    resword = &wordlist[1186];
                    goto compare;
                  }
                break;
              case 4321:
                if (len == 4)
                  {
                    resword = &wordlist[1187];
                    goto compare;
                  }
                break;
              case 4322:
                if (len == 5)
                  {
                    resword = &wordlist[1188];
                    goto compare;
                  }
                break;
              case 4328:
                if (len == 5)
                  {
                    resword = &wordlist[1189];
                    goto compare;
                  }
                break;
              case 4334:
                if (len == 3)
                  {
                    resword = &wordlist[1190];
                    goto compare;
                  }
                break;
              case 4335:
                if (len == 5)
                  {
                    resword = &wordlist[1191];
                    goto compare;
                  }
                break;
              case 4339:
                if (len == 9)
                  {
                    resword = &wordlist[1192];
                    goto compare;
                  }
                break;
              case 4340:
                if (len == 7)
                  {
                    resword = &wordlist[1193];
                    goto compare;
                  }
                break;
              case 4343:
                if (len == 7)
                  {
                    resword = &wordlist[1194];
                    goto compare;
                  }
                break;
              case 4344:
                if (len == 4)
                  {
                    resword = &wordlist[1195];
                    goto compare;
                  }
                break;
              case 4348:
                if (len == 6)
                  {
                    resword = &wordlist[1196];
                    goto compare;
                  }
                break;
              case 4354:
                if (len == 4)
                  {
                    resword = &wordlist[1197];
                    goto compare;
                  }
                break;
              case 4357:
                if (len == 2)
                  {
                    resword = &wordlist[1198];
                    goto compare;
                  }
                break;
              case 4364:
                if (len == 2)
                  {
                    resword = &wordlist[1199];
                    goto compare;
                  }
                break;
              case 4373:
                if (len == 5)
                  {
                    resword = &wordlist[1200];
                    goto compare;
                  }
                break;
              case 4374:
                if (len == 14)
                  {
                    resword = &wordlist[1201];
                    goto compare;
                  }
                break;
              case 4375:
                if (len == 4)
                  {
                    resword = &wordlist[1202];
                    goto compare;
                  }
                break;
              case 4376:
                if (len == 15)
                  {
                    resword = &wordlist[1203];
                    goto compare;
                  }
                break;
              case 4377:
                if (len == 17)
                  {
                    resword = &wordlist[1204];
                    goto compare;
                  }
                break;
              case 4383:
                if (len == 3)
                  {
                    resword = &wordlist[1205];
                    goto compare;
                  }
                break;
              case 4390:
                if (len == 5)
                  {
                    resword = &wordlist[1206];
                    goto compare;
                  }
                break;
              case 4395:
                if (len == 3)
                  {
                    resword = &wordlist[1207];
                    goto compare;
                  }
                break;
              case 4396:
                if (len == 8)
                  {
                    resword = &wordlist[1208];
                    goto compare;
                  }
                break;
              case 4402:
                if (len == 5)
                  {
                    resword = &wordlist[1209];
                    goto compare;
                  }
                break;
              case 4403:
                if (len == 10)
                  {
                    resword = &wordlist[1210];
                    goto compare;
                  }
                break;
              case 4407:
                if (len == 4)
                  {
                    resword = &wordlist[1211];
                    goto compare;
                  }
                break;
              case 4409:
                if (len == 17)
                  {
                    resword = &wordlist[1212];
                    goto compare;
                  }
                break;
              case 4416:
                if (len == 6)
                  {
                    resword = &wordlist[1213];
                    goto compare;
                  }
                break;
              case 4419:
                if (len == 4)
                  {
                    resword = &wordlist[1214];
                    goto compare;
                  }
                break;
              case 4422:
                if (len == 4)
                  {
                    resword = &wordlist[1215];
                    goto compare;
                  }
                break;
              case 4423:
                if (len == 4)
                  {
                    resword = &wordlist[1216];
                    goto compare;
                  }
                break;
              case 4431:
                if (len == 4)
                  {
                    resword = &wordlist[1217];
                    goto compare;
                  }
                break;
              case 4433:
                if (len == 2)
                  {
                    resword = &wordlist[1218];
                    goto compare;
                  }
                break;
              case 4437:
                if (len == 6)
                  {
                    resword = &wordlist[1219];
                    goto compare;
                  }
                break;
              case 4438:
                if (len == 5)
                  {
                    resword = &wordlist[1220];
                    goto compare;
                  }
                break;
              case 4445:
                if (len == 6)
                  {
                    resword = &wordlist[1221];
                    goto compare;
                  }
                break;
              case 4448:
                if (len == 4)
                  {
                    resword = &wordlist[1222];
                    goto compare;
                  }
                break;
              case 4449:
                if (len == 10)
                  {
                    resword = &wordlist[1223];
                    goto compare;
                  }
                break;
              case 4454:
                if (len == 3)
                  {
                    resword = &wordlist[1224];
                    goto compare;
                  }
                break;
              case 4459:
                if (len == 6)
                  {
                    resword = &wordlist[1225];
                    goto compare;
                  }
                break;
              case 4461:
                if (len == 6)
                  {
                    resword = &wordlist[1226];
                    goto compare;
                  }
                break;
              case 4464:
                if (len == 17)
                  {
                    resword = &wordlist[1227];
                    goto compare;
                  }
                break;
              case 4466:
                if (len == 8)
                  {
                    resword = &wordlist[1228];
                    goto compare;
                  }
                break;
              case 4468:
                if (len == 8)
                  {
                    resword = &wordlist[1229];
                    goto compare;
                  }
                break;
              case 4471:
                if (len == 2)
                  {
                    resword = &wordlist[1230];
                    goto compare;
                  }
                break;
              case 4473:
                if (len == 5)
                  {
                    resword = &wordlist[1231];
                    goto compare;
                  }
                break;
              case 4475:
                if (len == 14)
                  {
                    resword = &wordlist[1232];
                    goto compare;
                  }
                break;
              case 4478:
                if (len == 5)
                  {
                    resword = &wordlist[1233];
                    goto compare;
                  }
                break;
              case 4479:
                if (len == 6)
                  {
                    resword = &wordlist[1234];
                    goto compare;
                  }
                break;
              case 4482:
                if (len == 5)
                  {
                    resword = &wordlist[1235];
                    goto compare;
                  }
                break;
              case 4483:
                if (len == 5)
                  {
                    resword = &wordlist[1236];
                    goto compare;
                  }
                break;
              case 4486:
                if (len == 6)
                  {
                    resword = &wordlist[1237];
                    goto compare;
                  }
                break;
              case 4489:
                if (len == 4)
                  {
                    resword = &wordlist[1238];
                    goto compare;
                  }
                break;
              case 4491:
                if (len == 7)
                  {
                    resword = &wordlist[1239];
                    goto compare;
                  }
                break;
              case 4492:
                if (len == 3)
                  {
                    resword = &wordlist[1240];
                    goto compare;
                  }
                break;
              case 4496:
                if (len == 6)
                  {
                    resword = &wordlist[1241];
                    goto compare;
                  }
                break;
              case 4499:
                if (len == 10)
                  {
                    resword = &wordlist[1242];
                    goto compare;
                  }
                break;
              case 4501:
                if (len == 5)
                  {
                    resword = &wordlist[1243];
                    goto compare;
                  }
                break;
              case 4502:
                if (len == 8)
                  {
                    resword = &wordlist[1244];
                    goto compare;
                  }
                break;
              case 4503:
                if (len == 5)
                  {
                    resword = &wordlist[1245];
                    goto compare;
                  }
                break;
              case 4510:
                if (len == 5)
                  {
                    resword = &wordlist[1246];
                    goto compare;
                  }
                break;
              case 4515:
                if (len == 5)
                  {
                    resword = &wordlist[1247];
                    goto compare;
                  }
                break;
              case 4523:
                if (len == 20)
                  {
                    resword = &wordlist[1248];
                    goto compare;
                  }
                break;
              case 4535:
                if (len == 14)
                  {
                    resword = &wordlist[1249];
                    goto compare;
                  }
                break;
              case 4547:
                if (len == 16)
                  {
                    resword = &wordlist[1250];
                    goto compare;
                  }
                break;
              case 4548:
                if (len == 15)
                  {
                    resword = &wordlist[1251];
                    goto compare;
                  }
                break;
              case 4551:
                if (len == 6)
                  {
                    resword = &wordlist[1252];
                    goto compare;
                  }
                break;
              case 4552:
                if (len == 12)
                  {
                    resword = &wordlist[1253];
                    goto compare;
                  }
                break;
              case 4554:
                if (len == 5)
                  {
                    resword = &wordlist[1254];
                    goto compare;
                  }
                break;
              case 4563:
                if (len == 4)
                  {
                    resword = &wordlist[1255];
                    goto compare;
                  }
                break;
              case 4568:
                if (len == 7)
                  {
                    resword = &wordlist[1256];
                    goto compare;
                  }
                break;
              case 4576:
                if (len == 8)
                  {
                    resword = &wordlist[1257];
                    goto compare;
                  }
                break;
              case 4578:
                if (len == 5)
                  {
                    resword = &wordlist[1258];
                    goto compare;
                  }
                break;
              case 4581:
                if (len == 3)
                  {
                    resword = &wordlist[1259];
                    goto compare;
                  }
                break;
              case 4583:
                if (len == 3)
                  {
                    resword = &wordlist[1260];
                    goto compare;
                  }
                break;
              case 4594:
                if (len == 5)
                  {
                    resword = &wordlist[1261];
                    goto compare;
                  }
                break;
              case 4597:
                if (len == 6)
                  {
                    resword = &wordlist[1262];
                    goto compare;
                  }
                break;
              case 4599:
                if (len == 5)
                  {
                    resword = &wordlist[1263];
                    goto compare;
                  }
                break;
              case 4605:
                if (len == 18)
                  {
                    resword = &wordlist[1264];
                    goto compare;
                  }
                break;
              case 4610:
                if (len == 5)
                  {
                    resword = &wordlist[1265];
                    goto compare;
                  }
                break;
              case 4617:
                if (len == 4)
                  {
                    resword = &wordlist[1266];
                    goto compare;
                  }
                break;
              case 4618:
                if (len == 7)
                  {
                    resword = &wordlist[1267];
                    goto compare;
                  }
                break;
              case 4620:
                if (len == 12)
                  {
                    resword = &wordlist[1268];
                    goto compare;
                  }
                break;
              case 4621:
                if (len == 7)
                  {
                    resword = &wordlist[1269];
                    goto compare;
                  }
                break;
              case 4623:
                if (len == 6)
                  {
                    resword = &wordlist[1270];
                    goto compare;
                  }
                break;
              case 4625:
                if (len == 14)
                  {
                    resword = &wordlist[1271];
                    goto compare;
                  }
                break;
              case 4641:
                if (len == 5)
                  {
                    resword = &wordlist[1272];
                    goto compare;
                  }
                break;
              case 4645:
                if (len == 6)
                  {
                    resword = &wordlist[1273];
                    goto compare;
                  }
                break;
              case 4648:
                if (len == 5)
                  {
                    resword = &wordlist[1274];
                    goto compare;
                  }
                break;
              case 4649:
                if (len == 4)
                  {
                    resword = &wordlist[1275];
                    goto compare;
                  }
                break;
              case 4650:
                if (len == 5)
                  {
                    resword = &wordlist[1276];
                    goto compare;
                  }
                break;
              case 4651:
                if (len == 3)
                  {
                    resword = &wordlist[1277];
                    goto compare;
                  }
                break;
              case 4655:
                if (len == 6)
                  {
                    resword = &wordlist[1278];
                    goto compare;
                  }
                break;
              case 4661:
                if (len == 4)
                  {
                    resword = &wordlist[1279];
                    goto compare;
                  }
                break;
              case 4663:
                if (len == 5)
                  {
                    resword = &wordlist[1280];
                    goto compare;
                  }
                break;
              case 4665:
                if (len == 5)
                  {
                    resword = &wordlist[1281];
                    goto compare;
                  }
                break;
              case 4669:
                if (len == 4)
                  {
                    resword = &wordlist[1282];
                    goto compare;
                  }
                break;
              case 4674:
                if (len == 6)
                  {
                    resword = &wordlist[1283];
                    goto compare;
                  }
                break;
              case 4691:
                if (len == 4)
                  {
                    resword = &wordlist[1284];
                    goto compare;
                  }
                break;
              case 4692:
                if (len == 5)
                  {
                    resword = &wordlist[1285];
                    goto compare;
                  }
                break;
              case 4693:
                if (len == 6)
                  {
                    resword = &wordlist[1286];
                    goto compare;
                  }
                break;
              case 4694:
                if (len == 5)
                  {
                    resword = &wordlist[1287];
                    goto compare;
                  }
                break;
              case 4700:
                if (len == 9)
                  {
                    resword = &wordlist[1288];
                    goto compare;
                  }
                break;
              case 4709:
                if (len == 5)
                  {
                    resword = &wordlist[1289];
                    goto compare;
                  }
                break;
              case 4710:
                if (len == 6)
                  {
                    resword = &wordlist[1290];
                    goto compare;
                  }
                break;
              case 4725:
                if (len == 12)
                  {
                    resword = &wordlist[1291];
                    goto compare;
                  }
                break;
              case 4729:
                if (len == 6)
                  {
                    resword = &wordlist[1292];
                    goto compare;
                  }
                break;
              case 4733:
                if (len == 6)
                  {
                    resword = &wordlist[1293];
                    goto compare;
                  }
                break;
              case 4735:
                if (len == 5)
                  {
                    resword = &wordlist[1294];
                    goto compare;
                  }
                break;
              case 4740:
                if (len == 7)
                  {
                    resword = &wordlist[1295];
                    goto compare;
                  }
                break;
              case 4741:
                if (len == 8)
                  {
                    resword = &wordlist[1296];
                    goto compare;
                  }
                break;
              case 4743:
                if (len == 8)
                  {
                    resword = &wordlist[1297];
                    goto compare;
                  }
                break;
              case 4744:
                if (len == 4)
                  {
                    resword = &wordlist[1298];
                    goto compare;
                  }
                break;
              case 4745:
                if (len == 6)
                  {
                    resword = &wordlist[1299];
                    goto compare;
                  }
                break;
              case 4747:
                if (len == 4)
                  {
                    resword = &wordlist[1300];
                    goto compare;
                  }
                break;
              case 4748:
                if (len == 2)
                  {
                    resword = &wordlist[1301];
                    goto compare;
                  }
                break;
              case 4757:
                if (len == 4)
                  {
                    resword = &wordlist[1302];
                    goto compare;
                  }
                break;
              case 4759:
                if (len == 6)
                  {
                    resword = &wordlist[1303];
                    goto compare;
                  }
                break;
              case 4764:
                if (len == 5)
                  {
                    resword = &wordlist[1304];
                    goto compare;
                  }
                break;
              case 4768:
                if (len == 4)
                  {
                    resword = &wordlist[1305];
                    goto compare;
                  }
                break;
              case 4775:
                if (len == 9)
                  {
                    resword = &wordlist[1306];
                    goto compare;
                  }
                break;
              case 4776:
                if (len == 7)
                  {
                    resword = &wordlist[1307];
                    goto compare;
                  }
                break;
              case 4779:
                if (len == 6)
                  {
                    resword = &wordlist[1308];
                    goto compare;
                  }
                break;
              case 4789:
                if (len == 5)
                  {
                    resword = &wordlist[1309];
                    goto compare;
                  }
                break;
              case 4791:
                if (len == 3)
                  {
                    resword = &wordlist[1310];
                    goto compare;
                  }
                break;
              case 4792:
                if (len == 5)
                  {
                    resword = &wordlist[1311];
                    goto compare;
                  }
                break;
              case 4807:
                if (len == 7)
                  {
                    resword = &wordlist[1312];
                    goto compare;
                  }
                break;
              case 4812:
                if (len == 16)
                  {
                    resword = &wordlist[1313];
                    goto compare;
                  }
                break;
              case 4815:
                if (len == 5)
                  {
                    resword = &wordlist[1314];
                    goto compare;
                  }
                break;
              case 4817:
                if (len == 6)
                  {
                    resword = &wordlist[1315];
                    goto compare;
                  }
                break;
              case 4820:
                if (len == 2)
                  {
                    resword = &wordlist[1316];
                    goto compare;
                  }
                break;
              case 4823:
                if (len == 12)
                  {
                    resword = &wordlist[1317];
                    goto compare;
                  }
                break;
              case 4828:
                if (len == 4)
                  {
                    resword = &wordlist[1318];
                    goto compare;
                  }
                break;
              case 4830:
                if (len == 4)
                  {
                    resword = &wordlist[1319];
                    goto compare;
                  }
                break;
              case 4833:
                if (len == 4)
                  {
                    resword = &wordlist[1320];
                    goto compare;
                  }
                break;
              case 4841:
                if (len == 4)
                  {
                    resword = &wordlist[1321];
                    goto compare;
                  }
                break;
              case 4846:
                if (len == 3)
                  {
                    resword = &wordlist[1322];
                    goto compare;
                  }
                break;
              case 4849:
                if (len == 4)
                  {
                    resword = &wordlist[1323];
                    goto compare;
                  }
                break;
              case 4851:
                if (len == 9)
                  {
                    resword = &wordlist[1324];
                    goto compare;
                  }
                break;
              case 4852:
                if (len == 8)
                  {
                    resword = &wordlist[1325];
                    goto compare;
                  }
                break;
              case 4856:
                if (len == 3)
                  {
                    resword = &wordlist[1326];
                    goto compare;
                  }
                break;
              case 4859:
                if (len == 8)
                  {
                    resword = &wordlist[1327];
                    goto compare;
                  }
                break;
              case 4860:
                if (len == 9)
                  {
                    resword = &wordlist[1328];
                    goto compare;
                  }
                break;
              case 4863:
                if (len == 8)
                  {
                    resword = &wordlist[1329];
                    goto compare;
                  }
                break;
              case 4869:
                if (len == 9)
                  {
                    resword = &wordlist[1330];
                    goto compare;
                  }
                break;
              case 4873:
                if (len == 7)
                  {
                    resword = &wordlist[1331];
                    goto compare;
                  }
                break;
              case 4884:
                if (len == 3)
                  {
                    resword = &wordlist[1332];
                    goto compare;
                  }
                break;
              case 4885:
                if (len == 3)
                  {
                    resword = &wordlist[1333];
                    goto compare;
                  }
                break;
              case 4893:
                if (len == 2)
                  {
                    resword = &wordlist[1334];
                    goto compare;
                  }
                break;
              case 4896:
                if (len == 3)
                  {
                    resword = &wordlist[1335];
                    goto compare;
                  }
                break;
              case 4901:
                if (len == 4)
                  {
                    resword = &wordlist[1336];
                    goto compare;
                  }
                break;
              case 4903:
                if (len == 16)
                  {
                    resword = &wordlist[1337];
                    goto compare;
                  }
                break;
              case 4905:
                if (len == 5)
                  {
                    resword = &wordlist[1338];
                    goto compare;
                  }
                break;
              case 4912:
                if (len == 4)
                  {
                    resword = &wordlist[1339];
                    goto compare;
                  }
                break;
              case 4914:
                if (len == 16)
                  {
                    resword = &wordlist[1340];
                    goto compare;
                  }
                break;
              case 4915:
                if (len == 6)
                  {
                    resword = &wordlist[1341];
                    goto compare;
                  }
                break;
              case 4921:
                if (len == 5)
                  {
                    resword = &wordlist[1342];
                    goto compare;
                  }
                break;
              case 4930:
                if (len == 4)
                  {
                    resword = &wordlist[1343];
                    goto compare;
                  }
                break;
              case 4932:
                if (len == 5)
                  {
                    resword = &wordlist[1344];
                    goto compare;
                  }
                break;
              case 4936:
                if (len == 6)
                  {
                    resword = &wordlist[1345];
                    goto compare;
                  }
                break;
              case 4943:
                if (len == 7)
                  {
                    resword = &wordlist[1346];
                    goto compare;
                  }
                break;
              case 4955:
                if (len == 5)
                  {
                    resword = &wordlist[1347];
                    goto compare;
                  }
                break;
              case 4961:
                if (len == 3)
                  {
                    resword = &wordlist[1348];
                    goto compare;
                  }
                break;
              case 4975:
                if (len == 4)
                  {
                    resword = &wordlist[1349];
                    goto compare;
                  }
                break;
              case 4977:
                if (len == 4)
                  {
                    resword = &wordlist[1350];
                    goto compare;
                  }
                break;
              case 4978:
                if (len == 4)
                  {
                    resword = &wordlist[1351];
                    goto compare;
                  }
                break;
              case 4986:
                if (len == 6)
                  {
                    resword = &wordlist[1352];
                    goto compare;
                  }
                break;
              case 4988:
                if (len == 3)
                  {
                    resword = &wordlist[1353];
                    goto compare;
                  }
                break;
              case 4994:
                if (len == 9)
                  {
                    resword = &wordlist[1354];
                    goto compare;
                  }
                break;
              case 4998:
                if (len == 4)
                  {
                    resword = &wordlist[1355];
                    goto compare;
                  }
                break;
              case 5002:
                if (len == 16)
                  {
                    resword = &wordlist[1356];
                    goto compare;
                  }
                break;
              case 5003:
                if (len == 20)
                  {
                    resword = &wordlist[1357];
                    goto compare;
                  }
                break;
              case 5008:
                if (len == 4)
                  {
                    resword = &wordlist[1358];
                    goto compare;
                  }
                break;
              case 5013:
                if (len == 9)
                  {
                    resword = &wordlist[1359];
                    goto compare;
                  }
                break;
              case 5024:
                if (len == 4)
                  {
                    resword = &wordlist[1360];
                    goto compare;
                  }
                break;
              case 5037:
                if (len == 7)
                  {
                    resword = &wordlist[1361];
                    goto compare;
                  }
                break;
              case 5042:
                if (len == 6)
                  {
                    resword = &wordlist[1362];
                    goto compare;
                  }
                break;
              case 5043:
                if (len == 5)
                  {
                    resword = &wordlist[1363];
                    goto compare;
                  }
                break;
              case 5044:
                if (len == 7)
                  {
                    resword = &wordlist[1364];
                    goto compare;
                  }
                break;
              case 5050:
                if (len == 14)
                  {
                    resword = &wordlist[1365];
                    goto compare;
                  }
                break;
              case 5051:
                if (len == 7)
                  {
                    resword = &wordlist[1366];
                    goto compare;
                  }
                break;
              case 5052:
                if (len == 4)
                  {
                    resword = &wordlist[1367];
                    goto compare;
                  }
                break;
              case 5056:
                if (len == 3)
                  {
                    resword = &wordlist[1368];
                    goto compare;
                  }
                break;
              case 5059:
                if (len == 5)
                  {
                    resword = &wordlist[1369];
                    goto compare;
                  }
                break;
              case 5060:
                if (len == 6)
                  {
                    resword = &wordlist[1370];
                    goto compare;
                  }
                break;
              case 5061:
                if (len == 22)
                  {
                    resword = &wordlist[1371];
                    goto compare;
                  }
                break;
              case 5063:
                if (len == 4)
                  {
                    resword = &wordlist[1372];
                    goto compare;
                  }
                break;
              case 5066:
                if (len == 5)
                  {
                    resword = &wordlist[1373];
                    goto compare;
                  }
                break;
              case 5068:
                if (len == 4)
                  {
                    resword = &wordlist[1374];
                    goto compare;
                  }
                break;
              case 5069:
                if (len == 10)
                  {
                    resword = &wordlist[1375];
                    goto compare;
                  }
                break;
              case 5070:
                if (len == 5)
                  {
                    resword = &wordlist[1376];
                    goto compare;
                  }
                break;
              case 5075:
                if (len == 5)
                  {
                    resword = &wordlist[1377];
                    goto compare;
                  }
                break;
              case 5079:
                if (len == 4)
                  {
                    resword = &wordlist[1378];
                    goto compare;
                  }
                break;
              case 5081:
                if (len == 6)
                  {
                    resword = &wordlist[1379];
                    goto compare;
                  }
                break;
              case 5091:
                if (len == 5)
                  {
                    resword = &wordlist[1380];
                    goto compare;
                  }
                break;
              case 5103:
                if (len == 5)
                  {
                    resword = &wordlist[1381];
                    goto compare;
                  }
                break;
              case 5107:
                if (len == 4)
                  {
                    resword = &wordlist[1382];
                    goto compare;
                  }
                break;
              case 5108:
                if (len == 7)
                  {
                    resword = &wordlist[1383];
                    goto compare;
                  }
                break;
              case 5116:
                if (len == 3)
                  {
                    resword = &wordlist[1384];
                    goto compare;
                  }
                break;
              case 5119:
                if (len == 5)
                  {
                    resword = &wordlist[1385];
                    goto compare;
                  }
                break;
              case 5120:
                if (len == 8)
                  {
                    resword = &wordlist[1386];
                    goto compare;
                  }
                break;
              case 5122:
                if (len == 4)
                  {
                    resword = &wordlist[1387];
                    goto compare;
                  }
                break;
              case 5123:
                if (len == 5)
                  {
                    resword = &wordlist[1388];
                    goto compare;
                  }
                break;
              case 5126:
                if (len == 4)
                  {
                    resword = &wordlist[1389];
                    goto compare;
                  }
                break;
              case 5129:
                if (len == 4)
                  {
                    resword = &wordlist[1390];
                    goto compare;
                  }
                break;
              case 5135:
                if (len == 4)
                  {
                    resword = &wordlist[1391];
                    goto compare;
                  }
                break;
              case 5140:
                if (len == 6)
                  {
                    resword = &wordlist[1392];
                    goto compare;
                  }
                break;
              case 5141:
                if (len == 5)
                  {
                    resword = &wordlist[1393];
                    goto compare;
                  }
                break;
              case 5142:
                if (len == 6)
                  {
                    resword = &wordlist[1394];
                    goto compare;
                  }
                break;
              case 5143:
                if (len == 4)
                  {
                    resword = &wordlist[1395];
                    goto compare;
                  }
                break;
              case 5147:
                if (len == 9)
                  {
                    resword = &wordlist[1396];
                    goto compare;
                  }
                break;
              case 5154:
                if (len == 8)
                  {
                    resword = &wordlist[1397];
                    goto compare;
                  }
                break;
              case 5158:
                if (len == 8)
                  {
                    resword = &wordlist[1398];
                    goto compare;
                  }
                break;
              case 5170:
                if (len == 4)
                  {
                    resword = &wordlist[1399];
                    goto compare;
                  }
                break;
              case 5171:
                if (len == 7)
                  {
                    resword = &wordlist[1400];
                    goto compare;
                  }
                break;
              case 5172:
                if (len == 15)
                  {
                    resword = &wordlist[1401];
                    goto compare;
                  }
                break;
              case 5183:
                if (len == 10)
                  {
                    resword = &wordlist[1402];
                    goto compare;
                  }
                break;
              case 5184:
                if (len == 6)
                  {
                    resword = &wordlist[1403];
                    goto compare;
                  }
                break;
              case 5202:
                if (len == 6)
                  {
                    resword = &wordlist[1404];
                    goto compare;
                  }
                break;
              case 5203:
                if (len == 5)
                  {
                    resword = &wordlist[1405];
                    goto compare;
                  }
                break;
              case 5209:
                if (len == 5)
                  {
                    resword = &wordlist[1406];
                    goto compare;
                  }
                break;
              case 5210:
                if (len == 5)
                  {
                    resword = &wordlist[1407];
                    goto compare;
                  }
                break;
              case 5213:
                if (len == 2)
                  {
                    resword = &wordlist[1408];
                    goto compare;
                  }
                break;
              case 5219:
                if (len == 4)
                  {
                    resword = &wordlist[1409];
                    goto compare;
                  }
                break;
              case 5224:
                if (len == 14)
                  {
                    resword = &wordlist[1410];
                    goto compare;
                  }
                break;
              case 5229:
                if (len == 8)
                  {
                    resword = &wordlist[1411];
                    goto compare;
                  }
                break;
              case 5231:
                if (len == 4)
                  {
                    resword = &wordlist[1412];
                    goto compare;
                  }
                break;
              case 5234:
                if (len == 7)
                  {
                    resword = &wordlist[1413];
                    goto compare;
                  }
                break;
              case 5241:
                if (len == 3)
                  {
                    resword = &wordlist[1414];
                    goto compare;
                  }
                break;
              case 5246:
                if (len == 7)
                  {
                    resword = &wordlist[1415];
                    goto compare;
                  }
                break;
              case 5253:
                if (len == 5)
                  {
                    resword = &wordlist[1416];
                    goto compare;
                  }
                break;
              case 5254:
                if (len == 6)
                  {
                    resword = &wordlist[1417];
                    goto compare;
                  }
                break;
              case 5257:
                if (len == 20)
                  {
                    resword = &wordlist[1418];
                    goto compare;
                  }
                break;
              case 5260:
                if (len == 5)
                  {
                    resword = &wordlist[1419];
                    goto compare;
                  }
                break;
              case 5261:
                if (len == 2)
                  {
                    resword = &wordlist[1420];
                    goto compare;
                  }
                break;
              case 5263:
                if (len == 16)
                  {
                    resword = &wordlist[1421];
                    goto compare;
                  }
                break;
              case 5268:
                if (len == 4)
                  {
                    resword = &wordlist[1422];
                    goto compare;
                  }
                break;
              case 5281:
                if (len == 17)
                  {
                    resword = &wordlist[1423];
                    goto compare;
                  }
                break;
              case 5283:
                if (len == 5)
                  {
                    resword = &wordlist[1424];
                    goto compare;
                  }
                break;
              case 5287:
                if (len == 5)
                  {
                    resword = &wordlist[1425];
                    goto compare;
                  }
                break;
              case 5289:
                if (len == 5)
                  {
                    resword = &wordlist[1426];
                    goto compare;
                  }
                break;
              case 5290:
                if (len == 3)
                  {
                    resword = &wordlist[1427];
                    goto compare;
                  }
                break;
              case 5296:
                if (len == 6)
                  {
                    resword = &wordlist[1428];
                    goto compare;
                  }
                break;
              case 5304:
                if (len == 4)
                  {
                    resword = &wordlist[1429];
                    goto compare;
                  }
                break;
              case 5307:
                if (len == 5)
                  {
                    resword = &wordlist[1430];
                    goto compare;
                  }
                break;
              case 5309:
                if (len == 4)
                  {
                    resword = &wordlist[1431];
                    goto compare;
                  }
                break;
              case 5310:
                if (len == 5)
                  {
                    resword = &wordlist[1432];
                    goto compare;
                  }
                break;
              case 5316:
                if (len == 4)
                  {
                    resword = &wordlist[1433];
                    goto compare;
                  }
                break;
              case 5323:
                if (len == 5)
                  {
                    resword = &wordlist[1434];
                    goto compare;
                  }
                break;
              case 5335:
                if (len == 4)
                  {
                    resword = &wordlist[1435];
                    goto compare;
                  }
                break;
              case 5337:
                if (len == 8)
                  {
                    resword = &wordlist[1436];
                    goto compare;
                  }
                break;
              case 5338:
                if (len == 15)
                  {
                    resword = &wordlist[1437];
                    goto compare;
                  }
                break;
              case 5339:
                if (len == 8)
                  {
                    resword = &wordlist[1438];
                    goto compare;
                  }
                break;
              case 5349:
                if (len == 5)
                  {
                    resword = &wordlist[1439];
                    goto compare;
                  }
                break;
              case 5353:
                if (len == 8)
                  {
                    resword = &wordlist[1440];
                    goto compare;
                  }
                break;
              case 5358:
                if (len == 5)
                  {
                    resword = &wordlist[1441];
                    goto compare;
                  }
                break;
              case 5364:
                if (len == 4)
                  {
                    resword = &wordlist[1442];
                    goto compare;
                  }
                break;
              case 5366:
                if (len == 6)
                  {
                    resword = &wordlist[1443];
                    goto compare;
                  }
                break;
              case 5368:
                if (len == 6)
                  {
                    resword = &wordlist[1444];
                    goto compare;
                  }
                break;
              case 5372:
                if (len == 6)
                  {
                    resword = &wordlist[1445];
                    goto compare;
                  }
                break;
              case 5374:
                if (len == 9)
                  {
                    resword = &wordlist[1446];
                    goto compare;
                  }
                break;
              case 5378:
                if (len == 4)
                  {
                    resword = &wordlist[1447];
                    goto compare;
                  }
                break;
              case 5383:
                if (len == 11)
                  {
                    resword = &wordlist[1448];
                    goto compare;
                  }
                break;
              case 5385:
                if (len == 4)
                  {
                    resword = &wordlist[1449];
                    goto compare;
                  }
                break;
              case 5388:
                if (len == 8)
                  {
                    resword = &wordlist[1450];
                    goto compare;
                  }
                break;
              case 5389:
                if (len == 5)
                  {
                    resword = &wordlist[1451];
                    goto compare;
                  }
                break;
              case 5391:
                if (len == 4)
                  {
                    resword = &wordlist[1452];
                    goto compare;
                  }
                break;
              case 5395:
                if (len == 12)
                  {
                    resword = &wordlist[1453];
                    goto compare;
                  }
                break;
              case 5397:
                if (len == 18)
                  {
                    resword = &wordlist[1454];
                    goto compare;
                  }
                break;
              case 5398:
                if (len == 5)
                  {
                    resword = &wordlist[1455];
                    goto compare;
                  }
                break;
              case 5400:
                if (len == 5)
                  {
                    resword = &wordlist[1456];
                    goto compare;
                  }
                break;
              case 5403:
                if (len == 4)
                  {
                    resword = &wordlist[1457];
                    goto compare;
                  }
                break;
              case 5407:
                if (len == 5)
                  {
                    resword = &wordlist[1458];
                    goto compare;
                  }
                break;
              case 5408:
                if (len == 5)
                  {
                    resword = &wordlist[1459];
                    goto compare;
                  }
                break;
              case 5421:
                if (len == 5)
                  {
                    resword = &wordlist[1460];
                    goto compare;
                  }
                break;
              case 5422:
                if (len == 6)
                  {
                    resword = &wordlist[1461];
                    goto compare;
                  }
                break;
              case 5431:
                if (len == 5)
                  {
                    resword = &wordlist[1462];
                    goto compare;
                  }
                break;
              case 5435:
                if (len == 6)
                  {
                    resword = &wordlist[1463];
                    goto compare;
                  }
                break;
              case 5438:
                if (len == 4)
                  {
                    resword = &wordlist[1464];
                    goto compare;
                  }
                break;
              case 5439:
                if (len == 5)
                  {
                    resword = &wordlist[1465];
                    goto compare;
                  }
                break;
              case 5440:
                if (len == 6)
                  {
                    resword = &wordlist[1466];
                    goto compare;
                  }
                break;
              case 5445:
                if (len == 4)
                  {
                    resword = &wordlist[1467];
                    goto compare;
                  }
                break;
              case 5450:
                if (len == 4)
                  {
                    resword = &wordlist[1468];
                    goto compare;
                  }
                break;
              case 5457:
                if (len == 4)
                  {
                    resword = &wordlist[1469];
                    goto compare;
                  }
                break;
              case 5460:
                if (len == 6)
                  {
                    resword = &wordlist[1470];
                    goto compare;
                  }
                break;
              case 5462:
                if (len == 4)
                  {
                    resword = &wordlist[1471];
                    goto compare;
                  }
                break;
              case 5470:
                if (len == 6)
                  {
                    resword = &wordlist[1472];
                    goto compare;
                  }
                break;
              case 5474:
                if (len == 5)
                  {
                    resword = &wordlist[1473];
                    goto compare;
                  }
                break;
              case 5479:
                if (len == 9)
                  {
                    resword = &wordlist[1474];
                    goto compare;
                  }
                break;
              case 5490:
                if (len == 5)
                  {
                    resword = &wordlist[1475];
                    goto compare;
                  }
                break;
              case 5504:
                if (len == 13)
                  {
                    resword = &wordlist[1476];
                    goto compare;
                  }
                break;
              case 5508:
                if (len == 5)
                  {
                    resword = &wordlist[1477];
                    goto compare;
                  }
                break;
              case 5509:
                if (len == 5)
                  {
                    resword = &wordlist[1478];
                    goto compare;
                  }
                break;
              case 5510:
                if (len == 4)
                  {
                    resword = &wordlist[1479];
                    goto compare;
                  }
                break;
              case 5512:
                if (len == 4)
                  {
                    resword = &wordlist[1480];
                    goto compare;
                  }
                break;
              case 5518:
                if (len == 5)
                  {
                    resword = &wordlist[1481];
                    goto compare;
                  }
                break;
              case 5523:
                if (len == 13)
                  {
                    resword = &wordlist[1482];
                    goto compare;
                  }
                break;
              case 5531:
                if (len == 9)
                  {
                    resword = &wordlist[1483];
                    goto compare;
                  }
                break;
              case 5534:
                if (len == 8)
                  {
                    resword = &wordlist[1484];
                    goto compare;
                  }
                break;
              case 5537:
                if (len == 13)
                  {
                    resword = &wordlist[1485];
                    goto compare;
                  }
                break;
              case 5547:
                if (len == 7)
                  {
                    resword = &wordlist[1486];
                    goto compare;
                  }
                break;
              case 5549:
                if (len == 6)
                  {
                    resword = &wordlist[1487];
                    goto compare;
                  }
                break;
              case 5553:
                if (len == 7)
                  {
                    resword = &wordlist[1488];
                    goto compare;
                  }
                break;
              case 5554:
                if (len == 10)
                  {
                    resword = &wordlist[1489];
                    goto compare;
                  }
                break;
              case 5560:
                if (len == 3)
                  {
                    resword = &wordlist[1490];
                    goto compare;
                  }
                break;
              case 5562:
                if (len == 8)
                  {
                    resword = &wordlist[1491];
                    goto compare;
                  }
                break;
              case 5568:
                if (len == 5)
                  {
                    resword = &wordlist[1492];
                    goto compare;
                  }
                break;
              case 5571:
                if (len == 4)
                  {
                    resword = &wordlist[1493];
                    goto compare;
                  }
                break;
              case 5572:
                if (len == 12)
                  {
                    resword = &wordlist[1494];
                    goto compare;
                  }
                break;
              case 5575:
                if (len == 5)
                  {
                    resword = &wordlist[1495];
                    goto compare;
                  }
                break;
              case 5577:
                if (len == 14)
                  {
                    resword = &wordlist[1496];
                    goto compare;
                  }
                break;
              case 5579:
                if (len == 4)
                  {
                    resword = &wordlist[1497];
                    goto compare;
                  }
                break;
              case 5580:
                if (len == 5)
                  {
                    resword = &wordlist[1498];
                    goto compare;
                  }
                break;
              case 5587:
                if (len == 6)
                  {
                    resword = &wordlist[1499];
                    goto compare;
                  }
                break;
              case 5591:
                if (len == 4)
                  {
                    resword = &wordlist[1500];
                    goto compare;
                  }
                break;
              case 5593:
                if (len == 5)
                  {
                    resword = &wordlist[1501];
                    goto compare;
                  }
                break;
              case 5605:
                if (len == 10)
                  {
                    resword = &wordlist[1502];
                    goto compare;
                  }
                break;
              case 5608:
                if (len == 4)
                  {
                    resword = &wordlist[1503];
                    goto compare;
                  }
                break;
              case 5609:
                if (len == 4)
                  {
                    resword = &wordlist[1504];
                    goto compare;
                  }
                break;
              case 5611:
                if (len == 8)
                  {
                    resword = &wordlist[1505];
                    goto compare;
                  }
                break;
              case 5613:
                if (len == 9)
                  {
                    resword = &wordlist[1506];
                    goto compare;
                  }
                break;
              case 5619:
                if (len == 11)
                  {
                    resword = &wordlist[1507];
                    goto compare;
                  }
                break;
              case 5622:
                if (len == 6)
                  {
                    resword = &wordlist[1508];
                    goto compare;
                  }
                break;
              case 5630:
                if (len == 5)
                  {
                    resword = &wordlist[1509];
                    goto compare;
                  }
                break;
              case 5637:
                if (len == 6)
                  {
                    resword = &wordlist[1510];
                    goto compare;
                  }
                break;
              case 5638:
                if (len == 6)
                  {
                    resword = &wordlist[1511];
                    goto compare;
                  }
                break;
              case 5639:
                if (len == 6)
                  {
                    resword = &wordlist[1512];
                    goto compare;
                  }
                break;
              case 5640:
                if (len == 6)
                  {
                    resword = &wordlist[1513];
                    goto compare;
                  }
                break;
              case 5645:
                if (len == 6)
                  {
                    resword = &wordlist[1514];
                    goto compare;
                  }
                break;
              case 5650:
                if (len == 6)
                  {
                    resword = &wordlist[1515];
                    goto compare;
                  }
                break;
              case 5654:
                if (len == 5)
                  {
                    resword = &wordlist[1516];
                    goto compare;
                  }
                break;
              case 5655:
                if (len == 5)
                  {
                    resword = &wordlist[1517];
                    goto compare;
                  }
                break;
              case 5656:
                if (len == 4)
                  {
                    resword = &wordlist[1518];
                    goto compare;
                  }
                break;
              case 5657:
                if (len == 5)
                  {
                    resword = &wordlist[1519];
                    goto compare;
                  }
                break;
              case 5665:
                if (len == 5)
                  {
                    resword = &wordlist[1520];
                    goto compare;
                  }
                break;
              case 5666:
                if (len == 6)
                  {
                    resword = &wordlist[1521];
                    goto compare;
                  }
                break;
              case 5667:
                if (len == 4)
                  {
                    resword = &wordlist[1522];
                    goto compare;
                  }
                break;
              case 5668:
                if (len == 5)
                  {
                    resword = &wordlist[1523];
                    goto compare;
                  }
                break;
              case 5669:
                if (len == 6)
                  {
                    resword = &wordlist[1524];
                    goto compare;
                  }
                break;
              case 5670:
                if (len == 9)
                  {
                    resword = &wordlist[1525];
                    goto compare;
                  }
                break;
              case 5671:
                if (len == 7)
                  {
                    resword = &wordlist[1526];
                    goto compare;
                  }
                break;
              case 5674:
                if (len == 6)
                  {
                    resword = &wordlist[1527];
                    goto compare;
                  }
                break;
              case 5678:
                if (len == 6)
                  {
                    resword = &wordlist[1528];
                    goto compare;
                  }
                break;
              case 5679:
                if (len == 5)
                  {
                    resword = &wordlist[1529];
                    goto compare;
                  }
                break;
              case 5680:
                if (len == 17)
                  {
                    resword = &wordlist[1530];
                    goto compare;
                  }
                break;
              case 5688:
                if (len == 4)
                  {
                    resword = &wordlist[1531];
                    goto compare;
                  }
                break;
              case 5689:
                if (len == 6)
                  {
                    resword = &wordlist[1532];
                    goto compare;
                  }
                break;
              case 5691:
                if (len == 13)
                  {
                    resword = &wordlist[1533];
                    goto compare;
                  }
                break;
              case 5695:
                if (len == 7)
                  {
                    resword = &wordlist[1534];
                    goto compare;
                  }
                break;
              case 5701:
                if (len == 4)
                  {
                    resword = &wordlist[1535];
                    goto compare;
                  }
                break;
              case 5705:
                if (len == 15)
                  {
                    resword = &wordlist[1536];
                    goto compare;
                  }
                break;
              case 5710:
                if (len == 4)
                  {
                    resword = &wordlist[1537];
                    goto compare;
                  }
                break;
              case 5736:
                if (len == 13)
                  {
                    resword = &wordlist[1538];
                    goto compare;
                  }
                break;
              case 5739:
                if (len == 10)
                  {
                    resword = &wordlist[1539];
                    goto compare;
                  }
                break;
              case 5749:
                if (len == 6)
                  {
                    resword = &wordlist[1540];
                    goto compare;
                  }
                break;
              case 5750:
                if (len == 3)
                  {
                    resword = &wordlist[1541];
                    goto compare;
                  }
                break;
              case 5756:
                if (len == 6)
                  {
                    resword = &wordlist[1542];
                    goto compare;
                  }
                break;
              case 5763:
                if (len == 3)
                  {
                    resword = &wordlist[1543];
                    goto compare;
                  }
                break;
              case 5771:
                if (len == 4)
                  {
                    resword = &wordlist[1544];
                    goto compare;
                  }
                break;
              case 5773:
                if (len == 3)
                  {
                    resword = &wordlist[1545];
                    goto compare;
                  }
                break;
              case 5778:
                if (len == 5)
                  {
                    resword = &wordlist[1546];
                    goto compare;
                  }
                break;
              case 5780:
                if (len == 5)
                  {
                    resword = &wordlist[1547];
                    goto compare;
                  }
                break;
              case 5783:
                if (len == 5)
                  {
                    resword = &wordlist[1548];
                    goto compare;
                  }
                break;
              case 5784:
                if (len == 6)
                  {
                    resword = &wordlist[1549];
                    goto compare;
                  }
                break;
              case 5786:
                if (len == 6)
                  {
                    resword = &wordlist[1550];
                    goto compare;
                  }
                break;
              case 5799:
                if (len == 6)
                  {
                    resword = &wordlist[1551];
                    goto compare;
                  }
                break;
              case 5800:
                if (len == 6)
                  {
                    resword = &wordlist[1552];
                    goto compare;
                  }
                break;
              case 5808:
                if (len == 16)
                  {
                    resword = &wordlist[1553];
                    goto compare;
                  }
                break;
              case 5816:
                if (len == 13)
                  {
                    resword = &wordlist[1554];
                    goto compare;
                  }
                break;
              case 5817:
                if (len == 15)
                  {
                    resword = &wordlist[1555];
                    goto compare;
                  }
                break;
              case 5818:
                if (len == 12)
                  {
                    resword = &wordlist[1556];
                    goto compare;
                  }
                break;
              case 5821:
                if (len == 17)
                  {
                    resword = &wordlist[1557];
                    goto compare;
                  }
                break;
              case 5843:
                if (len == 6)
                  {
                    resword = &wordlist[1558];
                    goto compare;
                  }
                break;
              case 5861:
                if (len == 2)
                  {
                    resword = &wordlist[1559];
                    goto compare;
                  }
                break;
              case 5863:
                if (len == 2)
                  {
                    resword = &wordlist[1560];
                    goto compare;
                  }
                break;
              case 5868:
                if (len == 7)
                  {
                    resword = &wordlist[1561];
                    goto compare;
                  }
                break;
              case 5876:
                if (len == 13)
                  {
                    resword = &wordlist[1562];
                    goto compare;
                  }
                break;
              case 5878:
                if (len == 5)
                  {
                    resword = &wordlist[1563];
                    goto compare;
                  }
                break;
              case 5882:
                if (len == 8)
                  {
                    resword = &wordlist[1564];
                    goto compare;
                  }
                break;
              case 5884:
                if (len == 6)
                  {
                    resword = &wordlist[1565];
                    goto compare;
                  }
                break;
              case 5900:
                if (len == 5)
                  {
                    resword = &wordlist[1566];
                    goto compare;
                  }
                break;
              case 5909:
                if (len == 6)
                  {
                    resword = &wordlist[1567];
                    goto compare;
                  }
                break;
              case 5911:
                if (len == 6)
                  {
                    resword = &wordlist[1568];
                    goto compare;
                  }
                break;
              case 5914:
                if (len == 6)
                  {
                    resword = &wordlist[1569];
                    goto compare;
                  }
                break;
              case 5926:
                if (len == 6)
                  {
                    resword = &wordlist[1570];
                    goto compare;
                  }
                break;
              case 5944:
                if (len == 6)
                  {
                    resword = &wordlist[1571];
                    goto compare;
                  }
                break;
              case 5951:
                if (len == 3)
                  {
                    resword = &wordlist[1572];
                    goto compare;
                  }
                break;
              case 5962:
                if (len == 4)
                  {
                    resword = &wordlist[1573];
                    goto compare;
                  }
                break;
              case 5963:
                if (len == 11)
                  {
                    resword = &wordlist[1574];
                    goto compare;
                  }
                break;
              case 5971:
                if (len == 6)
                  {
                    resword = &wordlist[1575];
                    goto compare;
                  }
                break;
              case 5972:
                if (len == 11)
                  {
                    resword = &wordlist[1576];
                    goto compare;
                  }
                break;
              case 5998:
                if (len == 4)
                  {
                    resword = &wordlist[1577];
                    goto compare;
                  }
                break;
              case 6002:
                if (len == 13)
                  {
                    resword = &wordlist[1578];
                    goto compare;
                  }
                break;
              case 6008:
                if (len == 6)
                  {
                    resword = &wordlist[1579];
                    goto compare;
                  }
                break;
              case 6010:
                if (len == 5)
                  {
                    resword = &wordlist[1580];
                    goto compare;
                  }
                break;
              case 6020:
                if (len == 8)
                  {
                    resword = &wordlist[1581];
                    goto compare;
                  }
                break;
              case 6024:
                if (len == 5)
                  {
                    resword = &wordlist[1582];
                    goto compare;
                  }
                break;
              case 6025:
                if (len == 8)
                  {
                    resword = &wordlist[1583];
                    goto compare;
                  }
                break;
              case 6031:
                if (len == 21)
                  {
                    resword = &wordlist[1584];
                    goto compare;
                  }
                break;
              case 6036:
                if (len == 8)
                  {
                    resword = &wordlist[1585];
                    goto compare;
                  }
                break;
              case 6037:
                if (len == 5)
                  {
                    resword = &wordlist[1586];
                    goto compare;
                  }
                break;
              case 6039:
                if (len == 5)
                  {
                    resword = &wordlist[1587];
                    goto compare;
                  }
                break;
              case 6050:
                if (len == 6)
                  {
                    resword = &wordlist[1588];
                    goto compare;
                  }
                break;
              case 6057:
                if (len == 4)
                  {
                    resword = &wordlist[1589];
                    goto compare;
                  }
                break;
              case 6070:
                if (len == 8)
                  {
                    resword = &wordlist[1590];
                    goto compare;
                  }
                break;
              case 6072:
                if (len == 10)
                  {
                    resword = &wordlist[1591];
                    goto compare;
                  }
                break;
              case 6077:
                if (len == 13)
                  {
                    resword = &wordlist[1592];
                    goto compare;
                  }
                break;
              case 6079:
                if (len == 20)
                  {
                    resword = &wordlist[1593];
                    goto compare;
                  }
                break;
              case 6082:
                if (len == 4)
                  {
                    resword = &wordlist[1594];
                    goto compare;
                  }
                break;
              case 6083:
                if (len == 6)
                  {
                    resword = &wordlist[1595];
                    goto compare;
                  }
                break;
              case 6089:
                if (len == 4)
                  {
                    resword = &wordlist[1596];
                    goto compare;
                  }
                break;
              case 6094:
                if (len == 5)
                  {
                    resword = &wordlist[1597];
                    goto compare;
                  }
                break;
              case 6105:
                if (len == 4)
                  {
                    resword = &wordlist[1598];
                    goto compare;
                  }
                break;
              case 6108:
                if (len == 3)
                  {
                    resword = &wordlist[1599];
                    goto compare;
                  }
                break;
              case 6111:
                if (len == 5)
                  {
                    resword = &wordlist[1600];
                    goto compare;
                  }
                break;
              case 6119:
                if (len == 4)
                  {
                    resword = &wordlist[1601];
                    goto compare;
                  }
                break;
              case 6120:
                if (len == 6)
                  {
                    resword = &wordlist[1602];
                    goto compare;
                  }
                break;
              case 6123:
                if (len == 5)
                  {
                    resword = &wordlist[1603];
                    goto compare;
                  }
                break;
              case 6126:
                if (len == 5)
                  {
                    resword = &wordlist[1604];
                    goto compare;
                  }
                break;
              case 6130:
                if (len == 7)
                  {
                    resword = &wordlist[1605];
                    goto compare;
                  }
                break;
              case 6135:
                if (len == 8)
                  {
                    resword = &wordlist[1606];
                    goto compare;
                  }
                break;
              case 6137:
                if (len == 5)
                  {
                    resword = &wordlist[1607];
                    goto compare;
                  }
                break;
              case 6140:
                if (len == 6)
                  {
                    resword = &wordlist[1608];
                    goto compare;
                  }
                break;
              case 6147:
                if (len == 13)
                  {
                    resword = &wordlist[1609];
                    goto compare;
                  }
                break;
              case 6157:
                if (len == 8)
                  {
                    resword = &wordlist[1610];
                    goto compare;
                  }
                break;
              case 6164:
                if (len == 6)
                  {
                    resword = &wordlist[1611];
                    goto compare;
                  }
                break;
              case 6174:
                if (len == 5)
                  {
                    resword = &wordlist[1612];
                    goto compare;
                  }
                break;
              case 6188:
                if (len == 6)
                  {
                    resword = &wordlist[1613];
                    goto compare;
                  }
                break;
              case 6195:
                if (len == 8)
                  {
                    resword = &wordlist[1614];
                    goto compare;
                  }
                break;
              case 6196:
                if (len == 8)
                  {
                    resword = &wordlist[1615];
                    goto compare;
                  }
                break;
              case 6199:
                if (len == 7)
                  {
                    resword = &wordlist[1616];
                    goto compare;
                  }
                break;
              case 6201:
                if (len == 6)
                  {
                    resword = &wordlist[1617];
                    goto compare;
                  }
                break;
              case 6205:
                if (len == 9)
                  {
                    resword = &wordlist[1618];
                    goto compare;
                  }
                break;
              case 6210:
                if (len == 5)
                  {
                    resword = &wordlist[1619];
                    goto compare;
                  }
                break;
              case 6226:
                if (len == 11)
                  {
                    resword = &wordlist[1620];
                    goto compare;
                  }
                break;
              case 6229:
                if (len == 17)
                  {
                    resword = &wordlist[1621];
                    goto compare;
                  }
                break;
              case 6234:
                if (len == 16)
                  {
                    resword = &wordlist[1622];
                    goto compare;
                  }
                break;
              case 6236:
                if (len == 14)
                  {
                    resword = &wordlist[1623];
                    goto compare;
                  }
                break;
              case 6238:
                if (len == 13)
                  {
                    resword = &wordlist[1624];
                    goto compare;
                  }
                break;
              case 6239:
                if (len == 17)
                  {
                    resword = &wordlist[1625];
                    goto compare;
                  }
                break;
              case 6240:
                if (len == 4)
                  {
                    resword = &wordlist[1626];
                    goto compare;
                  }
                break;
              case 6242:
                if (len == 4)
                  {
                    resword = &wordlist[1627];
                    goto compare;
                  }
                break;
              case 6244:
                if (len == 6)
                  {
                    resword = &wordlist[1628];
                    goto compare;
                  }
                break;
              case 6246:
                if (len == 12)
                  {
                    resword = &wordlist[1629];
                    goto compare;
                  }
                break;
              case 6248:
                if (len == 5)
                  {
                    resword = &wordlist[1630];
                    goto compare;
                  }
                break;
              case 6255:
                if (len == 8)
                  {
                    resword = &wordlist[1631];
                    goto compare;
                  }
                break;
              case 6271:
                if (len == 17)
                  {
                    resword = &wordlist[1632];
                    goto compare;
                  }
                break;
              case 6272:
                if (len == 7)
                  {
                    resword = &wordlist[1633];
                    goto compare;
                  }
                break;
              case 6308:
                if (len == 14)
                  {
                    resword = &wordlist[1634];
                    goto compare;
                  }
                break;
              case 6311:
                if (len == 7)
                  {
                    resword = &wordlist[1635];
                    goto compare;
                  }
                break;
              case 6313:
                if (len == 5)
                  {
                    resword = &wordlist[1636];
                    goto compare;
                  }
                break;
              case 6316:
                if (len == 9)
                  {
                    resword = &wordlist[1637];
                    goto compare;
                  }
                break;
              case 6319:
                if (len == 5)
                  {
                    resword = &wordlist[1638];
                    goto compare;
                  }
                break;
              case 6320:
                if (len == 14)
                  {
                    resword = &wordlist[1639];
                    goto compare;
                  }
                break;
              case 6325:
                if (len == 6)
                  {
                    resword = &wordlist[1640];
                    goto compare;
                  }
                break;
              case 6332:
                if (len == 5)
                  {
                    resword = &wordlist[1641];
                    goto compare;
                  }
                break;
              case 6333:
                if (len == 6)
                  {
                    resword = &wordlist[1642];
                    goto compare;
                  }
                break;
              case 6337:
                if (len == 8)
                  {
                    resword = &wordlist[1643];
                    goto compare;
                  }
                break;
              case 6345:
                if (len == 6)
                  {
                    resword = &wordlist[1644];
                    goto compare;
                  }
                break;
              case 6356:
                if (len == 6)
                  {
                    resword = &wordlist[1645];
                    goto compare;
                  }
                break;
              case 6358:
                if (len == 7)
                  {
                    resword = &wordlist[1646];
                    goto compare;
                  }
                break;
              case 6361:
                if (len == 5)
                  {
                    resword = &wordlist[1647];
                    goto compare;
                  }
                break;
              case 6362:
                if (len == 5)
                  {
                    resword = &wordlist[1648];
                    goto compare;
                  }
                break;
              case 6368:
                if (len == 7)
                  {
                    resword = &wordlist[1649];
                    goto compare;
                  }
                break;
              case 6369:
                if (len == 8)
                  {
                    resword = &wordlist[1650];
                    goto compare;
                  }
                break;
              case 6375:
                if (len == 6)
                  {
                    resword = &wordlist[1651];
                    goto compare;
                  }
                break;
              case 6380:
                if (len == 15)
                  {
                    resword = &wordlist[1652];
                    goto compare;
                  }
                break;
              case 6406:
                if (len == 6)
                  {
                    resword = &wordlist[1653];
                    goto compare;
                  }
                break;
              case 6410:
                if (len == 6)
                  {
                    resword = &wordlist[1654];
                    goto compare;
                  }
                break;
              case 6419:
                if (len == 19)
                  {
                    resword = &wordlist[1655];
                    goto compare;
                  }
                break;
              case 6421:
                if (len == 6)
                  {
                    resword = &wordlist[1656];
                    goto compare;
                  }
                break;
              case 6422:
                if (len == 5)
                  {
                    resword = &wordlist[1657];
                    goto compare;
                  }
                break;
              case 6423:
                if (len == 5)
                  {
                    resword = &wordlist[1658];
                    goto compare;
                  }
                break;
              case 6426:
                if (len == 5)
                  {
                    resword = &wordlist[1659];
                    goto compare;
                  }
                break;
              case 6430:
                if (len == 6)
                  {
                    resword = &wordlist[1660];
                    goto compare;
                  }
                break;
              case 6439:
                if (len == 6)
                  {
                    resword = &wordlist[1661];
                    goto compare;
                  }
                break;
              case 6440:
                if (len == 5)
                  {
                    resword = &wordlist[1662];
                    goto compare;
                  }
                break;
              case 6443:
                if (len == 4)
                  {
                    resword = &wordlist[1663];
                    goto compare;
                  }
                break;
              case 6449:
                if (len == 3)
                  {
                    resword = &wordlist[1664];
                    goto compare;
                  }
                break;
              case 6451:
                if (len == 10)
                  {
                    resword = &wordlist[1665];
                    goto compare;
                  }
                break;
              case 6462:
                if (len == 5)
                  {
                    resword = &wordlist[1666];
                    goto compare;
                  }
                break;
              case 6466:
                if (len == 5)
                  {
                    resword = &wordlist[1667];
                    goto compare;
                  }
                break;
              case 6483:
                if (len == 9)
                  {
                    resword = &wordlist[1668];
                    goto compare;
                  }
                break;
              case 6488:
                if (len == 5)
                  {
                    resword = &wordlist[1669];
                    goto compare;
                  }
                break;
              case 6489:
                if (len == 5)
                  {
                    resword = &wordlist[1670];
                    goto compare;
                  }
                break;
              case 6493:
                if (len == 6)
                  {
                    resword = &wordlist[1671];
                    goto compare;
                  }
                break;
              case 6497:
                if (len == 4)
                  {
                    resword = &wordlist[1672];
                    goto compare;
                  }
                break;
              case 6499:
                if (len == 5)
                  {
                    resword = &wordlist[1673];
                    goto compare;
                  }
                break;
              case 6515:
                if (len == 6)
                  {
                    resword = &wordlist[1674];
                    goto compare;
                  }
                break;
              case 6538:
                if (len == 7)
                  {
                    resword = &wordlist[1675];
                    goto compare;
                  }
                break;
              case 6540:
                if (len == 8)
                  {
                    resword = &wordlist[1676];
                    goto compare;
                  }
                break;
              case 6545:
                if (len == 5)
                  {
                    resword = &wordlist[1677];
                    goto compare;
                  }
                break;
              case 6547:
                if (len == 18)
                  {
                    resword = &wordlist[1678];
                    goto compare;
                  }
                break;
              case 6553:
                if (len == 6)
                  {
                    resword = &wordlist[1679];
                    goto compare;
                  }
                break;
              case 6556:
                if (len == 14)
                  {
                    resword = &wordlist[1680];
                    goto compare;
                  }
                break;
              case 6560:
                if (len == 6)
                  {
                    resword = &wordlist[1681];
                    goto compare;
                  }
                break;
              case 6561:
                if (len == 10)
                  {
                    resword = &wordlist[1682];
                    goto compare;
                  }
                break;
              case 6566:
                if (len == 16)
                  {
                    resword = &wordlist[1683];
                    goto compare;
                  }
                break;
              case 6576:
                if (len == 9)
                  {
                    resword = &wordlist[1684];
                    goto compare;
                  }
                break;
              case 6581:
                if (len == 6)
                  {
                    resword = &wordlist[1685];
                    goto compare;
                  }
                break;
              case 6592:
                if (len == 7)
                  {
                    resword = &wordlist[1686];
                    goto compare;
                  }
                break;
              case 6600:
                if (len == 7)
                  {
                    resword = &wordlist[1687];
                    goto compare;
                  }
                break;
              case 6617:
                if (len == 4)
                  {
                    resword = &wordlist[1688];
                    goto compare;
                  }
                break;
              case 6620:
                if (len == 6)
                  {
                    resword = &wordlist[1689];
                    goto compare;
                  }
                break;
              case 6623:
                if (len == 5)
                  {
                    resword = &wordlist[1690];
                    goto compare;
                  }
                break;
              case 6624:
                if (len == 5)
                  {
                    resword = &wordlist[1691];
                    goto compare;
                  }
                break;
              case 6629:
                if (len == 5)
                  {
                    resword = &wordlist[1692];
                    goto compare;
                  }
                break;
              case 6630:
                if (len == 12)
                  {
                    resword = &wordlist[1693];
                    goto compare;
                  }
                break;
              case 6632:
                if (len == 6)
                  {
                    resword = &wordlist[1694];
                    goto compare;
                  }
                break;
              case 6637:
                if (len == 16)
                  {
                    resword = &wordlist[1695];
                    goto compare;
                  }
                break;
              case 6646:
                if (len == 6)
                  {
                    resword = &wordlist[1696];
                    goto compare;
                  }
                break;
              case 6654:
                if (len == 6)
                  {
                    resword = &wordlist[1697];
                    goto compare;
                  }
                break;
              case 6656:
                if (len == 5)
                  {
                    resword = &wordlist[1698];
                    goto compare;
                  }
                break;
              case 6658:
                if (len == 7)
                  {
                    resword = &wordlist[1699];
                    goto compare;
                  }
                break;
              case 6661:
                if (len == 5)
                  {
                    resword = &wordlist[1700];
                    goto compare;
                  }
                break;
              case 6668:
                if (len == 4)
                  {
                    resword = &wordlist[1701];
                    goto compare;
                  }
                break;
              case 6669:
                if (len == 12)
                  {
                    resword = &wordlist[1702];
                    goto compare;
                  }
                break;
              case 6671:
                if (len == 5)
                  {
                    resword = &wordlist[1703];
                    goto compare;
                  }
                break;
              case 6673:
                if (len == 5)
                  {
                    resword = &wordlist[1704];
                    goto compare;
                  }
                break;
              case 6681:
                if (len == 7)
                  {
                    resword = &wordlist[1705];
                    goto compare;
                  }
                break;
              case 6690:
                if (len == 5)
                  {
                    resword = &wordlist[1706];
                    goto compare;
                  }
                break;
              case 6700:
                if (len == 8)
                  {
                    resword = &wordlist[1707];
                    goto compare;
                  }
                break;
              case 6702:
                if (len == 9)
                  {
                    resword = &wordlist[1708];
                    goto compare;
                  }
                break;
              case 6706:
                if (len == 11)
                  {
                    resword = &wordlist[1709];
                    goto compare;
                  }
                break;
              case 6710:
                if (len == 5)
                  {
                    resword = &wordlist[1710];
                    goto compare;
                  }
                break;
              case 6715:
                if (len == 6)
                  {
                    resword = &wordlist[1711];
                    goto compare;
                  }
                break;
              case 6723:
                if (len == 8)
                  {
                    resword = &wordlist[1712];
                    goto compare;
                  }
                break;
              case 6730:
                if (len == 5)
                  {
                    resword = &wordlist[1713];
                    goto compare;
                  }
                break;
              case 6738:
                if (len == 5)
                  {
                    resword = &wordlist[1714];
                    goto compare;
                  }
                break;
              case 6739:
                if (len == 8)
                  {
                    resword = &wordlist[1715];
                    goto compare;
                  }
                break;
              case 6741:
                if (len == 14)
                  {
                    resword = &wordlist[1716];
                    goto compare;
                  }
                break;
              case 6746:
                if (len == 6)
                  {
                    resword = &wordlist[1717];
                    goto compare;
                  }
                break;
              case 6751:
                if (len == 5)
                  {
                    resword = &wordlist[1718];
                    goto compare;
                  }
                break;
              case 6757:
                if (len == 19)
                  {
                    resword = &wordlist[1719];
                    goto compare;
                  }
                break;
              case 6759:
                if (len == 31)
                  {
                    resword = &wordlist[1720];
                    goto compare;
                  }
                break;
              case 6768:
                if (len == 6)
                  {
                    resword = &wordlist[1721];
                    goto compare;
                  }
                break;
              case 6776:
                if (len == 5)
                  {
                    resword = &wordlist[1722];
                    goto compare;
                  }
                break;
              case 6780:
                if (len == 4)
                  {
                    resword = &wordlist[1723];
                    goto compare;
                  }
                break;
              case 6783:
                if (len == 10)
                  {
                    resword = &wordlist[1724];
                    goto compare;
                  }
                break;
              case 6785:
                if (len == 10)
                  {
                    resword = &wordlist[1725];
                    goto compare;
                  }
                break;
              case 6792:
                if (len == 5)
                  {
                    resword = &wordlist[1726];
                    goto compare;
                  }
                break;
              case 6794:
                if (len == 5)
                  {
                    resword = &wordlist[1727];
                    goto compare;
                  }
                break;
              case 6795:
                if (len == 4)
                  {
                    resword = &wordlist[1728];
                    goto compare;
                  }
                break;
              case 6797:
                if (len == 5)
                  {
                    resword = &wordlist[1729];
                    goto compare;
                  }
                break;
              case 6799:
                if (len == 5)
                  {
                    resword = &wordlist[1730];
                    goto compare;
                  }
                break;
              case 6807:
                if (len == 5)
                  {
                    resword = &wordlist[1731];
                    goto compare;
                  }
                break;
              case 6815:
                if (len == 4)
                  {
                    resword = &wordlist[1732];
                    goto compare;
                  }
                break;
              case 6821:
                if (len == 6)
                  {
                    resword = &wordlist[1733];
                    goto compare;
                  }
                break;
              case 6826:
                if (len == 3)
                  {
                    resword = &wordlist[1734];
                    goto compare;
                  }
                break;
              case 6828:
                if (len == 4)
                  {
                    resword = &wordlist[1735];
                    goto compare;
                  }
                break;
              case 6834:
                if (len == 5)
                  {
                    resword = &wordlist[1736];
                    goto compare;
                  }
                break;
              case 6837:
                if (len == 4)
                  {
                    resword = &wordlist[1737];
                    goto compare;
                  }
                break;
              case 6842:
                if (len == 5)
                  {
                    resword = &wordlist[1738];
                    goto compare;
                  }
                break;
              case 6846:
                if (len == 7)
                  {
                    resword = &wordlist[1739];
                    goto compare;
                  }
                break;
              case 6855:
                if (len == 5)
                  {
                    resword = &wordlist[1740];
                    goto compare;
                  }
                break;
              case 6864:
                if (len == 3)
                  {
                    resword = &wordlist[1741];
                    goto compare;
                  }
                break;
              case 6868:
                if (len == 11)
                  {
                    resword = &wordlist[1742];
                    goto compare;
                  }
                break;
              case 6887:
                if (len == 6)
                  {
                    resword = &wordlist[1743];
                    goto compare;
                  }
                break;
              case 6904:
                if (len == 15)
                  {
                    resword = &wordlist[1744];
                    goto compare;
                  }
                break;
              case 6909:
                if (len == 5)
                  {
                    resword = &wordlist[1745];
                    goto compare;
                  }
                break;
              case 6911:
                if (len == 7)
                  {
                    resword = &wordlist[1746];
                    goto compare;
                  }
                break;
              case 6913:
                if (len == 3)
                  {
                    resword = &wordlist[1747];
                    goto compare;
                  }
                break;
              case 6914:
                if (len == 3)
                  {
                    resword = &wordlist[1748];
                    goto compare;
                  }
                break;
              case 6915:
                if (len == 3)
                  {
                    resword = &wordlist[1749];
                    goto compare;
                  }
                break;
              case 6916:
                if (len == 3)
                  {
                    resword = &wordlist[1750];
                    goto compare;
                  }
                break;
              case 6917:
                if (len == 3)
                  {
                    resword = &wordlist[1751];
                    goto compare;
                  }
                break;
              case 6922:
                if (len == 3)
                  {
                    resword = &wordlist[1752];
                    goto compare;
                  }
                break;
              case 6926:
                if (len == 3)
                  {
                    resword = &wordlist[1753];
                    goto compare;
                  }
                break;
              case 6927:
                if (len == 5)
                  {
                    resword = &wordlist[1754];
                    goto compare;
                  }
                break;
              case 6928:
                if (len == 3)
                  {
                    resword = &wordlist[1755];
                    goto compare;
                  }
                break;
              case 6929:
                if (len == 3)
                  {
                    resword = &wordlist[1756];
                    goto compare;
                  }
                break;
              case 6931:
                if (len == 8)
                  {
                    resword = &wordlist[1757];
                    goto compare;
                  }
                break;
              case 6933:
                if (len == 5)
                  {
                    resword = &wordlist[1758];
                    goto compare;
                  }
                break;
              case 6936:
                if (len == 3)
                  {
                    resword = &wordlist[1759];
                    goto compare;
                  }
                break;
              case 6938:
                if (len == 5)
                  {
                    resword = &wordlist[1760];
                    goto compare;
                  }
                break;
              case 6946:
                if (len == 3)
                  {
                    resword = &wordlist[1761];
                    goto compare;
                  }
                break;
              case 6948:
                if (len == 8)
                  {
                    resword = &wordlist[1762];
                    goto compare;
                  }
                break;
              case 6949:
                if (len == 3)
                  {
                    resword = &wordlist[1763];
                    goto compare;
                  }
                break;
              case 6950:
                if (len == 8)
                  {
                    resword = &wordlist[1764];
                    goto compare;
                  }
                break;
              case 6954:
                if (len == 3)
                  {
                    resword = &wordlist[1765];
                    goto compare;
                  }
                break;
              case 6961:
                if (len == 7)
                  {
                    resword = &wordlist[1766];
                    goto compare;
                  }
                break;
              case 6975:
                if (len == 5)
                  {
                    resword = &wordlist[1767];
                    goto compare;
                  }
                break;
              case 6979:
                if (len == 3)
                  {
                    resword = &wordlist[1768];
                    goto compare;
                  }
                break;
              case 6992:
                if (len == 8)
                  {
                    resword = &wordlist[1769];
                    goto compare;
                  }
                break;
              case 6997:
                if (len == 3)
                  {
                    resword = &wordlist[1770];
                    goto compare;
                  }
                break;
              case 7026:
                if (len == 6)
                  {
                    resword = &wordlist[1771];
                    goto compare;
                  }
                break;
              case 7029:
                if (len == 5)
                  {
                    resword = &wordlist[1772];
                    goto compare;
                  }
                break;
              case 7031:
                if (len == 3)
                  {
                    resword = &wordlist[1773];
                    goto compare;
                  }
                break;
              case 7032:
                if (len == 3)
                  {
                    resword = &wordlist[1774];
                    goto compare;
                  }
                break;
              case 7035:
                if (len == 4)
                  {
                    resword = &wordlist[1775];
                    goto compare;
                  }
                break;
              case 7036:
                if (len == 20)
                  {
                    resword = &wordlist[1776];
                    goto compare;
                  }
                break;
              case 7037:
                if (len == 3)
                  {
                    resword = &wordlist[1777];
                    goto compare;
                  }
                break;
              case 7038:
                if (len == 7)
                  {
                    resword = &wordlist[1778];
                    goto compare;
                  }
                break;
              case 7040:
                if (len == 7)
                  {
                    resword = &wordlist[1779];
                    goto compare;
                  }
                break;
              case 7050:
                if (len == 4)
                  {
                    resword = &wordlist[1780];
                    goto compare;
                  }
                break;
              case 7051:
                if (len == 11)
                  {
                    resword = &wordlist[1781];
                    goto compare;
                  }
                break;
              case 7054:
                if (len == 3)
                  {
                    resword = &wordlist[1782];
                    goto compare;
                  }
                break;
              case 7060:
                if (len == 3)
                  {
                    resword = &wordlist[1783];
                    goto compare;
                  }
                break;
              case 7062:
                if (len == 3)
                  {
                    resword = &wordlist[1784];
                    goto compare;
                  }
                break;
              case 7067:
                if (len == 6)
                  {
                    resword = &wordlist[1785];
                    goto compare;
                  }
                break;
              case 7069:
                if (len == 3)
                  {
                    resword = &wordlist[1786];
                    goto compare;
                  }
                break;
              case 7076:
                if (len == 3)
                  {
                    resword = &wordlist[1787];
                    goto compare;
                  }
                break;
              case 7077:
                if (len == 6)
                  {
                    resword = &wordlist[1788];
                    goto compare;
                  }
                break;
              case 7080:
                if (len == 5)
                  {
                    resword = &wordlist[1789];
                    goto compare;
                  }
                break;
              case 7083:
                if (len == 3)
                  {
                    resword = &wordlist[1790];
                    goto compare;
                  }
                break;
              case 7094:
                if (len == 4)
                  {
                    resword = &wordlist[1791];
                    goto compare;
                  }
                break;
              case 7097:
                if (len == 3)
                  {
                    resword = &wordlist[1792];
                    goto compare;
                  }
                break;
              case 7105:
                if (len == 5)
                  {
                    resword = &wordlist[1793];
                    goto compare;
                  }
                break;
              case 7107:
                if (len == 5)
                  {
                    resword = &wordlist[1794];
                    goto compare;
                  }
                break;
              case 7109:
                if (len == 19)
                  {
                    resword = &wordlist[1795];
                    goto compare;
                  }
                break;
              case 7115:
                if (len == 6)
                  {
                    resword = &wordlist[1796];
                    goto compare;
                  }
                break;
              case 7121:
                if (len == 5)
                  {
                    resword = &wordlist[1797];
                    goto compare;
                  }
                break;
              case 7127:
                if (len == 3)
                  {
                    resword = &wordlist[1798];
                    goto compare;
                  }
                break;
              case 7128:
                if (len == 3)
                  {
                    resword = &wordlist[1799];
                    goto compare;
                  }
                break;
              case 7148:
                if (len == 3)
                  {
                    resword = &wordlist[1800];
                    goto compare;
                  }
                break;
              case 7149:
                if (len == 4)
                  {
                    resword = &wordlist[1801];
                    goto compare;
                  }
                break;
              case 7157:
                if (len == 5)
                  {
                    resword = &wordlist[1802];
                    goto compare;
                  }
                break;
              case 7160:
                if (len == 3)
                  {
                    resword = &wordlist[1803];
                    goto compare;
                  }
                break;
              case 7167:
                if (len == 6)
                  {
                    resword = &wordlist[1804];
                    goto compare;
                  }
                break;
              case 7170:
                if (len == 3)
                  {
                    resword = &wordlist[1805];
                    goto compare;
                  }
                break;
              case 7171:
                if (len == 12)
                  {
                    resword = &wordlist[1806];
                    goto compare;
                  }
                break;
              case 7193:
                if (len == 10)
                  {
                    resword = &wordlist[1807];
                    goto compare;
                  }
                break;
              case 7203:
                if (len == 7)
                  {
                    resword = &wordlist[1808];
                    goto compare;
                  }
                break;
              case 7210:
                if (len == 5)
                  {
                    resword = &wordlist[1809];
                    goto compare;
                  }
                break;
              case 7216:
                if (len == 18)
                  {
                    resword = &wordlist[1810];
                    goto compare;
                  }
                break;
              case 7221:
                if (len == 6)
                  {
                    resword = &wordlist[1811];
                    goto compare;
                  }
                break;
              case 7231:
                if (len == 3)
                  {
                    resword = &wordlist[1812];
                    goto compare;
                  }
                break;
              case 7250:
                if (len == 6)
                  {
                    resword = &wordlist[1813];
                    goto compare;
                  }
                break;
              case 7260:
                if (len == 14)
                  {
                    resword = &wordlist[1814];
                    goto compare;
                  }
                break;
              case 7270:
                if (len == 7)
                  {
                    resword = &wordlist[1815];
                    goto compare;
                  }
                break;
              case 7272:
                if (len == 5)
                  {
                    resword = &wordlist[1816];
                    goto compare;
                  }
                break;
              case 7274:
                if (len == 7)
                  {
                    resword = &wordlist[1817];
                    goto compare;
                  }
                break;
              case 7281:
                if (len == 8)
                  {
                    resword = &wordlist[1818];
                    goto compare;
                  }
                break;
              case 7282:
                if (len == 9)
                  {
                    resword = &wordlist[1819];
                    goto compare;
                  }
                break;
              case 7290:
                if (len == 3)
                  {
                    resword = &wordlist[1820];
                    goto compare;
                  }
                break;
              case 7291:
                if (len == 9)
                  {
                    resword = &wordlist[1821];
                    goto compare;
                  }
                break;
              case 7293:
                if (len == 3)
                  {
                    resword = &wordlist[1822];
                    goto compare;
                  }
                break;
              case 7296:
                if (len == 9)
                  {
                    resword = &wordlist[1823];
                    goto compare;
                  }
                break;
              case 7300:
                if (len == 7)
                  {
                    resword = &wordlist[1824];
                    goto compare;
                  }
                break;
              case 7312:
                if (len == 3)
                  {
                    resword = &wordlist[1825];
                    goto compare;
                  }
                break;
              case 7317:
                if (len == 6)
                  {
                    resword = &wordlist[1826];
                    goto compare;
                  }
                break;
              case 7318:
                if (len == 5)
                  {
                    resword = &wordlist[1827];
                    goto compare;
                  }
                break;
              case 7323:
                if (len == 3)
                  {
                    resword = &wordlist[1828];
                    goto compare;
                  }
                break;
              case 7332:
                if (len == 14)
                  {
                    resword = &wordlist[1829];
                    goto compare;
                  }
                break;
              case 7333:
                if (len == 4)
                  {
                    resword = &wordlist[1830];
                    goto compare;
                  }
                break;
              case 7347:
                if (len == 4)
                  {
                    resword = &wordlist[1831];
                    goto compare;
                  }
                break;
              case 7371:
                if (len == 4)
                  {
                    resword = &wordlist[1832];
                    goto compare;
                  }
                break;
              case 7382:
                if (len == 12)
                  {
                    resword = &wordlist[1833];
                    goto compare;
                  }
                break;
              case 7385:
                if (len == 6)
                  {
                    resword = &wordlist[1834];
                    goto compare;
                  }
                break;
              case 7387:
                if (len == 6)
                  {
                    resword = &wordlist[1835];
                    goto compare;
                  }
                break;
              case 7394:
                if (len == 7)
                  {
                    resword = &wordlist[1836];
                    goto compare;
                  }
                break;
              case 7397:
                if (len == 10)
                  {
                    resword = &wordlist[1837];
                    goto compare;
                  }
                break;
              case 7404:
                if (len == 10)
                  {
                    resword = &wordlist[1838];
                    goto compare;
                  }
                break;
              case 7423:
                if (len == 8)
                  {
                    resword = &wordlist[1839];
                    goto compare;
                  }
                break;
              case 7430:
                if (len == 4)
                  {
                    resword = &wordlist[1840];
                    goto compare;
                  }
                break;
              case 7442:
                if (len == 16)
                  {
                    resword = &wordlist[1841];
                    goto compare;
                  }
                break;
              case 7452:
                if (len == 6)
                  {
                    resword = &wordlist[1842];
                    goto compare;
                  }
                break;
              case 7456:
                if (len == 14)
                  {
                    resword = &wordlist[1843];
                    goto compare;
                  }
                break;
              case 7457:
                if (len == 13)
                  {
                    resword = &wordlist[1844];
                    goto compare;
                  }
                break;
              case 7490:
                if (len == 2)
                  {
                    resword = &wordlist[1845];
                    goto compare;
                  }
                break;
              case 7491:
                if (len == 10)
                  {
                    resword = &wordlist[1846];
                    goto compare;
                  }
                break;
              case 7492:
                if (len == 11)
                  {
                    resword = &wordlist[1847];
                    goto compare;
                  }
                break;
              case 7494:
                if (len == 15)
                  {
                    resword = &wordlist[1848];
                    goto compare;
                  }
                break;
              case 7506:
                if (len == 7)
                  {
                    resword = &wordlist[1849];
                    goto compare;
                  }
                break;
              case 7511:
                if (len == 16)
                  {
                    resword = &wordlist[1850];
                    goto compare;
                  }
                break;
              case 7513:
                if (len == 17)
                  {
                    resword = &wordlist[1851];
                    goto compare;
                  }
                break;
              case 7525:
                if (len == 6)
                  {
                    resword = &wordlist[1852];
                    goto compare;
                  }
                break;
              case 7527:
                if (len == 18)
                  {
                    resword = &wordlist[1853];
                    goto compare;
                  }
                break;
              case 7528:
                if (len == 8)
                  {
                    resword = &wordlist[1854];
                    goto compare;
                  }
                break;
              case 7530:
                if (len == 7)
                  {
                    resword = &wordlist[1855];
                    goto compare;
                  }
                break;
              case 7531:
                if (len == 10)
                  {
                    resword = &wordlist[1856];
                    goto compare;
                  }
                break;
              case 7533:
                if (len == 5)
                  {
                    resword = &wordlist[1857];
                    goto compare;
                  }
                break;
              case 7539:
                if (len == 3)
                  {
                    resword = &wordlist[1858];
                    goto compare;
                  }
                break;
              case 7547:
                if (len == 6)
                  {
                    resword = &wordlist[1859];
                    goto compare;
                  }
                break;
              case 7549:
                if (len == 8)
                  {
                    resword = &wordlist[1860];
                    goto compare;
                  }
                break;
              case 7551:
                if (len == 4)
                  {
                    resword = &wordlist[1861];
                    goto compare;
                  }
                break;
              case 7565:
                if (len == 3)
                  {
                    resword = &wordlist[1862];
                    goto compare;
                  }
                break;
              case 7585:
                if (len == 7)
                  {
                    resword = &wordlist[1863];
                    goto compare;
                  }
                break;
              case 7586:
                if (len == 13)
                  {
                    resword = &wordlist[1864];
                    goto compare;
                  }
                break;
              case 7587:
                if (len == 5)
                  {
                    resword = &wordlist[1865];
                    goto compare;
                  }
                break;
              case 7592:
                if (len == 14)
                  {
                    resword = &wordlist[1866];
                    goto compare;
                  }
                break;
              case 7600:
                if (len == 16)
                  {
                    resword = &wordlist[1867];
                    goto compare;
                  }
                break;
              case 7601:
                if (len == 13)
                  {
                    resword = &wordlist[1868];
                    goto compare;
                  }
                break;
              case 7604:
                if (len == 18)
                  {
                    resword = &wordlist[1869];
                    goto compare;
                  }
                break;
              case 7610:
                if (len == 5)
                  {
                    resword = &wordlist[1870];
                    goto compare;
                  }
                break;
              case 7612:
                if (len == 6)
                  {
                    resword = &wordlist[1871];
                    goto compare;
                  }
                break;
              case 7633:
                if (len == 4)
                  {
                    resword = &wordlist[1872];
                    goto compare;
                  }
                break;
              case 7644:
                if (len == 8)
                  {
                    resword = &wordlist[1873];
                    goto compare;
                  }
                break;
              case 7647:
                if (len == 16)
                  {
                    resword = &wordlist[1874];
                    goto compare;
                  }
                break;
              case 7649:
                if (len == 5)
                  {
                    resword = &wordlist[1875];
                    goto compare;
                  }
                break;
              case 7672:
                if (len == 18)
                  {
                    resword = &wordlist[1876];
                    goto compare;
                  }
                break;
              case 7688:
                if (len == 3)
                  {
                    resword = &wordlist[1877];
                    goto compare;
                  }
                break;
              case 7721:
                if (len == 2)
                  {
                    resword = &wordlist[1878];
                    goto compare;
                  }
                break;
              case 7722:
                if (len == 7)
                  {
                    resword = &wordlist[1879];
                    goto compare;
                  }
                break;
              case 7729:
                if (len == 5)
                  {
                    resword = &wordlist[1880];
                    goto compare;
                  }
                break;
              case 7738:
                if (len == 9)
                  {
                    resword = &wordlist[1881];
                    goto compare;
                  }
                break;
              case 7760:
                if (len == 3)
                  {
                    resword = &wordlist[1882];
                    goto compare;
                  }
                break;
              case 7769:
                if (len == 2)
                  {
                    resword = &wordlist[1883];
                    goto compare;
                  }
                break;
              case 7835:
                if (len == 5)
                  {
                    resword = &wordlist[1884];
                    goto compare;
                  }
                break;
              case 7836:
                if (len == 5)
                  {
                    resword = &wordlist[1885];
                    goto compare;
                  }
                break;
              case 7839:
                if (len == 6)
                  {
                    resword = &wordlist[1886];
                    goto compare;
                  }
                break;
              case 7858:
                if (len == 17)
                  {
                    resword = &wordlist[1887];
                    goto compare;
                  }
                break;
              case 7873:
                if (len == 6)
                  {
                    resword = &wordlist[1888];
                    goto compare;
                  }
                break;
              case 7878:
                if (len == 5)
                  {
                    resword = &wordlist[1889];
                    goto compare;
                  }
                break;
              case 7885:
                if (len == 5)
                  {
                    resword = &wordlist[1890];
                    goto compare;
                  }
                break;
              case 7896:
                if (len == 5)
                  {
                    resword = &wordlist[1891];
                    goto compare;
                  }
                break;
              case 7901:
                if (len == 4)
                  {
                    resword = &wordlist[1892];
                    goto compare;
                  }
                break;
              case 7903:
                if (len == 3)
                  {
                    resword = &wordlist[1893];
                    goto compare;
                  }
                break;
              case 7904:
                if (len == 5)
                  {
                    resword = &wordlist[1894];
                    goto compare;
                  }
                break;
              case 7906:
                if (len == 15)
                  {
                    resword = &wordlist[1895];
                    goto compare;
                  }
                break;
              case 7919:
                if (len == 13)
                  {
                    resword = &wordlist[1896];
                    goto compare;
                  }
                break;
              case 7937:
                if (len == 10)
                  {
                    resword = &wordlist[1897];
                    goto compare;
                  }
                break;
              case 7963:
                if (len == 5)
                  {
                    resword = &wordlist[1898];
                    goto compare;
                  }
                break;
              case 8024:
                if (len == 7)
                  {
                    resword = &wordlist[1899];
                    goto compare;
                  }
                break;
              case 8027:
                if (len == 21)
                  {
                    resword = &wordlist[1900];
                    goto compare;
                  }
                break;
              case 8047:
                if (len == 6)
                  {
                    resword = &wordlist[1901];
                    goto compare;
                  }
                break;
              case 8064:
                if (len == 6)
                  {
                    resword = &wordlist[1902];
                    goto compare;
                  }
                break;
              case 8068:
                if (len == 8)
                  {
                    resword = &wordlist[1903];
                    goto compare;
                  }
                break;
              case 8084:
                if (len == 8)
                  {
                    resword = &wordlist[1904];
                    goto compare;
                  }
                break;
              case 8102:
                if (len == 7)
                  {
                    resword = &wordlist[1905];
                    goto compare;
                  }
                break;
              case 8116:
                if (len == 21)
                  {
                    resword = &wordlist[1906];
                    goto compare;
                  }
                break;
              case 8126:
                if (len == 13)
                  {
                    resword = &wordlist[1907];
                    goto compare;
                  }
                break;
              case 8128:
                if (len == 3)
                  {
                    resword = &wordlist[1908];
                    goto compare;
                  }
                break;
              case 8179:
                if (len == 21)
                  {
                    resword = &wordlist[1909];
                    goto compare;
                  }
                break;
              case 8214:
                if (len == 7)
                  {
                    resword = &wordlist[1910];
                    goto compare;
                  }
                break;
              case 8239:
                if (len == 15)
                  {
                    resword = &wordlist[1911];
                    goto compare;
                  }
                break;
              case 8240:
                if (len == 6)
                  {
                    resword = &wordlist[1912];
                    goto compare;
                  }
                break;
              case 8241:
                if (len == 7)
                  {
                    resword = &wordlist[1913];
                    goto compare;
                  }
                break;
              case 8249:
                if (len == 7)
                  {
                    resword = &wordlist[1914];
                    goto compare;
                  }
                break;
              case 8255:
                if (len == 15)
                  {
                    resword = &wordlist[1915];
                    goto compare;
                  }
                break;
              case 8272:
                if (len == 16)
                  {
                    resword = &wordlist[1916];
                    goto compare;
                  }
                break;
              case 8274:
                if (len == 5)
                  {
                    resword = &wordlist[1917];
                    goto compare;
                  }
                break;
              case 8307:
                if (len == 5)
                  {
                    resword = &wordlist[1918];
                    goto compare;
                  }
                break;
              case 8308:
                if (len == 15)
                  {
                    resword = &wordlist[1919];
                    goto compare;
                  }
                break;
              case 8309:
                if (len == 8)
                  {
                    resword = &wordlist[1920];
                    goto compare;
                  }
                break;
              case 8311:
                if (len == 6)
                  {
                    resword = &wordlist[1921];
                    goto compare;
                  }
                break;
              case 8343:
                if (len == 7)
                  {
                    resword = &wordlist[1922];
                    goto compare;
                  }
                break;
              case 8357:
                if (len == 4)
                  {
                    resword = &wordlist[1923];
                    goto compare;
                  }
                break;
              case 8364:
                if (len == 5)
                  {
                    resword = &wordlist[1924];
                    goto compare;
                  }
                break;
              case 8367:
                if (len == 16)
                  {
                    resword = &wordlist[1925];
                    goto compare;
                  }
                break;
              case 8368:
                if (len == 15)
                  {
                    resword = &wordlist[1926];
                    goto compare;
                  }
                break;
              case 8371:
                if (len == 6)
                  {
                    resword = &wordlist[1927];
                    goto compare;
                  }
                break;
              case 8386:
                if (len == 5)
                  {
                    resword = &wordlist[1928];
                    goto compare;
                  }
                break;
              case 8400:
                if (len == 6)
                  {
                    resword = &wordlist[1929];
                    goto compare;
                  }
                break;
              case 8439:
                if (len == 6)
                  {
                    resword = &wordlist[1930];
                    goto compare;
                  }
                break;
              case 8441:
                if (len == 6)
                  {
                    resword = &wordlist[1931];
                    goto compare;
                  }
                break;
              case 8473:
                if (len == 8)
                  {
                    resword = &wordlist[1932];
                    goto compare;
                  }
                break;
              case 8482:
                if (len == 5)
                  {
                    resword = &wordlist[1933];
                    goto compare;
                  }
                break;
              case 8484:
                if (len == 5)
                  {
                    resword = &wordlist[1934];
                    goto compare;
                  }
                break;
              case 8491:
                if (len == 6)
                  {
                    resword = &wordlist[1935];
                    goto compare;
                  }
                break;
              case 8499:
                if (len == 15)
                  {
                    resword = &wordlist[1936];
                    goto compare;
                  }
                break;
              case 8513:
                if (len == 4)
                  {
                    resword = &wordlist[1937];
                    goto compare;
                  }
                break;
              case 8521:
                if (len == 7)
                  {
                    resword = &wordlist[1938];
                    goto compare;
                  }
                break;
              case 8530:
                if (len == 5)
                  {
                    resword = &wordlist[1939];
                    goto compare;
                  }
                break;
              case 8536:
                if (len == 11)
                  {
                    resword = &wordlist[1940];
                    goto compare;
                  }
                break;
              case 8538:
                if (len == 7)
                  {
                    resword = &wordlist[1941];
                    goto compare;
                  }
                break;
              case 8546:
                if (len == 4)
                  {
                    resword = &wordlist[1942];
                    goto compare;
                  }
                break;
              case 8561:
                if (len == 5)
                  {
                    resword = &wordlist[1943];
                    goto compare;
                  }
                break;
              case 8567:
                if (len == 11)
                  {
                    resword = &wordlist[1944];
                    goto compare;
                  }
                break;
              case 8614:
                if (len == 10)
                  {
                    resword = &wordlist[1945];
                    goto compare;
                  }
                break;
              case 8618:
                if (len == 13)
                  {
                    resword = &wordlist[1946];
                    goto compare;
                  }
                break;
              case 8640:
                if (len == 17)
                  {
                    resword = &wordlist[1947];
                    goto compare;
                  }
                break;
              case 8648:
                if (len == 16)
                  {
                    resword = &wordlist[1948];
                    goto compare;
                  }
                break;
              case 8649:
                if (len == 15)
                  {
                    resword = &wordlist[1949];
                    goto compare;
                  }
                break;
              case 8657:
                if (len == 3)
                  {
                    resword = &wordlist[1950];
                    goto compare;
                  }
                break;
              case 8669:
                if (len == 5)
                  {
                    resword = &wordlist[1951];
                    goto compare;
                  }
                break;
              case 8671:
                if (len == 5)
                  {
                    resword = &wordlist[1952];
                    goto compare;
                  }
                break;
              case 8677:
                if (len == 5)
                  {
                    resword = &wordlist[1953];
                    goto compare;
                  }
                break;
              case 8693:
                if (len == 7)
                  {
                    resword = &wordlist[1954];
                    goto compare;
                  }
                break;
              case 8736:
                if (len == 11)
                  {
                    resword = &wordlist[1955];
                    goto compare;
                  }
                break;
              case 8769:
                if (len == 6)
                  {
                    resword = &wordlist[1956];
                    goto compare;
                  }
                break;
              case 8773:
                if (len == 5)
                  {
                    resword = &wordlist[1957];
                    goto compare;
                  }
                break;
              case 8775:
                if (len == 3)
                  {
                    resword = &wordlist[1958];
                    goto compare;
                  }
                break;
              case 8776:
                if (len == 4)
                  {
                    resword = &wordlist[1959];
                    goto compare;
                  }
                break;
              case 8779:
                if (len == 6)
                  {
                    resword = &wordlist[1960];
                    goto compare;
                  }
                break;
              case 8787:
                if (len == 4)
                  {
                    resword = &wordlist[1961];
                    goto compare;
                  }
                break;
              case 8794:
                if (len == 6)
                  {
                    resword = &wordlist[1962];
                    goto compare;
                  }
                break;
              case 8797:
                if (len == 6)
                  {
                    resword = &wordlist[1963];
                    goto compare;
                  }
                break;
              case 8798:
                if (len == 5)
                  {
                    resword = &wordlist[1964];
                    goto compare;
                  }
                break;
              case 8812:
                if (len == 14)
                  {
                    resword = &wordlist[1965];
                    goto compare;
                  }
                break;
              case 8814:
                if (len == 6)
                  {
                    resword = &wordlist[1966];
                    goto compare;
                  }
                break;
              case 8820:
                if (len == 18)
                  {
                    resword = &wordlist[1967];
                    goto compare;
                  }
                break;
              case 8821:
                if (len == 7)
                  {
                    resword = &wordlist[1968];
                    goto compare;
                  }
                break;
              case 8823:
                if (len == 3)
                  {
                    resword = &wordlist[1969];
                    goto compare;
                  }
                break;
              case 8870:
                if (len == 4)
                  {
                    resword = &wordlist[1970];
                    goto compare;
                  }
                break;
              case 8872:
                if (len == 4)
                  {
                    resword = &wordlist[1971];
                    goto compare;
                  }
                break;
              case 8929:
                if (len == 15)
                  {
                    resword = &wordlist[1972];
                    goto compare;
                  }
                break;
              case 8932:
                if (len == 18)
                  {
                    resword = &wordlist[1973];
                    goto compare;
                  }
                break;
              case 8962:
                if (len == 11)
                  {
                    resword = &wordlist[1974];
                    goto compare;
                  }
                break;
              case 8965:
                if (len == 14)
                  {
                    resword = &wordlist[1975];
                    goto compare;
                  }
                break;
              case 8966:
                if (len == 4)
                  {
                    resword = &wordlist[1976];
                    goto compare;
                  }
                break;
              case 8975:
                if (len == 6)
                  {
                    resword = &wordlist[1977];
                    goto compare;
                  }
                break;
              case 8992:
                if (len == 6)
                  {
                    resword = &wordlist[1978];
                    goto compare;
                  }
                break;
              case 8994:
                if (len == 6)
                  {
                    resword = &wordlist[1979];
                    goto compare;
                  }
                break;
              case 9014:
                if (len == 6)
                  {
                    resword = &wordlist[1980];
                    goto compare;
                  }
                break;
              case 9024:
                if (len == 6)
                  {
                    resword = &wordlist[1981];
                    goto compare;
                  }
                break;
              case 9037:
                if (len == 5)
                  {
                    resword = &wordlist[1982];
                    goto compare;
                  }
                break;
              case 9041:
                if (len == 8)
                  {
                    resword = &wordlist[1983];
                    goto compare;
                  }
                break;
              case 9047:
                if (len == 4)
                  {
                    resword = &wordlist[1984];
                    goto compare;
                  }
                break;
              case 9049:
                if (len == 8)
                  {
                    resword = &wordlist[1985];
                    goto compare;
                  }
                break;
              case 9061:
                if (len == 8)
                  {
                    resword = &wordlist[1986];
                    goto compare;
                  }
                break;
              case 9076:
                if (len == 6)
                  {
                    resword = &wordlist[1987];
                    goto compare;
                  }
                break;
              case 9089:
                if (len == 16)
                  {
                    resword = &wordlist[1988];
                    goto compare;
                  }
                break;
              case 9101:
                if (len == 7)
                  {
                    resword = &wordlist[1989];
                    goto compare;
                  }
                break;
              case 9109:
                if (len == 5)
                  {
                    resword = &wordlist[1990];
                    goto compare;
                  }
                break;
              case 9132:
                if (len == 6)
                  {
                    resword = &wordlist[1991];
                    goto compare;
                  }
                break;
              case 9137:
                if (len == 6)
                  {
                    resword = &wordlist[1992];
                    goto compare;
                  }
                break;
              case 9153:
                if (len == 13)
                  {
                    resword = &wordlist[1993];
                    goto compare;
                  }
                break;
              case 9155:
                if (len == 12)
                  {
                    resword = &wordlist[1994];
                    goto compare;
                  }
                break;
              case 9157:
                if (len == 6)
                  {
                    resword = &wordlist[1995];
                    goto compare;
                  }
                break;
              case 9158:
                if (len == 6)
                  {
                    resword = &wordlist[1996];
                    goto compare;
                  }
                break;
              case 9169:
                if (len == 8)
                  {
                    resword = &wordlist[1997];
                    goto compare;
                  }
                break;
              case 9177:
                if (len == 11)
                  {
                    resword = &wordlist[1998];
                    goto compare;
                  }
                break;
              case 9205:
                if (len == 18)
                  {
                    resword = &wordlist[1999];
                    goto compare;
                  }
                break;
              case 9218:
                if (len == 6)
                  {
                    resword = &wordlist[2000];
                    goto compare;
                  }
                break;
              case 9223:
                if (len == 5)
                  {
                    resword = &wordlist[2001];
                    goto compare;
                  }
                break;
              case 9226:
                if (len == 6)
                  {
                    resword = &wordlist[2002];
                    goto compare;
                  }
                break;
              case 9228:
                if (len == 11)
                  {
                    resword = &wordlist[2003];
                    goto compare;
                  }
                break;
              case 9250:
                if (len == 4)
                  {
                    resword = &wordlist[2004];
                    goto compare;
                  }
                break;
              case 9266:
                if (len == 6)
                  {
                    resword = &wordlist[2005];
                    goto compare;
                  }
                break;
              case 9277:
                if (len == 14)
                  {
                    resword = &wordlist[2006];
                    goto compare;
                  }
                break;
              case 9303:
                if (len == 6)
                  {
                    resword = &wordlist[2007];
                    goto compare;
                  }
                break;
              case 9324:
                if (len == 9)
                  {
                    resword = &wordlist[2008];
                    goto compare;
                  }
                break;
              case 9334:
                if (len == 18)
                  {
                    resword = &wordlist[2009];
                    goto compare;
                  }
                break;
              case 9344:
                if (len == 5)
                  {
                    resword = &wordlist[2010];
                    goto compare;
                  }
                break;
              case 9364:
                if (len == 11)
                  {
                    resword = &wordlist[2011];
                    goto compare;
                  }
                break;
              case 9370:
                if (len == 5)
                  {
                    resword = &wordlist[2012];
                    goto compare;
                  }
                break;
              case 9403:
                if (len == 6)
                  {
                    resword = &wordlist[2013];
                    goto compare;
                  }
                break;
              case 9404:
                if (len == 10)
                  {
                    resword = &wordlist[2014];
                    goto compare;
                  }
                break;
              case 9421:
                if (len == 11)
                  {
                    resword = &wordlist[2015];
                    goto compare;
                  }
                break;
              case 9422:
                if (len == 14)
                  {
                    resword = &wordlist[2016];
                    goto compare;
                  }
                break;
              case 9425:
                if (len == 8)
                  {
                    resword = &wordlist[2017];
                    goto compare;
                  }
                break;
              case 9435:
                if (len == 19)
                  {
                    resword = &wordlist[2018];
                    goto compare;
                  }
                break;
              case 9457:
                if (len == 6)
                  {
                    resword = &wordlist[2019];
                    goto compare;
                  }
                break;
              case 9462:
                if (len == 14)
                  {
                    resword = &wordlist[2020];
                    goto compare;
                  }
                break;
              case 9471:
                if (len == 5)
                  {
                    resword = &wordlist[2021];
                    goto compare;
                  }
                break;
              case 9532:
                if (len == 13)
                  {
                    resword = &wordlist[2022];
                    goto compare;
                  }
                break;
              case 9536:
                if (len == 6)
                  {
                    resword = &wordlist[2023];
                    goto compare;
                  }
                break;
              case 9553:
                if (len == 5)
                  {
                    resword = &wordlist[2024];
                    goto compare;
                  }
                break;
              case 9555:
                if (len == 6)
                  {
                    resword = &wordlist[2025];
                    goto compare;
                  }
                break;
              case 9567:
                if (len == 6)
                  {
                    resword = &wordlist[2026];
                    goto compare;
                  }
                break;
              case 9588:
                if (len == 4)
                  {
                    resword = &wordlist[2027];
                    goto compare;
                  }
                break;
              case 9601:
                if (len == 19)
                  {
                    resword = &wordlist[2028];
                    goto compare;
                  }
                break;
              case 9602:
                if (len == 16)
                  {
                    resword = &wordlist[2029];
                    goto compare;
                  }
                break;
              case 9605:
                if (len == 21)
                  {
                    resword = &wordlist[2030];
                    goto compare;
                  }
                break;
              case 9607:
                if (len == 14)
                  {
                    resword = &wordlist[2031];
                    goto compare;
                  }
                break;
              case 9615:
                if (len == 7)
                  {
                    resword = &wordlist[2032];
                    goto compare;
                  }
                break;
              case 9616:
                if (len == 17)
                  {
                    resword = &wordlist[2033];
                    goto compare;
                  }
                break;
              case 9635:
                if (len == 7)
                  {
                    resword = &wordlist[2034];
                    goto compare;
                  }
                break;
              case 9661:
                if (len == 8)
                  {
                    resword = &wordlist[2035];
                    goto compare;
                  }
                break;
              case 9669:
                if (len == 6)
                  {
                    resword = &wordlist[2036];
                    goto compare;
                  }
                break;
              case 9673:
                if (len == 4)
                  {
                    resword = &wordlist[2037];
                    goto compare;
                  }
                break;
              case 9680:
                if (len == 5)
                  {
                    resword = &wordlist[2038];
                    goto compare;
                  }
                break;
              case 9681:
                if (len == 11)
                  {
                    resword = &wordlist[2039];
                    goto compare;
                  }
                break;
              case 9683:
                if (len == 4)
                  {
                    resword = &wordlist[2040];
                    goto compare;
                  }
                break;
              case 9707:
                if (len == 5)
                  {
                    resword = &wordlist[2041];
                    goto compare;
                  }
                break;
              case 9716:
                if (len == 7)
                  {
                    resword = &wordlist[2042];
                    goto compare;
                  }
                break;
              case 9753:
                if (len == 5)
                  {
                    resword = &wordlist[2043];
                    goto compare;
                  }
                break;
              case 9768:
                if (len == 13)
                  {
                    resword = &wordlist[2044];
                    goto compare;
                  }
                break;
              case 9931:
                if (len == 15)
                  {
                    resword = &wordlist[2045];
                    goto compare;
                  }
                break;
              case 9947:
                if (len == 6)
                  {
                    resword = &wordlist[2046];
                    goto compare;
                  }
                break;
              case 9948:
                if (len == 10)
                  {
                    resword = &wordlist[2047];
                    goto compare;
                  }
                break;
              case 9973:
                if (len == 3)
                  {
                    resword = &wordlist[2048];
                    goto compare;
                  }
                break;
              case 9997:
                if (len == 6)
                  {
                    resword = &wordlist[2049];
                    goto compare;
                  }
                break;
              case 9999:
                if (len == 6)
                  {
                    resword = &wordlist[2050];
                    goto compare;
                  }
                break;
              case 10005:
                if (len == 5)
                  {
                    resword = &wordlist[2051];
                    goto compare;
                  }
                break;
              case 10036:
                if (len == 5)
                  {
                    resword = &wordlist[2052];
                    goto compare;
                  }
                break;
              case 10128:
                if (len == 6)
                  {
                    resword = &wordlist[2053];
                    goto compare;
                  }
                break;
              case 10157:
                if (len == 3)
                  {
                    resword = &wordlist[2054];
                    goto compare;
                  }
                break;
              case 10193:
                if (len == 7)
                  {
                    resword = &wordlist[2055];
                    goto compare;
                  }
                break;
              case 10201:
                if (len == 15)
                  {
                    resword = &wordlist[2056];
                    goto compare;
                  }
                break;
              case 10214:
                if (len == 13)
                  {
                    resword = &wordlist[2057];
                    goto compare;
                  }
                break;
              case 10257:
                if (len == 15)
                  {
                    resword = &wordlist[2058];
                    goto compare;
                  }
                break;
              case 10295:
                if (len == 15)
                  {
                    resword = &wordlist[2059];
                    goto compare;
                  }
                break;
              case 10336:
                if (len == 6)
                  {
                    resword = &wordlist[2060];
                    goto compare;
                  }
                break;
              case 10357:
                if (len == 5)
                  {
                    resword = &wordlist[2061];
                    goto compare;
                  }
                break;
              case 10437:
                if (len == 5)
                  {
                    resword = &wordlist[2062];
                    goto compare;
                  }
                break;
              case 10524:
                if (len == 7)
                  {
                    resword = &wordlist[2063];
                    goto compare;
                  }
                break;
              case 10617:
                if (len == 6)
                  {
                    resword = &wordlist[2064];
                    goto compare;
                  }
                break;
              case 10622:
                if (len == 7)
                  {
                    resword = &wordlist[2065];
                    goto compare;
                  }
                break;
              case 10635:
                if (len == 9)
                  {
                    resword = &wordlist[2066];
                    goto compare;
                  }
                break;
              case 10675:
                if (len == 6)
                  {
                    resword = &wordlist[2067];
                    goto compare;
                  }
                break;
              case 10691:
                if (len == 4)
                  {
                    resword = &wordlist[2068];
                    goto compare;
                  }
                break;
              case 10840:
                if (len == 5)
                  {
                    resword = &wordlist[2069];
                    goto compare;
                  }
                break;
              case 10869:
                if (len == 11)
                  {
                    resword = &wordlist[2070];
                    goto compare;
                  }
                break;
              case 10907:
                if (len == 8)
                  {
                    resword = &wordlist[2071];
                    goto compare;
                  }
                break;
              case 10943:
                if (len == 6)
                  {
                    resword = &wordlist[2072];
                    goto compare;
                  }
                break;
              case 10945:
                if (len == 3)
                  {
                    resword = &wordlist[2073];
                    goto compare;
                  }
                break;
              case 10979:
                if (len == 7)
                  {
                    resword = &wordlist[2074];
                    goto compare;
                  }
                break;
              case 11048:
                if (len == 7)
                  {
                    resword = &wordlist[2075];
                    goto compare;
                  }
                break;
              case 11120:
                if (len == 6)
                  {
                    resword = &wordlist[2076];
                    goto compare;
                  }
                break;
              case 11133:
                if (len == 3)
                  {
                    resword = &wordlist[2077];
                    goto compare;
                  }
                break;
              case 11162:
                if (len == 17)
                  {
                    resword = &wordlist[2078];
                    goto compare;
                  }
                break;
              case 11179:
                if (len == 5)
                  {
                    resword = &wordlist[2079];
                    goto compare;
                  }
                break;
              case 11216:
                if (len == 5)
                  {
                    resword = &wordlist[2080];
                    goto compare;
                  }
                break;
              case 11346:
                if (len == 8)
                  {
                    resword = &wordlist[2081];
                    goto compare;
                  }
                break;
              case 11454:
                if (len == 13)
                  {
                    resword = &wordlist[2082];
                    goto compare;
                  }
                break;
              case 11457:
                if (len == 16)
                  {
                    resword = &wordlist[2083];
                    goto compare;
                  }
                break;
              case 11462:
                if (len == 8)
                  {
                    resword = &wordlist[2084];
                    goto compare;
                  }
                break;
              case 11507:
                if (len == 6)
                  {
                    resword = &wordlist[2085];
                    goto compare;
                  }
                break;
              case 11518:
                if (len == 13)
                  {
                    resword = &wordlist[2086];
                    goto compare;
                  }
                break;
              case 11534:
                if (len == 6)
                  {
                    resword = &wordlist[2087];
                    goto compare;
                  }
                break;
              case 11573:
                if (len == 6)
                  {
                    resword = &wordlist[2088];
                    goto compare;
                  }
                break;
              case 11587:
                if (len == 15)
                  {
                    resword = &wordlist[2089];
                    goto compare;
                  }
                break;
              case 11590:
                if (len == 18)
                  {
                    resword = &wordlist[2090];
                    goto compare;
                  }
                break;
              case 11626:
                if (len == 8)
                  {
                    resword = &wordlist[2091];
                    goto compare;
                  }
                break;
              case 11648:
                if (len == 8)
                  {
                    resword = &wordlist[2092];
                    goto compare;
                  }
                break;
              case 11669:
                if (len == 7)
                  {
                    resword = &wordlist[2093];
                    goto compare;
                  }
                break;
              case 11696:
                if (len == 6)
                  {
                    resword = &wordlist[2094];
                    goto compare;
                  }
                break;
              case 11705:
                if (len == 6)
                  {
                    resword = &wordlist[2095];
                    goto compare;
                  }
                break;
              case 11726:
                if (len == 10)
                  {
                    resword = &wordlist[2096];
                    goto compare;
                  }
                break;
              case 11733:
                if (len == 6)
                  {
                    resword = &wordlist[2097];
                    goto compare;
                  }
                break;
              case 11762:
                if (len == 11)
                  {
                    resword = &wordlist[2098];
                    goto compare;
                  }
                break;
              case 11843:
                if (len == 6)
                  {
                    resword = &wordlist[2099];
                    goto compare;
                  }
                break;
              case 11870:
                if (len == 11)
                  {
                    resword = &wordlist[2100];
                    goto compare;
                  }
                break;
              case 11898:
                if (len == 17)
                  {
                    resword = &wordlist[2101];
                    goto compare;
                  }
                break;
              case 11996:
                if (len == 8)
                  {
                    resword = &wordlist[2102];
                    goto compare;
                  }
                break;
              case 12105:
                if (len == 8)
                  {
                    resword = &wordlist[2103];
                    goto compare;
                  }
                break;
              case 12159:
                if (len == 10)
                  {
                    resword = &wordlist[2104];
                    goto compare;
                  }
                break;
              case 12308:
                if (len == 10)
                  {
                    resword = &wordlist[2105];
                    goto compare;
                  }
                break;
              case 12482:
                if (len == 16)
                  {
                    resword = &wordlist[2106];
                    goto compare;
                  }
                break;
              case 12488:
                if (len == 6)
                  {
                    resword = &wordlist[2107];
                    goto compare;
                  }
                break;
              case 12489:
                if (len == 12)
                  {
                    resword = &wordlist[2108];
                    goto compare;
                  }
                break;
              case 12592:
                if (len == 7)
                  {
                    resword = &wordlist[2109];
                    goto compare;
                  }
                break;
              case 12611:
                if (len == 11)
                  {
                    resword = &wordlist[2110];
                    goto compare;
                  }
                break;
              case 12713:
                if (len == 6)
                  {
                    resword = &wordlist[2111];
                    goto compare;
                  }
                break;
              case 12801:
                if (len == 8)
                  {
                    resword = &wordlist[2112];
                    goto compare;
                  }
                break;
              case 13031:
                if (len == 5)
                  {
                    resword = &wordlist[2113];
                    goto compare;
                  }
                break;
              case 13147:
                if (len == 6)
                  {
                    resword = &wordlist[2114];
                    goto compare;
                  }
                break;
              case 13182:
                if (len == 4)
                  {
                    resword = &wordlist[2115];
                    goto compare;
                  }
                break;
              case 13278:
                if (len == 6)
                  {
                    resword = &wordlist[2116];
                    goto compare;
                  }
                break;
              case 13750:
                if (len == 11)
                  {
                    resword = &wordlist[2117];
                    goto compare;
                  }
                break;
              case 13907:
                if (len == 16)
                  {
                    resword = &wordlist[2118];
                    goto compare;
                  }
                break;
              case 13958:
                if (len == 14)
                  {
                    resword = &wordlist[2119];
                    goto compare;
                  }
                break;
              case 14276:
                if (len == 14)
                  {
                    resword = &wordlist[2120];
                    goto compare;
                  }
                break;
              case 14361:
                if (len == 11)
                  {
                    resword = &wordlist[2121];
                    goto compare;
                  }
                break;
              case 14447:
                if (len == 8)
                  {
                    resword = &wordlist[2122];
                    goto compare;
                  }
                break;
              case 15305:
                if (len == 14)
                  {
                    resword = &wordlist[2123];
                    goto compare;
                  }
                break;
              case 15620:
                if (len == 15)
                  {
                    resword = &wordlist[2124];
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
