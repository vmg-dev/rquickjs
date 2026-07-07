#ifndef _FENV_H
#define _FENV_H

/* Define the basic types. Actual values might not matter much for stubs. */
typedef unsigned long fenv_t;
typedef unsigned long fexcept_t;

/* Floating-point exception flags */
#define FE_DIVBYZERO  0x01
#define FE_INEXACT    0x02
#define FE_INVALID    0x04
#define FE_OVERFLOW   0x08
#define FE_UNDERFLOW  0x10
#define FE_ALL_EXCEPT (FE_DIVBYZERO | FE_INEXACT | FE_INVALID | FE_OVERFLOW | FE_UNDERFLOW)

/* Rounding modes */
#define FE_TONEAREST  0x00
#define FE_DOWNWARD   0x01
#define FE_UPWARD     0x02
#define FE_TOWARDZERO 0x03

/* Default environment object */
extern const fenv_t __fe_dfl_env;
#define FE_DFL_ENV (&amp;__fe_dfl_env)

/* Functions - stubbed to do nothing or return safe defaults */
inline int feclearexcept(int excepts) { return 0; }
inline int fegetexceptflag(fexcept_t *flagp, int excepts) { if (flagp) *flagp = 0; return 0; }
inline int feraiseexcept(int excepts) { return 0; }
inline int fesetexceptflag(const fexcept_t *flagp, int excepts) { return 0; }
inline int fetestexcept(int excepts) { return 0; }

inline int fegetround(void) { return FE_TONEAREST; }
inline int fesetround(int round) { return 0; } // Indicate success, even if no-op

inline int fegetenv(fenv_t *envp) { if (envp) *envp = 0; return 0; }
inline int feholdexcept(fenv_t *envp) { if (envp) *envp = 0; return 0; }
inline int fesetenv(const fenv_t *envp) { return 0; }
inline int feupdateenv(const fenv_t *envp) { return 0; }

#endif /* _FENV_H */