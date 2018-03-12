#if !defined(_TUNIVERSITY_H)
#define _TUNIVERSITY_H
#include "TStudent.h"
#include <vector>

class TUniversity
{
private:
    string nazwa;
    int lStudentow;
    vector<TStudent*> studenci;
public:
    TUniversity();
    void attach(TStudent* student);
    void detach();
    void setData(int i, string name,int age);
    void printData(int counter);

#endif  //_TUNIVERSITY_H
};
