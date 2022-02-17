#include <iostream>
using namespace std;

int main()
{
    void fourhighest(int*, int);
    // int fourlowest(int);
    // int average(int);
    // int median(int);
    // int Agrades(int);
    // int Bgrades(int);
    // int Cgrades(int);
    // int Dgrades(int);
    // int Fgrades(int);

    int N; //Variable that will store the number of students

    cout << "How many students? ";
    cin >> N;

    int grades [N]; //Creates array of size identical to the number of students

    for (int i; i < N; i++) //For loop that will prompt the user to input the grade of each student in the group and stores in the 'students' array.
    {
        cout << "Please enter the grade of student " << i+1 << ": ";
        cin >> grades [i];
    }

    //At this stage, the 'students' array should be length 'N' and contain all the grades that the user inputted.

    int response;

    cout << "What would you like to do? Please type the corresponding number to select a function:" << "\n" << "1 - Find the four highest grades" << "\n" << "2 - Find the four lowest grades" << "\n" << "3 - Find the average" << "\n" << "4 - Find the median" << "\n" << "5 - Find the number of A grades" << "\n" << "6 - Find the number of B grades" << "\n" << "7 - Find the number of C grades" << "\n" << "8 - Find the number of D grades" << "\n" << "9 - Find the number of F grades" << "\n";
    cin >> response;

    switch(response)
    {
        case 1:
            fourhighest(grades, N);
            break;
        default:
            cout << "That is an invalid response. Program will now terminate.";
    }
}

void fourhighest(int* grades, int N) //Grades is the array of grades that will be inputted. N is the size of the array.
{
    int highestgrades[4]; //Array where the four highest grades will be stored.
    
    int count = 0; //Count variable to keep track of how many highest grades have been found so far.

    while (count < 4)
    {
        int currenthighest = grades [0]; //Variable to keep track of the current highest grade in the upcoming for loop.

        for (int i = 1; i<N; i++) //Starting at i = 1 to avoid calling on an index of -1 on the array.
        {      
            if (grades [i] > currenthighest) //If the new grade is higher than the old one.
                currenthighest = grades [i]; //Set the highest grade as the new one.
        }
    
        for (int i = 0; i<N; i++) //For loop to check how many times the current highest grade found repeats in the grades array.
        {
            if (grades [i] == currenthighest)
            {
                highestgrades[count] = currenthighest; //If the current grade being iterated on is equal to the highest grade found previously, it adds it to the highest grades array.
                grades [i] = 0; //If the current grade that is being iterated is a highest grade, it is set to 0 so that on the next iteration of the while loop, it won't get counted twice.
                count++; //Increment the count variable.
                if (count == 5);
                    break;
            }
        }
    }

    if (N >= 4)
        cout << "The 4 highest grades are: " << highestgrades [0] << ", " << highestgrades [1] << ", " << highestgrades [2] << ", and " << highestgrades [3] << '.';
    else //Consideres if there are 3 or less grades entered.
    {
        switch (N)
        {
            case 0:
                break;
            case 1:
                cout << "The 4 highest grades are: " << highestgrades [0] << '.';
                break;
            case 2:
                cout << "The 4 highest grades are: " << highestgrades [0] << " and " << highestgrades [1] << '.';
                break;
            case 3:
                cout << "The 4 highest grades are: " << highestgrades [0] << ", " << highestgrades [1] << ", and " << highestgrades [2] << '.';
                break;
        }
    }
}

// int fourlowest(int grades)
// {

// }

// int average(int grades)
// {

// }

// int median(int grades)
// {

// }

// int Agrades(int grades)
// {

// }

// int Bgrades(int grades)
// {

// }

// int Cgrades(int grades)
// {

// }

// int Dgrades(int grades)
// {

// }

// int Fgrades(int grades)
// {

// }