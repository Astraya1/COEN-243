#include <iostream>
using namespace std;

int main()
{
    double celsius;
    double kelvins;

    cout << "Fahrenheit   "<<"Celsius   "<<"Kelvin"<< '\n';

    for (double i=32; i <= 42; i++)
    {
        celsius = (i-32.0)*(0.555);
        kelvins = celsius + 273.15;
        if (i==32)
            cout << i << "           " << (int)(celsius/0.01)*0.01 << "         " << (int)(kelvins/0.01)*0.01 << '\n';
        else
            cout << i << "           " << (int)(celsius/0.01)*0.01 << "      " << (int)(kelvins/0.01)*0.01 << '\n';
    }
return 0;
}