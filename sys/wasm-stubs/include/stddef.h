#ifndef _STDDEF_H
#define _STDDEF_H

typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef unsigned short wchar_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef offsetof
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif

#endif /* _STDDEF_H */