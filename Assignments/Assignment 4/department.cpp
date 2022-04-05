#include "employee.cpp"
#include "department.h"
#include <string>
#include <iostream>
using namespace std;

Department::Department() //Default constructor
{

}

Department::Department(string newid, string newname, string newhistory) //Defined constructor
{
    id = newid;
    name = newname;
    history = newhistory;
}

//Getter functions
string Department::get_id()
{
    return id;
}

string Department::get_name()
{
    return name;
}

string Department::get_history()
{
    return history;
}

//Modification functions
void Department::set_name(string newname)
{
    name = newname;
}

void Department::set_history(string newhistory)
{
    history = newhistory;
}

//Modify list of employees
void Department::add_employee(Employee employee)
{
    //Iterates through all employees in the list of employees
    for (int i=0; i<25; i++)
    {
        //Checks if the employee being iterated on is a legit or empty employee
        if (employees[i].get_empty() == true)
        {
            employees[i] = employee;
            break;
        }
    }
}

void Department::remove_employee(int employeeid) //Removes employee by ID.
{
    //Iterates through all employees in the list of employees
    for (int i=0; i<25; i++)
    {
        //Checks if the current employee being iterated on is the one that is being removed by comparing IDs
        if (employees[i].get_id() == employeeid)
        {
            employees[i] = Employee(); //Sets the employee to an empty employee object therefore removing it.
        }
    }
}

bool Department::search_employee(int employeeid)
{
    //Iterates through all employees in the department
    for (int i=0; i<25; i++)
    {
        if (employees[i].get_id() == employeeid) //Check if IDs are identical
        {
            return true;
        }
    }
    return false;
}

void Department::list_of_employees()
{
    cout << "The employees in this department are:" << endl;

    for (int i=0; i<25; i++)
    {
        if (employees[i].get_empty() == false) //Checks first if the employee being iterated on is a real employee
            cout << employees[i].get_fullname() << endl;
    }
}

int Department::num_of_employees()
{
    int count;

    for (int i=0; i<25; i++)
    {
        if (employees[i].get_empty() == false)
            count ++;
    }

    return count;
}