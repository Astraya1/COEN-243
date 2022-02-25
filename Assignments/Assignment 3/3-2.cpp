#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool palindrome(string, int); //Function protoype - specifying the type of return value (bool)

    string userinput;

    cout<<"Enter a string: "; //Prompts user for string input
    getline(cin, userinput);

    int n = userinput.length(); //Finds length of user input and uses it to call on the palindrome function
    
    if (palindrome(userinput, n) == true) //If the palindrome function detects that the input is a palindrome
        cout << "Palindrome";
    else
        cout << "Not palindrome";
}

string init = "";

bool palindrome(string input, int n)
{
    if (n == 0 && input == init)
    {
        ::init = "";
        return true;
    }
    else if (n==0 && input != init)
    {
        ::init = "";
        return false;
    }
    else
    {
        ::init = ::init + input[n-1];
        return palindrome(input, n-1);
    }
}
