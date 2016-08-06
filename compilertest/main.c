#include <stdio.h>
#include "cal.h"
#include "mul.h"

#ifdef __cplusplus
    #define compilerMain "c++_compiler"
#else
    #define compilerMain "c_compiler"
#endif


//extern "C" int m1(int a, int b);

//extern "C" void WhichCompilerMul();


int main()
{
    int ret = 0;

    WhichCompilerCal();
    WhichCompilerMul();

    printf("ret f1= %d\n", f1(2, 3));
    printf("ret m1= %d\n", m1(2, 3));

printf("main: This is %s\n", compilerMain);


    return 0;
}
