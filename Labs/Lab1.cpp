#include <iostream>

using namespace std;

int main()
{
    int notebook_price = 6;
    int pen_price = 10;
    int bags_price = 1;
    int n_number;
    int p_number;
    int b_number;
    int total;
    char end;

    cout << "How many Notebooks? ";
    cin >> n_number;

    cout << "How many Pens? ";
    cin >> p_number;

    cout << "How many Bags? ";
    cin >> b_number;

    total = n_number*notebook_price + p_number*pen_price + b_number*bags_price;
    int bonus;
    bonus = total/30;

    cout << "Your total bill for "<<n_number<<" notebook(s) and "<<b_number<<" bag(s) and "<<p_number<<" pen(s) is $"<<total<<". You have earned "<<bonus<<" free pen(s)."<<"\n";
    cout << "Press Enter to close program"<<"\n";
    cin.ignore();

    return 0;
}