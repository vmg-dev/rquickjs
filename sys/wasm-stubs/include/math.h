#ifndef _MATH_H
#define _MATH_H

#include <stdint.h> // For int types if needed

/* Define common types like double_t if necessary */
typedef double double_t;
typedef float float_t;

/* Define constants */
#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536
#define HUGE_VAL (__builtin_huge_val())
#define INFINITY (__builtin_inf())
#define NAN (__builtin_nan(""))

/* Basic operations */
double fabs(double x);
double floor(double x);
double ceil(double x);
double sqrt(double x);
double pow(double x, double y);
double fmod(double x, double y);
double exp(double x);
double log(double x);
double log10(double x);
double ldexp(double x, int exp);
double frexp(double value, int *exp);
double modf(double value, double *iptr);

/* Trigonometric functions */
double sin(double x);
double cos(double x);
double tan(double x);
double asin(double x);
double acos(double x);
double atan(double x);
double atan2(double y, double x);

/* Hyperbolic functions */
double sinh(double x);
double cosh(double x);
double tanh(double x);

/* Classification and comparison */
int isfinite(double x);
int isinf(double x);
int isnan(double x);
int signbit(double x);
double copysign(double x, double y);

/* Rounding */
double round(double x);
long lround(double x);
long long llround(double x);
double trunc(double x);

/* Other potentially needed functions */
double hypot(double x, double y);
double cbrt(double x);
double exp2(double x);
double log2(double x);
double log1p(double x);
double expm1(double x);
double scalbn(double x, int n);

/* Missing functions from build error */
long lrint(double x);
double fmin(double x, double y);
double fmax(double x, double y);
double acosh(double x);
double asinh(double x);
double atanh(double x);


#endif /* _MATH_H */