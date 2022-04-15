#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "12/32/141";
    string newstr = "";

    for (int i{6}; i<str.length(); i++)
        newstr = newstr + str[i];

    cout << newstr;

}