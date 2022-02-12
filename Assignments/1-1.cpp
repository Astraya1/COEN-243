#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num2 == 0)
        cout << "The results are:" << "\n" << "\n" << "Difference: " << num1-num2 << "\n" << "Product: " << num1*num2 << "\n" << "Division: " << "Division by 0 error." << "\n" << "Average: " << (num1+num2)/2 << "\n" << "Sum of square: " << num1*num1+num2*num2;
    else
        cout << "The results are:" << "\n" << "\n" << "Difference: " << num1-num2 << "\n" << "Product: " << num1*num2 << "\n" << "Division: " << num1/num2 << "\n" << "Average: " << (num1+num2)/2 << "\n" << "Sum of square: " << num1*num1+num2*num2;

    return 0;
}
