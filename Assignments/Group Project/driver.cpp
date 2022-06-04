#include "students.h"
#include "students.cpp"
#include "staff.h" 
#include "staff.cpp"
#include "student_staff.h"
#include "student_staff.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Create student_staff class
    Student_Staff object1 = Student_Staff();
    Students* studentptr = object1.getstudents();
    Staff* staffptr = object1.getstaff();

    //Test student_staff member funcs
    cout << "Getting highest GPA:" << "\n" << endl;
    object1.highest_gpa(studentptr, 6); //Includes print std info
    cout << "\n" << "Number of undergrad students: " << object1.n_undergrad(studentptr, 6) << "\n" << endl;
    cout << "Testing same hire year for year 2020:" << "\n" << endl;
    object1.same_hire_year(staffptr, 5, "2020");

    cout << "Testing other student member methods" << "\n" << endl;
    
    cout << (studentptr+3)->completeprogram() << ": 0 means false, 1 means true." << endl;
    cout << "Grade of student: " << (studentptr+2)->studentstatus() << endl;
    cout << "Comparing GPAs between " << (studentptr+1)->getid() << " and " << (studentptr+3)->getid() << ": " << (studentptr+1)->comparegpa(*(studentptr+3)) << endl;

    cout << "Testing other staff member methods" << "\n" << endl;

    cout << "Calculate salary of Kim Kardashian: " << (staffptr+4)->calculate_salary() << endl;
    cout << "Comparing work experience of Kanye West and Jane Doe:" << endl;
    (staffptr+1)->compare_exp(*(staffptr+2));
}