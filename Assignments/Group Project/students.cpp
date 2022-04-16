#pragma once

#include "students.h"
#include <iostream>
#include <string>
using namespace std;

Students::Students()
{
    firstname = "";
    lastname = "";
    id = "";
    datebirth = "";
    gpa = 0;
    startyear = 0;
    credit = 0;
    program = "";
}

Students::Students(string a, string b, string c, string d, double e, int f, double g, string h)
{
    firstname = a;
    lastname = b;
    id = c;
    datebirth = d;
    gpa = e;
    startyear = f;
    credit = g;
    program = h;
}

//Getter funcs
string Students::getfirstname()
{
    return firstname;
}

string Students::getlastname()
{
    return lastname;
}

string Students::getid()
{
    return id;
}

string Students::getdatebirth()
{
    return datebirth;
}

double Students::getgpa()
{
    return gpa;
}

int Students::getstartyear()
{
    return startyear;
}

double Students::getcredit()
{
    return credit;
}

string Students::getprogram()
{
    return program;
}

//Setter funcs

void Students::setfirstname(string x)
{
    firstname = x;
}

void Students::setlastname(string x)
{
    lastname = x;
}

void Students::setid(string x)
{
    id = x;
}

void Students::setdatebirth(string x)
{
    datebirth = x;
}

void Students::setgpa(double x)
{
    gpa = x;
}

void Students::setstartyear(int x)
{
    startyear = x;
}

void Students::setcredit(double x)
{
    credit = x;
}

void Students::setprogram(string x)
{
    program = x;
}

//Implemented methods
bool Students::completeprogram()
{
    if (program == "B")
    {
        if (credit >= 140)
            return true;
        else
            return false;
    }
    else if (program == "M")
    {
        if (credit >= 16)
            return true;
        else
            return false;
    }
    else
    {
        if (credit >= 12)
            return true;
        else
            return false;
    }
    return false;
}

string Students::studentstatus() //Returns the grade of the student based on GPA
{
    if (gpa >= 3.5)
        return "A+";
    else if (gpa >= 3 && gpa < 3.5)
        return "A";
    else if (gpa >= 2.5 && gpa < 3)
        return "B";
    else if (gpa >= 2 && gpa < 2.5)
        return "C";
    else
        return "D";
}

void Students::print_std_info() //Prints all the information of the student (ie. the attributes)
{
    cout << "Student's Information" << endl;
    cout << "First name: " << firstname << endl;
    cout << "Last name: " << lastname << endl;
    cout << "ID: " << id << endl;
    cout << "Date of birth: " << datebirth << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Year started: " << startyear << endl;
    cout << "Credits completed: " << credit << endl;
    cout << "Program: " << program << endl;
}

string Students::comparegpa(Students otherstudent) //Compares two students and returns ID of student with higher GPA. If both have the same GPA, returns the first student.
//Call on this method as follows: student1.comparegpa(student2) where student1 and student2 are objects of class Students.
{
    if (gpa > otherstudent.getgpa())
        return id;
    else if (gpa < otherstudent.getgpa())
        return otherstudent.getid();
    else
        return id;
}