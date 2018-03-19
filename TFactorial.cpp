#include "TFactorial.h"

long double TFactorial::factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}


