#include <iostream>
using namespace std;

int main()
{
    int income;
    int tax;

    cout << "What is your net income? $";
    cin >> income;

    if (income >= 100000)
    {
        cout << "Tax = 40%";
    }
    else if (income >= 80000 && income < 100000)
    {
        cout << "Tax = 30%";
    }
    else if (income >= 60000 && income < 80000)
    {
        cout << "Tax = 20%";
    }
    else if (income >= 40000 && income < 60000)
    {
        cout << "Tax = 10%";
    }
    else
    {
        cout << "Tax = 0%";
    }
    
return 0;
}