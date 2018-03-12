#include "TUniversity.h"
#include "TStudent.h"
#include <iostream>
using namespace std;

TUniversity::TUniversity()
{

}

void TUniversity::setData(int i, string name,int age)
{

}

void TUniversity::attach(TStudent* student)
{
    studenci.push_back(student);
    this->lStudentow++;
}

void TUniversity::detach() {
    studenci.pop_back();
}

void TUniversity::printData(int counter)
{
    cout<<"Lista studentow: "<<endl;

    for(int i = 0; i < counter; i++)
    {
        studenci[i]->studentInfo();
    }
}


