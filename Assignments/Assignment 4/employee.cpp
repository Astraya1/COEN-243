#include <employee.h>
using namespace std;

Employee::Employee(int a, string b, string c, string d, string e, int f, double g, int h, string i)
{
    id = a;
    firstname = b;
    lastname = c;
    datebirth = d;
    address = e;
    yearhired = f;
    salary = g;
    areacode = h;
    phonenum = i;
}

int Employee::get_id()
{
    return id;
}

string Employee::get_firstname()
{
    return firstname;
}

void Employee::change_firstname(string newname)
{
    firstname = newname;
}

string Employee::get_lastname()
{
    return lastname;
}

void Employee::mod_lastname(string newname)
{
    lastname = newname;
}

int Employee::get_yearhired()
{
    return yearhired;
}

string Employee::get_fullname()
{
    return (firstname + ' ' + lastname);
}

string Employee::get_datebirth()
{
    return datebirth;
}

void Employee::mod_datebirth(string newdate)
{
    datebirth = newdate;
}

double Employee::get_salary()
{
    return salary;
}

void Employee::mod_salary(double newsalary)
{
    salary = newsalary;
}

string Employee::get_address()
{
    return address;
}

void Employee::mod_address(string newaddress)
{
    address = newaddress;
}

string Employee::get_phonenum()
{
    string a_code = to_string(areacode);
    return (a_code+phonenum);
}

void Employee::mod_phonenum(int newareacode, string newphonenum)
{
    areacode = newareacode;
    phonenum = newphonenum;
}

bool Employee::same1(Employee employee2)
{
    if (lastname == employee2.get_lastname())
        return true;
    return false;
}

bool Employee::same2(Employee employee2)
{
    if (salary == employee2.get_salary() || yearhired == employee2.get_yearhired())
        return true;
    return false;
}