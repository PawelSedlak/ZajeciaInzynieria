#include "TStudent.h"

TStudent::TStudent(string studentName, int studentAge)
{
    this->studentName = studentName;
    this->studentAge = studentAge;
}

TStudent::~TStudent()
{

}

void TStudent::setName(string studentName)
{
    this->studentName = studentName;
}

void TStudent::setAge(int studentAge)
{
    this->studentAge = studentAge;
}

string TStudent::getName()
{
    return studentName;
}

int TStudent::getAge()
{
    return studentAge;
}

void TStudent::studentInfo()
{
    cout<<"Imie: "<<getName()<<endl;
    cout<<"Wiek: "<<getAge()<<endl;
}
