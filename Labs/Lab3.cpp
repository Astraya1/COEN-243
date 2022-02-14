#include <iostream>
using namespace std;

int main()
{
    int userinput;

    while (1)
    {
        cout << "Please enter an even number: ";
        cin >> userinput;
        if (userinput%2 == 0 && userinput != 0) //Checks if the number the user inputted is even.
            break; //Breaks the while loop and accepts the input if it is even.
        else
            cout << "I'm sorry, that was not an even number. Please try again." << "\n"; //If odd, prompts the user to try again.
    }

    int highnum = userinput; //Creating another variable "highnum" to be the highest number that will appear in the pyramid, which so happens to be the exact number that the user inputted.

    for (int i = 0; i < highnum/2; i++) //For loop used to create the triangle line by line. The variable "i" keeps track of the the line that is currently being created. There are exactly highnum/2 lines to be made, so make i to iterate until it is 1 less than the user's.                                      //The i variable starts at one because we want j in the next for loop to iterate until i, which means i needs to be at mininum, 1 greater than j.
    {
        for (int j = 0; j <= i; j++) //Nested for loop to keep track of which number we are creating inside each line. The variable "j" corresponds to the index of the number in the line that is currently being made.
        {
            cout << userinput << "  ";
            userinput = userinput - 2; //Reduces the "userinput" value by 2 in preparation for making the next number.
        }
        cout << "\n";
        userinput = highnum; //Resets the "userinput" value to the original inputted value which is "highnum", at the beginning of every new line.
    }
}