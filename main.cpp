#include <iostream>
#include "TBernouli.h"
using namespace std;

int main()
{
    double p;
    int n, k;
    cout << "Podaj p: ";
    cin >> p;
    cout << "\nPodaj n: ";
    cin >> n;
    cout << "\nPodaj k: ";
    cin >>k;
    if(p>1 || p<0 || n<0 || k<0 || k>n)
    {
        cout << "Bledne dane wejsciowe!";

        return 1;
    }
    else
    {
        TBernouli *pBernouli = new TBernouli;
        pBernouli->bernouli(p, n, k);
            delete pBernouli;
    }

    return 0;
}

//przyk³ad na dzia³anie kompozycji
