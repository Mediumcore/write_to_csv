
#ifndef __UTILS__C__
#define __UTILS__C__

#ifdef __cplusplus
extern "C" {
#endif


// C program for implementation of ftoa()
#include <math.h>
#include <stdio.h>
#include <stdint.h>

int is_big_endian(void);

void ftoa(float n, char *str, int precision);

#ifdef __cplusplus
}
#endif

#endif
