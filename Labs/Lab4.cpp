#include <iostream>
#include <array>
using namespace std;

int main()
{
    int maxfunc(int arr[5]);
    int minfunc(int arr[5]);
    void swapminmax(int (&arr)[5], int min, int max);

    int arr[5];
    
    cout << "Please enter 5 numbers for your array:" << endl;

    for (int i=0; i<5; i++)
        cin >> arr[i];

    cout << "Here is your original array: ";

    for (int i=0; i<5; i++)
        cout << arr[i] << " ";

    cout << "\n";

    int max = maxfunc(arr);
    int min = minfunc(arr);
    swapminmax(arr, min, max);

    cout << "Here is your new array: ";

    for (int i=0; i<5; i++)
        cout << arr[i] << " ";
}

int maxfunc(int arr[5])
{
    int currentmax = arr[0];

    for (int i=1; i<5; i++)
    {
        if (arr[i] > arr[i-1])
            currentmax = arr[i];
    }

    return currentmax;
}

int minfunc(int arr[5])
{
    int currentmin = arr[0];

    for (int i=1; i<5; i++)
    {
        if (arr[i] < arr[i-1])
            currentmin = arr[i];
    }

    return currentmin;
}

void swapminmax(int (&arr)[5], int min, int max)
{
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
}