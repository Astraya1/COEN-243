#pragma once

#include "staff.h"
#include <iostream>
#include <string>
using namespace std;

Staff::Staff()
{
    firstname = "";
    lastname = "";
    id = "";
    phonenumber = "";
    dateofhire = "";
    bonuscode = "";
    currentsalary = 0;
}

Staff::Staff(string a, string b, string c, string d, string e, string f, float g)
{
    firstname=a;
    lastname=b;
    id=c;
    phonenumber=d;
    dateofhire=e;
    bonuscode=f;
    currentsalary=g;
}


//Getter funcrions
string Staff::getfirstname()
{
    return firstname;
}

string Staff::getlastname()
{
    return lastname;
}

string Staff::getid()
{
    return id;
}

string Staff::getphonenumber()
{
    return phonenumber;
}

string Staff::getdateofhire()
{
    return dateofhire;
}

string Staff::gethireyear()
{
    string year = "";

    for (int i{6}; i<dateofhire.length(); i++)
        year = year + dateofhire[i];

    return year;
}

string Staff::getbonuscode()
{
    return bonuscode;
}

float Staff::getcurrentsalary()
{
    return currentsalary;
}

//Setter functions
void Staff::setfirstname(string x)
{
    firstname=x;
}

void Staff::setlastname(string x)
{
    lastname=x;
}

void Staff::setid(string x)
{
    id=x;
}

void Staff::setphonenumber(string x)
{
    phonenumber=x;
}

void Staff::setdateofhire(string x)
{
    dateofhire=x;
}

void Staff::setbonuscode(string x)
{
    bonuscode = x;
}
void Staff::setcurrentsalary(float x)
{
    currentsalary=x;
}

void Staff::print_stf_info()
{
    cout << "Staff's information:" << endl;
    cout << "First name: " << firstname;
    cout << "\nLast name: " << lastname;
    cout << "\nID: " << id;
    cout << "\nPhone number: " << phonenumber;
    cout << "\nDate of hiring: " << dateofhire;
    cout << "\nBonus Code: " << bonuscode;
    cout << "\nCurrent salary: " << currentsalary << endl;

}

float Staff::calculate_salary()
{
    float salary, code;
    if (bonuscode == "A")
        code = 0.08;
    if (bonuscode == "B")
        code = 0.06;
    if (bonuscode == "C")
        code = 0.03;
    if (bonuscode == "D")
        code = 0.01;
    if (bonuscode == "E")
        code = 0.00;    
    
    salary = (code * currentsalary) + currentsalary;
    return salary;
}

int Staff::getexp(string date) //date: DD/MM/YYYY
{
    string arr[3];
    double arr2[3];

    int count = 0;
    for (char & c : date)
    {
        if (c == '/')
            count++;
        else
            arr[count] += c;
    }

    for (int i=0; i<3; i++)
        arr2[i] = stod(arr[i]);

    int x = arr2[0] + arr2[1]*30 + arr2[2]*365;

    return x;
}

void Staff::compare_exp(Staff staff2)
{
    int date1, date2;
    date1 = getexp(dateofhire);
    date2 = getexp(staff2.getdateofhire());
    
    if (date1 > date2)
        cout << endl << staff2.getfirstname() << " " << staff2.getlastname()<< " has more work experience than " << firstname << " " << lastname <<".\n";
    else if (date1 < date2)
        cout << endl << firstname << " " << lastname << " has more work experience than " << staff2.getfirstname() << " " << staff2.getlastname()<<".\n";
    else
        cout << "Both staff have the same work experience.\n";
}