#ifndef _INTTYPES_H
#define _INTTYPES_H

#include <stdint.h>

/* Format specifiers for printf/scanf functions */

/* printf macros for signed integers */
#define PRId8 "d"
#define PRId16 "d"
#define PRId32 "d"
#define PRId64 "lld"

#define PRIi8 "i"
#define PRIi16 "i"
#define PRIi32 "i"
#define PRIi64 "lli"

/* printf macros for unsigned integers */
#define PRIu8 "u"
#define PRIu16 "u"
#define PRIu32 "u"
#define PRIu64 "llu"

#define PRIo8 "o"
#define PRIo16 "o"
#define PRIo32 "o"
#define PRIo64 "llo"

#define PRIx8 "x"
#define PRIx16 "x"
#define PRIx32 "x"
#define PRIx64 "llx"

#define PRIX8 "X"
#define PRIX16 "X"
#define PRIX32 "X"
#define PRIX64 "llX"

/* printf macros for least-width integers */
#define PRIdLEAST8 PRId8
#define PRIdLEAST16 PRId16
#define PRIdLEAST32 PRId32
#define PRIdLEAST64 PRId64

/* printf macros for pointer-holding integers */
#define PRIdPTR "ld"
#define PRIiPTR "li"
#define PRIuPTR "lu"
#define PRIoPTR "lo"
#define PRIxPTR "lx"
#define PRIXPTR "lX"

/* Integer conversion functions */
intmax_t strtoimax(const char * nptr, char ** endptr, int base);
uintmax_t strtoumax(const char * nptr, char ** endptr, int base);

#endif /* _INTTYPES_H */