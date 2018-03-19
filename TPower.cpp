#include "TPower.h"

double TPower::power(double n, int m)
{
    if(m == 0)
        return 1;
    return n * power(n, m - 1);
}

