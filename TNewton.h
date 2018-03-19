#if !defined(_TNEWTON_H)
#define _TNEWTON_H
#include "TFactorial.h"

class TNewton {
public:
	long double newton(int n, int k);
	TNewton();
	~TNewton();
private:
	int N;
	TFactorial *pFactorial;
};

#endif  //_TNEWTON_H
