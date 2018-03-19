#if !defined(_TBERNOULI_H)
#define _TBERNOULI_H

#include "TPower.h"
#include "TNewton.h"

class TBernouli {

private:
    double q;
    long double P;
public:
    void bernouli(double p, int n, int k);
    TBernouli();
    ~TBernouli();
    TPower *pPower;
    TNewton *pNewton;

};

#endif  //_TBERNOULI_H
