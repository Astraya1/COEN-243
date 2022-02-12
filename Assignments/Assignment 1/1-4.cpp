#include <iostream>
using namespace std;

int main()
{
    int input;
    int count = 0;

    cout << "What number do you want to check? ";
    cin >> input;

    for (int i=1; i <= (input/2); i++) // Using input/2 because to check for prime number, you really only need to check all numbers up to half of your input.
    {
        if (input % i == 0)
            count++;
    }

    if (input == 0)
        cout << "Neither";
    else if (count > 1)
        cout << "Not prime";
    else
        cout << "Prime";

    return 0;
}