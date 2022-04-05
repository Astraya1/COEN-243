#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class Department
{
private:
    string id;
    string name;
    string history;
    Employee employees[25];

public:
    Department(); //Default constructor
    Department(string, string, string); //Defined constructor
    
    //Getter functions
    string get_id();
    string get_name();
    string get_history();

    //Modification functions
    void set_name(string);
    void set_history(string);

    //Modify list of employees
    void add_employee(Employee);
    void remove_employee(int);
    bool search_employee(int);
    void list_of_employees();
    int num_of_employees();
};

#endif