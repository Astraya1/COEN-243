#pragma once

#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    string firstname; //"Albus"
    string lastname; //"Dumbledore"
    string id; //"12345678"
    string datebirth; //"01/01/2000"
    double gpa; //"3.4"
    int startyear; //"2020"
    double credit; //"45.5"
    string program; //"B"

public:
    //Constructor
    Students();
    Students(string, string, string, string, double, int, double, string);

    //Getter methods
    string getfirstname();
    string getlastname();
    string getid();
    string getdatebirth();
    double getgpa();
    int getstartyear();
    double getcredit();
    string getprogram();

    //Setter methods
    void setfirstname(string);
    void setlastname(string);
    void setid(string);
    void setdatebirth(string);
    void setgpa(double);
    void setstartyear(int);
    void setcredit(double);
    void setprogram(string);
    
    //Implemented methods
    bool completeprogram();
    string studentstatus();
    void print_std_info();
    string comparegpa(Students);
};