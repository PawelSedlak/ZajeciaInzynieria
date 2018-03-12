#if !defined(_TSTUDENT_H)
#define _TSTUDENT_H

#include <iostream>
using namespace std;

class TStudent{
private:
    string studentName;
    int studentAge;

public:
    TStudent(string studentName, int wiek);
    ~TStudent();
    void setName(string studentName);
    void setAge(int studentAge);
    string getName();
    int getAge();
    void studentInfo();


};
#endif  //_TSTUDENT_H
