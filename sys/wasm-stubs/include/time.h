#ifndef _TIME_H
#define _TIME_H

#include <stddef.h> // For size_t

/* Basic time types */
typedef long time_t;
typedef long clock_t;

struct timespec {
    time_t tv_sec;  /* Seconds */
    long   tv_nsec; /* Nanoseconds */
};

struct tm {
    int tm_sec;    /* Seconds (0-60) */
    int tm_min;    /* Minutes (0-59) */
    int tm_hour;   /* Hours (0-23) */
    int tm_mday;   /* Day of the month (1-31) */
    int tm_mon;    /* Month (0-11) */
    int tm_year;   /* Year - 1900 */
    int tm_wday;   /* Day of the week (0-6, Sunday = 0) */
    int tm_yday;   /* Day in the year (0-365, 1 Jan = 0) */
    int tm_isdst;  /* Daylight saving time */
    long tm_gmtoff; /* Offset from UTC in seconds (non-standard) */
    const char *tm_zone; /* Timezone abbreviation (non-standard) */
};

/* Clock identifier */
typedef int clockid_t;
#define CLOCK_REALTIME 0
#define CLOCK_MONOTONIC 1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID 3

/* Time manipulation */
time_t time(time_t *tloc);
double difftime(time_t time1, time_t time0);
struct tm *gmtime(const time_t *timer);
struct tm *localtime(const time_t *timer);
struct tm *localtime_r(const time_t *timer, struct tm *result); /* Added */
time_t mktime(struct tm *tm);

/* Time formatting */
size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);

/* Clock functions */
clock_t clock(void);
int clock_gettime(clockid_t clk_id, struct timespec *tp);

/* Define CLOCKS_PER_SEC */
#define CLOCKS_PER_SEC ((clock_t)1000000) /* Microseconds */

#endif /* _TIME_H */