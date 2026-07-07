#ifndef _SYS_TIME_H
#define _SYS_TIME_H

#include <time.h> // Include base time.h definitions

/* Structure for time value */
struct timeval {
    time_t      tv_sec;     /* seconds */
    long        tv_usec;    /* microseconds */
};

/* Structure for timezone */
struct timezone {
    int tz_minuteswest;     /* minutes west of Greenwich */
    int tz_dsttime;         /* type of DST correction */
};

/* Get time of day */
int gettimeofday(struct timeval *tv, struct timezone *tz);

/* Define timer types */
#define ITIMER_REAL    0
#define ITIMER_VIRTUAL 1
#define ITIMER_PROF    2

/* Interval timer structure */
struct itimerval {
    struct timeval it_interval; /* timer interval */
    struct timeval it_value;    /* current value */
};

/* Set/get interval timer */
int getitimer(int which, struct itimerval *curr_value);
int setitimer(int which, const struct itimerval *new_value,
              struct itimerval *old_value);

#endif /* _SYS_TIME_H */