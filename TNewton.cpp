#include "TNewton.h"

long double TNewton::newton(int n, int k)
{
    N = n - k;
    long NbyK = 1;
    if(k >= N)
    {
        for(int i = k+1; i <= n; i++)
            NbyK *= i;
        return (NbyK/pFactorial->factorial(n - k));
    }
    else
    {
        for(int i = N+1; i <= n; i++)
            NbyK *= i;
        return (NbyK / pFactorial->factorial(k));
    }
}

TNewton::TNewton()
{
         pFactorial = new TFactorial;
}

TNewton::~TNewton()
{
         delete pFactorial;
}

