#include "Charger.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string type1, type2;
    double power1, power2;
    int voltage1, voltage2; 

    //first charger
    cout << "What type of charger are you looking for? ";
    cin >> type1;
    
    cout << "How powerful is it? ";
    cin >> power1;

    cout << "What is the voltage it uses? ";
    cin >> voltage1;

    //second charger
    cout << "\n" << "What type of charger are you looking for? ";
    cin >> type2;
    
    cout << "How powerful is it? ";
    cin >> power2;

    cout << "What is the voltage it uses? ";
    cin >> voltage2;

    Charger charger1 = Charger(type1, power1, voltage1);
    Charger charger2 = Charger(type2, power2, voltage2);

    cout << "\n" << "The two chargers are:" << endl;
    charger1.printinfo();
    charger1.Level_evaluate();
    charger2.printinfo();
    charger2.Level_evaluate();


    cout << "\n" << "Are the two chargers exchangeable?" << endl;

    bool exchangeable = charger1.exchangeable(charger2);

    if (exchangeable == true)
        cout << "Yes";
    else
        cout << "No";
}