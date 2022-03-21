#include <iostream>
#include <array>
#include <vector>
using namespace std;

vector<int> moves;

int main()
{
    void right(vector<char> &, int);
    void left(int);
    void display(int);
    void reboot(int);

    int arrsize;
    cout << "How long would you like the array to be? ";
    cin >> arrsize;

    vector<char> arr(arrsize);

    for (int i=0; i<arrsize; i++)
        arr[i] = ' ';

    arr[0] = '^';

    while(1)
    {   
        bool firsttime = true;
        int response;
        
        if (firsttime == true)
        {
            cout << "What would you like to do? Type the number corresponding to an option to select an option." << endl;
            cout << "1 - Move right" << endl;
            cout << "2 - Move left" << endl;
            cout << "3 - Display current position" << endl;
            cout << "4 - Restore original position" << endl;
            cout << "5 - Show grid" << endl;
            cout << "6 - Cancel previous commands" << endl;
            cout << "7 - Restore cancelled commands" << endl;
            cin >> response;
            firsttime = false;
        }
        else
        {
            cout << "What would you like to do? Type the number corresponding to an option to select an option:" << endl;
            cin >> response;
        }
        
        switch (response)
        {
            case 1:
                int n;
                cout << "How many steps would you like to move? ";
                cin >> n;
                right(arr, n);
                break;
        }

    for (int i=0; i<::moves.size(); i++)
        cout << moves[i] << ", ";
    }
}

void right(vector<char> &arr, int steps)
{
    for (int i=0; i<arr.size(); i++)
    {
        if (arr[i] == '^' && i+steps < arr.size())
        {
            arr[i] = ' ';
            arr[i+steps] = '^';
            ::moves.push_back(i+steps);
        }
        else
            cout << "Invalid input." << endl;
    }
}