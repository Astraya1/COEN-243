#include "employee.cpp"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int id1, id2, yearhired1, yearhired2, areacode1, areacode2;
    string firstname1, firstname2, lastname1, lastname2, datebirth1, datebirth2, address1, address2, phonenum1, phonenum2;
    double salary1, salary2;
    
    cout << "Please enter the information of employee 1" << endl;
    cout << "ID: ";
    cin >> id1;
    cout << "First name: ";
    cin >> firstname1;
    cout << "Last name: ";
    cin >> lastname1;
    cout << "Date of birth (DD/MM/YYYY): ";
    cin >> datebirth1;
    cout << "Address: ";
    cin.ignore();
    getline(cin, address1);
    cout << "Year hired: ";
    cin >> yearhired1;
    cout << "Salary: ";
    cin >> salary1;
    cout << "Phone number area code: ";
    cin >> areacode1;
    cout << "Phone number digits: ";
    cin.ignore();
    getline(cin, phonenum1);

    cout << "\n" << "Please enter the information of employee 2" << endl;
    cout << "ID: ";
    cin >> id2;
    cout << "First name: ";
    cin >> firstname2;
    cout << "Last name: ";
    cin >> lastname2;
    cout << "Date of birth (DD/MM/YYYY): ";
    cin >> datebirth2;
    cout << "Address: ";
    cin.ignore();
    getline(cin, address2);
    cout << "Year hired: ";
    cin >> yearhired2;
    cout << "Salary: ";
    cin >> salary2;
    cout << "Phone number area code: ";
    cin >> areacode2;
    cout << "Phone number digits: ";
    cin.ignore();
    getline(cin, phonenum2);

    Employee employee1 = Employee(id1, firstname1, lastname1, datebirth1, address1, yearhired1, salary1, areacode1, phonenum1);
    Employee employee2 = Employee(id2, firstname2, lastname2, datebirth2, address2, yearhired2, salary2, areacode2, phonenum2);

    cout << "\n" << "Information of the first employee:" << endl;
    cout << "First name: " << employee1.get_firstname() << endl;
    cout << "Last name: " << employee1.get_lastname() << endl;
    cout << "Date of birth (DD/MM/YYYY): " << employee1.get_datebirth() << endl;
    cout << "Address: " << employee1.get_address() << endl;
    cout << "Year hired: " << employee1.get_yearhired() << endl;
    cout << "Salary: " << employee1.get_salary() << endl;
    cout << "Phone number: " << employee1.get_phonenum() << endl;

    employee1.change_firstname("Albus");
    employee1.mod_lastname("Dumbledore");
    employee1.mod_datebirth("03/08/1881");
    employee1.mod_salary(5000.52);
    employee1.mod_address("Hogwarts");
    employee1.mod_phonenum(514, "1234567");

    cout << "\n" << "New information of the first employee after calling method:" << endl;
    cout << "First name: " << employee1.get_firstname() << endl;
    cout << "Last name: " << employee1.get_lastname() << endl;
    cout << "Date of birth (DD/MM/YYYY): " << employee1.get_datebirth() << endl;
    cout << "Address: " << employee1.get_address() << endl;
    cout << "Year hired: " << employee1.get_yearhired() << endl;
    cout << "Salary: " << employee1.get_salary() << endl;
    cout << "Phone number: " << employee1.get_phonenum() << endl;

    cout << "\n" << "Testing comparison methods after changing employee 1" << "\n" << "Same last name? ";
    if (employee1.same1(employee2) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    cout << "Same salary or year hired? ";
    if (employee1.same2(employee2) == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}