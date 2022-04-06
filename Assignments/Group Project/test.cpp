#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date = "10/12/2001";
    string arr[3];
    double arr2[3];

    int count = 0;
    for (char & c : date)
    {
        if (c == '/')
            count++;
        else
            arr[count] += c;
    }

    for (int i=0; i<3; i++)
        arr2[i] = stod(arr[i]);

    cout << arr2[0] << " " << arr2[1] << " " << arr2[2];

    cout << arr2[0] + arr2[1]*30 + arr2[2]*365; 
}