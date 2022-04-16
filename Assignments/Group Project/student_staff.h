#pragma once

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

    void getstudents();
    void getstaff();

    //Member funcs
    void highest_gpa(Students*, int); //Takes inputs pointer to array of students, and size of that array
    int n_undergrad(Students*, int); //Takes inputs pointer to array of studnets, and size of that array
    void same_hire_year(Staff*, int, string); //Takes inputs pointer to array of staff, size of that array, and the hiring year to compare to
};