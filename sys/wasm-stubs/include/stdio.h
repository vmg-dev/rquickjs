#ifndef _STDIO_H
#define _STDIO_H

#include <stddef.h>

typedef struct _FILE FILE;
#define EOF (-1)

/* FILE operations */
FILE *fopen(const char *path, const char *mode);
int fclose(FILE *fp);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fseek(FILE *stream, long offset, int whence);
long ftell(FILE *stream);
int fflush(FILE *stream);
int ferror(FILE *stream);
int feof(FILE *stream);

/* Standard streams */
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

/* Mode constants for fseek */
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

/* Formatted I/O */
int printf(const char *format, ...);
int fprintf(FILE *stream, const char *format, ...);
int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);

int vprintf(const char *format, __builtin_va_list ap);
int vfprintf(FILE *stream, const char *format, __builtin_va_list ap);
int vsprintf(char *str, const char *format, __builtin_va_list ap);
int vsnprintf(char *str, size_t size, const char *format, __builtin_va_list ap);

int sscanf(const char *str, const char *format, ...);
int fscanf(FILE *stream, const char *format, ...);

/* File access */
int remove(const char *pathname);
int rename(const char *oldpath, const char *newpath);

/* Misc */
void perror(const char *s);

/* These are typically macros in C, but we'll define them as functions */
int getchar(void);
int putchar(int c);
char *gets(char *s);
int puts(const char *s);

#endif /* _STDIO_H */