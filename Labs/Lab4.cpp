#include <iostream>
#include <array>
using namespace std;

int main()
{
    int maxfunc(int arr[5]);
    int minfunc(int arr[5]);
    void swapminmax(int (&arr)[5], int min, int max);

    int arr[5];

    for (int i=0; i<5; i++)
    {
        cout << "Please enter number #" << i+1 << ": ";
        cin >> arr[i];
    }

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

int maxfunc(int arr[5]) //Function that returns the index of the highest value in the array
{
    int currentmax = arr[0]; //Variable to keep track of the current highest value in the array while iterating

    for (int i=1; i<5; i++)
    {
        if (arr[i] > arr[i-1]) //Sets the currentmax variable to the index of the current value if it is greater than the previous value
            currentmax = i;
    }

    return currentmax;
}

int minfunc(int arr[5]) //Same logic as maximum, except compares less rather than greater
{
    int currentmin = arr[0];

    for (int i=1; i<5; i++)
    {
        if (arr[i] < arr[i-1])
            currentmin = i;
    }

    return currentmin;
}

void swapminmax(int (&arr)[5], int min, int max)
{
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
}