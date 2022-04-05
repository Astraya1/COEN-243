#include "department.cpp"
#include <iostream>
#include <string>

int main()
{
    string id, name, history;
     
    cout << "Please enter the ID for the department: ";
    cin >> id;

    cout << "Please enter the name for the department: ";
    cin >> name;

    cout << "Please enter the history of the department: ";
    cin >> history;

    Department my_department = Department(id, name, history);

    for (int i=0; i<5; i++)
    {
        int id, yearhired, areacode;
        string firstname, lastname, datebirth, address, phonenum;
        double salary;
        
        cout << "Please enter the following information for employee " << i+1 << ": ";
        cout << "ID: ";
        cin >> id;

        cout << "First name: ";
        cin >> firstname;

        cout << "Last name: ";
        cin >> lastname;

        cout << "Date of birth (DD/MM/YYYY): ";
        cin >> datebirth;

        cout << "Address: ";
        cin.ignore();
        getline(cin, address);

        cout << "Year hired: ";
        cin >> yearhired;

        cout << "Salary: ";
        cin >> salary;

        cout << "Area code: ";
        cin >> areacode;

        cout << "Phone number: ";
        cin >> phonenum;

        Employee my_employee = Employee(id, firstname, lastname, datebirth, address, yearhired, salary, areacode, phonenum);
        my_department.add_employee(my_employee);
    }

    cout << "Testing department methods:" << endl;

    cout << "\n" << "Testing set name method. Please enter a new name: ";
    string newname;
    cin >> newname;
    my_department.set_name(newname);

    cout << "\n" << "Testing set history method. Please enter a new history: ";
    string newhistory;
    cin >> newhistory;
    my_department.set_history(newhistory);

    cout << "\n" << "Testing add employee method. Added Albus Dumbledore to the department" << endl;
    my_department.add_employee(Employee(60, "Albus", "Dumbledore", "02/12/1889", "Hogwarts", 1900, 500.15, 514, "557-1551"));

    cout << "\n" << "Testing remove employee method. Type the ID of an employee you added to remove them: ";
    int removeid;
    cin >> removeid;
    my_department.remove_employee(removeid);

    cout << "\n" << "Testing search employee method. Type the ID of an employee you want to search for ";
    int searchid;
    cin >> searchid;
    if (my_department.search_employee(searchid) == true)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    cout << "\n" << "Get department ID method: " << my_department.get_id() << endl;
    cout << "Get history method: " << my_department.get_history() << endl;
    cout << "Get name method: " << my_department.get_name() << endl;
    cout << "List of employees: ";
    my_department.list_of_employees();
    cout << "Number of employees: " << my_department.num_of_employees() << "\n" << endl;
}