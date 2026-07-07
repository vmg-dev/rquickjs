#ifndef _STDINT_H
#define _STDINT_H

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;

/* Least types */
typedef int8_t int_least8_t;
typedef uint8_t uint_least8_t;
typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;
typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;
typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;

/* Fast types */
typedef int8_t int_fast8_t;
typedef uint8_t uint_fast8_t;
typedef int16_t int_fast16_t;
typedef uint16_t uint_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast32_t;
typedef int64_t int_fast64_t;
typedef uint64_t uint_fast64_t;

/* Integer types capable of holding object pointers */
typedef long intptr_t;
typedef unsigned long uintptr_t;

/* Greatest-width integer types */
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;

/* Limits for exact-width integer types */
#define INT8_MIN (-128)
#define INT8_MAX 127
#define UINT8_MAX 255

#define INT16_MIN (-32768)
#define INT16_MAX 32767
#define UINT16_MAX 65535

#define INT32_MIN (-2147483648)
#define INT32_MAX 2147483647
#define UINT32_MAX 4294967295U

#define INT64_MIN (-9223372036854775807LL-1)
#define INT64_MAX 9223372036854775807LL
#define UINT64_MAX 18446744073709551615ULL

/* Other limits */
#define LONG_MIN (-2147483647L-1)
#define LONG_MAX 2147483647L
#define ULONG_MAX 4294967295UL

/* Limits for minimum-width integer types */
#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST8_MAX INT8_MAX
#define UINT_LEAST8_MAX UINT8_MAX

#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST16_MAX INT16_MAX
#define UINT_LEAST16_MAX UINT16_MAX

#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST32_MAX INT32_MAX
#define UINT_LEAST32_MAX UINT32_MAX

#define INT_LEAST64_MIN INT64_MIN
#define INT_LEAST64_MAX INT64_MAX
#define UINT_LEAST64_MAX UINT64_MAX

/* Limits for integer types capable of holding object pointers */
#define INTPTR_MIN LONG_MIN
#define INTPTR_MAX LONG_MAX
#define UINTPTR_MAX ULONG_MAX

/* Limits for greatest-width integer types */
#define INTMAX_MIN INT64_MIN
#define INTMAX_MAX INT64_MAX
#define UINTMAX_MAX UINT64_MAX

/* Limit for size_t */
#define SIZE_MAX ULONG_MAX

/* Macros for integer constants */
#define UINT64_C(c) c##ULL

#endif /* _STDINT_H */