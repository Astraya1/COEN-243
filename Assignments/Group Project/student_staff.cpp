#include "staff.h"
#include "students.h"
#include "student_staff.h"
#include "students.cpp"
#include "staff.cpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Student_Staff::Student_Staff()
{
    //Opens files, creates array containing each line of file except the first
    //Creating array for students
    ifstream infile;
    infile.open("students.txt");

    int size1; 
    infile >> size1; //Reads the first line to know how many students are in the file.
    string studentvals[size1*8]; //Creates an array to store all the attributes of the students, since there's 8 attributes per students object.
    Students students[8]; //Creates the array of actual student objects, which will be the goal to fill up.

    int count = 0; 
    while (!infile.eof())
    {   
        string line;
        infile >> line;
        studentvals[count] = line;
        count++;
    }

    infile.close();

    for (int i{0}; i<size1; i++)
    {
        string firstname = studentvals[i*8];
        string lastname = studentvals[i*8+1];
        string id = studentvals[i*8+2];
        string datebirth = studentvals[i*8+3];
        double gpa = stod(studentvals[i*8+4]);
        int year = stoi(studentvals[i*8+5]);
        double credits = stod(studentvals[i*8+6]);
        string program = studentvals[i*8+7];

        students[i] = Students(firstname, lastname, id, datebirth, gpa, year, credits, program);
    }

    infile.open("staff.txt");
    int size2;
    infile >> size2;
    string staffvals[size2*7];
    Staff staff[size2];

    count = 0;
    while (!infile.eof())
    {   
        string line;
        infile >> line;
        staffvals[count] = line;
        count++;
    }

    infile.close();

    for (int i{0}; i<size1; i++)
    {
        string firstname = studentvals[i*7];
        string lastname = studentvals[i*7+1];
        string id = studentvals[i*7+2];
        string phonenumber = studentvals[i*7+3];
        string datehired = studentvals[i*7+4];
        string bonuscode = studentvals[i*7+5];
        float salary = studentvals[i*7+6];

        staff[i] = Staff(firstname,lastname,id,phonenumber,datehired,bonuscode,salary);
    }

    ptrstudents = &students[0];
    ptrstaff = &staff[0];
}

void Student_Staff::highest_gpa(Students* students, int size)
{
    double currenthighest = students->getgpa();
    Students currentstudent = *students;

    for (int i{1}; i<size; i++)
    {
        double currentgpa = (students+i)->getgpa();

        if (currentgpa > currenthighest)
        {
            currenthighest = currentgpa;
            currentstudent = *(students+i);
        }
        
    }
    currentstudent.print_std_info();
}

int Student_Staff::n_undergrad(Students* students, int size)
{
    int count {0};

    for (int i{0}; i<size; i++)
    {
        if ((students+i)->getprogram() == "B")
            count++;
    }

    return count;
}

void Student_Staff::same_hire_year(Staff* staffs, int size, string year)
{

    for (int i{0}; i<size; i++)
    {
        if ((staffs+i)->gethireyear() == year)
        {
            (staffs+i)->print_stf_info();
            cout << endl;
        }
    }
}