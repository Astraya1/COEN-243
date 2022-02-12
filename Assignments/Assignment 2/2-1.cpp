#include <iostream>
using namespace std;

int main()
{
    string name; //Q1

    cout << "Welcome user! Please enter your name: " << "\n";
    cin >> name;

    int count = 0; //count variable keeps track of how many houses the user has drawn, to be incremented at the end of the while loop.

    while (1)
    {
        while (1)
        {
            if (count == 0)
            {
                string response;

                cout << "Welcome " << name << " to your house drawing program! Would you like to draw a house? (Y/N)" << "\n";
                cin >> response;

                if (response == "N") //Kills program if no is inputted
                {
                    cout << "Have a good day!";
                    return 0;
                }
                else if (response == "Y")
                {
                    break;
                }
                else
                {
                    cout << "I'm sorry that input is invalid." << "\n";
                }
            }
            else if (count != 0)
            {
                string response;

                cout << name << ", would you like to draw another house? (Y/N)" << "\n";
                cin >> response;

                if (response == "N") //Kills program if no is inputted
                {
                    cout << "Have a good day!";
                    return 0;
                }
                else if (response == "Y")
                {
                    break;
                }
                
                else
                {
                    cout << "I'm sorry that input is invalid." << "\n";
                }
            }
        }
        
        int width;
        int height;

        for (int i=0; i<3; i++) //For loop that iterates 3 times max, giving the user 3 tries to input an acceptable number
        {
        
            if (i==0)
            {
                cout << name << ", please enter a desired width for your house that is even and larger than 2, you have " << 3-i << "/3 attempts left." << "\n";
                cin >> width;
            }
            else
            {
                cout << " you have " << 3-i << "/3 attempts left." << "\n";
                cin >> width;
            }

            if (width > 2 && width%2 == 0) //Checks if user inputted an acceptable number, and breaks for loop if yes
                break;
            else //If the user inputted an incorrect number
            {
                if (width <= 2 && width % 2 != 0) //Checks if the user inputted a width less than or equal to 2, and sends an error message if they did.
                {    
                    if (i==2) //Checks if this is the third attempt and failure, and kills program if yes
                    {    
                        cout << "I'm sorry " << name << " but you've entered too many incorrect widths. The program will now terminate.";
                        return 0; 
                    }

                    cout << "Please enter a width that is even and greater than 2,";
                }    
                else if (width%2 != 0) //Checks if the user inputted a width that is odd, and sends an error message if they did
                {
                    if (i==2) //Checks if this is the third attempt and failure, and kills program if yes
                    {    
                        cout << "I'm sorry " << name << " but you've entered too many incorrect widths. The program will now terminate.";
                        return 0; 
                    }

                    cout << "Please enter a width that is even,";
                }
                else //Checks if the user inputted something that is both less than or equal 2 and odd
                {
                    if (i==2) //Checks if this is the third attempt and failure, and kills program if yes
                    {    
                        cout << "I'm sorry " << name << " but you've entered too many incorrect widths. The program will now terminate.";
                        return 0; 
                    }

                    cout << "Please enter a width greater than 2,";
                }
            }
        }

        cout << "Now " << name << ", please enter the desired height for your house:" << "\n";
        cin >> height;

        for (int i=0; i<(width/2); i++) //For loop creates each row of the roof.
        {
            string spaces((width/2)-i-1, ' '); //Creates the number of spaces needed in each row so that the roof is triangular
            string stars(2*(i+1), '*'); //Creates the necessary number of stars for each row of the roof. Done using the iteration variable.

            cout << spaces << stars << "\n"; //Creates the roof.
        }

        for (int i=0; i<(height+1); i++) //For loop that creates each row for the body
        {
            string spaces2(width-2, ' '); //Creates the necessary number of spaces in each row of the body based on the selected width
            string floor(width, '-'); //Creates the floor that is full of underscores

            if (i < height) //Checks which row we are currently building to determine when to create the floor
            {
                cout << '|' << spaces2 << '|' << "\n";
            }
            else //Checks if we are on the last row of the body so that the floor can be made
            {
                cout << floor << "\n";
            }
        }
    
        count++; //Increments count variable to keep track of how many houses have been built
    }    
}