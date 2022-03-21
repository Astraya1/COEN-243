#include "Charger.h"
#include <iostream>
#include <string>
using namespace std;

Charger::Charger()
{
    type = "";
    power = 0;
    voltage = 0;
}

Charger::Charger(string a, double b, int c)
{
    type = a;
    power = b;
    voltage = c;
}

string Charger::get_type()
{
    return type;
}

double Charger::get_power()
{
    return power;
}

int Charger::get_voltage()
{
    return voltage;
}

void Charger::set_type(string newtype)
{
    type = newtype;
}

void Charger::set_power(double newpower)
{
    power = newpower;
}

void Charger::set_voltage(int newvoltage)
{
    voltage = newvoltage;
}

bool Charger::exchangeable(Charger charger2)
{
    if (type == charger2.get_type() && voltage == charger2.get_voltage())
        return true;
    return false;
}

void Charger::Level_evaluate()
{
    if (power <= 3.7)
        cout << "Level 1 charger" << endl;
    else if (3.7 < power <= 22)
        cout << "Level 2 charger" << endl;
    else
        cout << "Level 3 charger" << endl;
}

void Charger::printinfo()
{
    cout << type << " charger with " << power << "kW charging power using the voltage of " << voltage << " volt." << endl;
}