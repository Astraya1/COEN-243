#include <iostream>
using namespace std;

int main()
{
    int arr [5];
    for (int i; i<5; i++)
    {
        int num;
        cout << "Please enter value " << i << "\n";
        cin >> num;

        arr [i] = num;
    }

    