#ifndef STUDENT_STAFF_H
#define STUDENT_STAFF_H

#include <iostream>
#include <string>
#include "students.h"
#include "staff.h"
using namespace std;

class Student_Staff
{
private:
    Students *ptrstudents;
    Staff *ptrstaff;

public:
    //Constructor
    Student_Staff();

    //Getter functions
    Students* getstudents();
    Staff* getstaff();

    //Member funcs
    void highest_gpa(Students[], int);
    int n_undergrad(Students*);
    void same_hire_year(Staff*);
};

#endif