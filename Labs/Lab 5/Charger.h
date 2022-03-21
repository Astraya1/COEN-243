#ifndef CHARGER_H
#define CHARGER_H

#include <string>
#include <iostream>
using namespace std;

class Charger   
{
private:
    string type;
    double power;
    int voltage;

public:
    Charger();
    Charger(string, double, int);

    string get_type();
    double get_power();
    int get_voltage();

    void set_type(string);
    void set_power(double);
    void set_voltage(int);

    bool exchangeable(Charger);
    void Level_evaluate();
    void printinfo();
};

#endif