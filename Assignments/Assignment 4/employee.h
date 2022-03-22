

#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string firstname;
    string lastname;
    string datebirth;
    string address;
    int yearhired;
    double salary;
    int areacode;
    string phonenum;

public:
    Employee(int, string, string, string, string, int, double, int, string);
    int get_id();
    string get_firstname();
    void change_firstname(string);
    string get_lastname();
    void mod_lastname(string);
    int get_yearhired();
    string get_fullname();
    string get_datebirth();
    void mod_datebirth(string);
    double get_salary();
    void mod_salary(double);
    string get_address();
    void mod_address(string);
    string get_phonenum();
    void mod_phonenum(int, string);
    bool same1(Employee); //Same last name
    bool same2(Employee); //Same salary or same hiring year
};