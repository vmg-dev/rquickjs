#ifndef _ASSERT_H
#define _ASSERT_H

/* Define assert as a no-op for wasm32-unknown-unknown */
#ifdef NDEBUG
#define assert(ignore) ((void)0)
#else
#define assert(ignore) ((void)0)
/* Or, if you want assertions to potentially work in debug builds (requires host support):
extern void __assert_fail (const char *__assertion, const char *__file,
                           unsigned int __line, const char *__function)
     __attribute__ ((__noreturn__));
#define assert(expr) \
  ((expr) \
   ? (void)0 \
   : __assert_fail (#expr, __FILE__, __LINE__, __func__))
*/
#endif

#endif /* _ASSERT_H */