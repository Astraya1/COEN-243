#include <iostream>
using namespace std;

int main()
{
    void function1(int, int);
    void function2(int, int, int &);
    double function3(int, int);

    int lower;
    int upper;
    char function;

    cout << "Please enter two positive integers (lower/upper bound):" << "\n";
    cin >> lower >> upper;

    cout << "Please enter a character:" << "\n";
    cin >> function;

    if (function == 'a') //If statement checks if the selected function is function a
    {
        function1(lower, upper);
    }
    else if (function == 'b') //Checks if the selected function is function b
    {
        int result; //Creates the variable 'result' to be used as reference in function2

        function2(lower, upper, result); //Calls function2 with lower and upper bounds, as well as the result variable as arguments

        cout << "The result is: " << result;
    }
    else if (function == 'c') //Checks if the selected function is function c
    {
        cout << "The value of the sum is: " << function3(lower, upper); //Calls function3 using the lower and upper bounds as arguments
    }
    else //Checks if the user input for function selection is invalid (ie. not a, b, or c)
    {
        cout << "Invalid input.";
        return 0;
    }
}

void function1(int a, int b)
{
    cout << "List of numbers in this interval which are multiples of both 3 and 7: ";

    for (int i=a; i<=b; i++) //For loop iterates through all integers inside the interval
        {
            if (i%3 == 0 && i%7 == 0) //Checks if the particular integer is a multiple of both 3 and 7
                cout << i << ' ';
        }
}

void function2(int a, int b, int &c)
{
    c = b-a; //Sets variable 'c' to the difference of b and a, which will later be saved into the result variable in main
}

double function3(int a, int b)
{
    double sum = 0;

    for (double i=a; i<=b; i++) //Iterates through all integers between the lower and upper bound
        {
            sum = sum + (1.0/i); //Adds the value of the reciprocal of the iteration variable to the current sum
        }

    return sum;
}