#include "cal.h"
#include <stdio.h>

#ifdef __cplusplus
    #define compilerCal "c++_compiler"
#else
    #define compilerCal "c_compiler"
#endif

int f1(int a, int b)
{
    return (a + b);
}

void WhichCompilerCal()
{
    printf("Cal: This is %s\n", compilerCal);
}
