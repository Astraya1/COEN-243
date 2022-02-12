#include <iostream>
using namespace std;

int main()
{
    int input1;

    cout << "What is your choice? (1 or 2)" << "\n";
    cin >> input1;

    switch (input1)
    {
        case 1:
            int alpha1;
            int alpha2;
            int alpha3;

            cout << "Enter three 2-digit numbers:" << "\n";
            cin >> alpha1 >> alpha2 >> alpha3;
            int sum;
            sum = alpha1 + alpha2 + alpha3;
            
            if (sum%3 == 0)
            {
                if (sum%5 == 0) //If multiple of both 3 and 5
                {
                    cout << "Your magic number is " << alpha2 << alpha1;
                }
                else //If multiple of 3 but not of 5
                {
                    cout << "Your magic number is " << alpha2%10 << alpha1 + alpha3;
                }
            }
            else if (sum%3 != 0)
            {
                if (sum%5 == 0) //If not multiple of 3 but multiple of 5
                {
                    cout << "Your magic number is " << alpha1 + alpha3 << alpha2%10;
                }
                else //If multiple of neither 3 nor 5
                {
                    cout << "Your magic number is " << alpha1 << alpha2 << alpha3;
                }
            }
            break;
        case 2:
            int beta1;
            int beta2;
            
            cout << "Enter two 2-digit numbers:" << "\n";
            cin >> beta1 >> beta2;

            int product = beta1*beta2;

            if (product%2 == 0)
            {
                cout << "The multiplication is " << product << " and is even";
            }
            else
            {
                cout << "The multiplication is " << product << " and is odd";
            }
            break;
    }
}