#include <iostream>
#include "mul.h"

using namespace std;

#ifdef __cplusplus
    #define compilerMul "c++_compiler"
#else
    #define compilerMul "c_compiler"
#endif

int m1(int a, int b)
{
    return a*b;
}

void WhichCompilerMul()
{
    cout << "Mul:This is " << compilerMul << endl;
}
