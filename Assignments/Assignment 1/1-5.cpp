#include <iostream> //Hello!
using namespace std;

int main()
{
    double mass;
    double height;
    
    cout << "Input your height in meters: ";
    cin >> height;
    
    cout << "Input your weight in kilograms: ";
    cin >> mass;

    if (height <= 0)
        cout << "Your height cannot be 0 or negative.";
    else
        cout << "Your BMI is: " << mass/(height*height);

    return 0;
}