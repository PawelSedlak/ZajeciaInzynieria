#include "TBernouli.h"
#include <iostream>
using namespace std;

void TBernouli::bernouli(double p,int n,int k)
{
    q = 1 - p;
    P = (pNewton->newton(n, k) *
         pPower->power(p, k) *
         pPower->power(q, n - k) );
    cout <<"\nPrawdopodobienstwo, ze w " <<n<<" doswiadczeniach "
             <<k<<"-razy otrzymamy sukces wynosi\n"<<P;
}

TBernouli::TBernouli()
{
    pNewton = new TNewton;
    pPower = new TPower;
}

TBernouli::~TBernouli()
{
         delete pNewton;
         delete pPower;
}
