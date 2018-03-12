#include <iostream>
#include <vector>
#include "TStudent.h"
#include "TUniversity.h"

int main()
{
    TStudent *student = new TStudent("Adam", 20);
    TStudent *student2 = new TStudent("Jan", 21);
    TUniversity* uczelnia = new TUniversity();
    uczelnia->attach(student);
    uczelnia->attach(student2);
    uczelnia->printData(2);
    uczelnia->detach();
    uczelnia->printData(1);
    return 0;
}

