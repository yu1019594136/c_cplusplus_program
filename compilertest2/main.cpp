#include <iostream>
#include "mul.h"
#include "cal.h"

//extern "C" int f1(int a, int b);
//extern "C" void WhichCompilerCal();

using namespace std;

int main()
{
    cout << "hello" << endl;
    cout << "ret = " << m1(2, 3) <<endl;
    cout << "ret = " << f1(2, 3) <<endl;
    WhichCompilerCal();
    WhichCompilerMul();

    return 0;
}
