#pragma once

#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
    string firstname; //John
    string lastname; //Smith
    string id; //87654321
    string phonenumber; //514-987-6543
    string dateofhire; //12/12/2021
    string bonuscode; //A
    double currentsalary; //123456
        
public:
    //Constructor
    Staff();
    Staff(string, string, string, string, string, string, double);
    
    //Getter
    string getfirstname();
    string getlastname();
    string getid();
    string getphonenumber();
    string getdateofhire();
    string gethireyear();
    string getbonuscode();
    double getcurrentsalary();
    
    //Setter
    void setfirstname(string);
    void setlastname(string);
    void setid(string);
    void setphonenumber(string);
    void setdateofhire(string);
    void setbonuscode(string);
    void setcurrentsalary(double);
    
    //Other
    void print_stf_info();
    double calculate_salary();
    int getexp(string);
    void compare_exp(Staff);
};