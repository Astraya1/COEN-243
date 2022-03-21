#include <iostream>
using namespace std;

int main()
{
    void fourhighest(int*, int);
    void fourlowest(int*, int);
    void average(int*, int);
    void median(int*, int);
    void Agrades(int*, int);
    void Bgrades(int*, int);
    void Cgrades(int*, int);
    void Dgrades(int*, int);
    void Fgrades(int*, int);

    int N; //Variable that will store the number of students

    cout << "How many students? ";
    cin >> N;

    int gradesinput [N]; //Creates array of size identical to the number of students

    int* grades = gradesinput;

    for (int i; i < N; i++) //For loop that will prompt the user to input the grade of each student in the group and stores in the 'students' array.
    {
        cout << "Please enter the grade of student " << i+1 << ": ";
        cin >> grades [i];
    }

    cout << "\n";

    //At this stage, the 'students' array should be length 'N' and contain all the grades that the user inputted.

    bool firsttime = true;

    while (1)
    {   
        if (firsttime == true)
            cout << "What would you like to do? Please type the corresponding number to select an option:" << "\n" << "1 - Find the four highest grades" << "\n" << "2 - Find the four lowest grades" << "\n" << "3 - Find the average" << "\n" << "4 - Find the median" << "\n" << "5 - Find the number of A grades" << "\n" << "6 - Find the number of B grades" << "\n" << "7 - Find the number of C grades" << "\n" << "8 - Find the number of D grades" << "\n" << "9 - Find the number of F grades" << "\n" << "10 - Exit Program" << "\n";
        else
            cout << "Please enter another number to select an option:" << "\n";
        
        int response;
        cin >> response;

        switch(response)
        {
            case 1:
                fourhighest(grades, N);
                break;
            case 2:
                fourlowest(grades, N);
                break;
            case 3:
                average(grades, N);
                break;
            case 4:
                median(grades, N);
                break;
            case 5:
                Agrades(grades, N);
                break;
            case 6:
                Bgrades(grades, N);
                break;
            case 7:
                Cgrades(grades, N);
                break;
            case 8:
                Dgrades(grades, N);
                break;
            case 9:
                Fgrades(grades, N);
                break;
            case 10:
                cout <<"Program will now exit.";
                return 0;
            default:
                cout << "That is an invalid response. Program will now exit.";
                return 0;
        }
        firsttime = false;
    }
}

void fourhighest(int* grades, int N) //Grades is the array of grades that will be inputted. N is the size of the array.
{
    void swap(int &, int &);
    int count = 0; //Count variable tracks the index that marks the beginning of the unsorted portion of the grades array
    
    //Partial selection sort algorithm that places the four highest grades at at the beginning of the array in order from highest to lowest.
    //The algorithm works by continually computing the highest value in the unsorted portion array and placing it at the beginning.
    while (count < 4)
    {
        int currenthighest = grades[count]; //Creates a variable that is initialized to the first unsorted object in the array, whose value depends on the number of times the while loop has run for

        for (int i = count; i<N; i++) //For loop that computes the highest value in the unsorted array.
        {
            if (grades[i] > currenthighest) //Uses comparison to compute the largest value
                currenthighest = grades[i]; 
        }

        for (int i = count; i<N; i++) //For loop iterating through the unsorted portion of the array, and moving the first value encountered which matches the current highest found
        {
            if (grades[i] == currenthighest) 
                swap(grades[i], grades[count]); //Calls swap function defined below
        }
        count++;
    }

    switch (N)
    {
        case 1:
            cout << "There was only one grade inputted, so the highest grade is: " << grades[0] << "." << "\n" << "\n";
            break;
        case 2:
            cout << "There were only two grades inputted, so the 2 highest grades are: " << grades[0] << " and " << grades[1] << "." << "\n" << "\n";
            break;
        case 3:
            cout << "There were only three grades inputted, so the 3 highest grades are: " << grades[0] << ", " << grades[1] << ", and " << grades[2] << "." << "\n" << "\n";
            break;
        default:
            cout << "The 4 highest grades are: " << grades[0] << ", " << grades[1] << ", " << grades[2] << ", and " << grades[3] << '.' << "\n" << "\n";
    }
}

void fourlowest(int* grades, int N)
{
    void swap(int &, int &);
    int count = 0;

    //Partial selection sort algorithm that places the four lowets grades at at the beginning of the array in order from lowest to highest.
    //Function follows exact same logic as the fourhighest function above it, however rather than computing the highest in the unsorted array, it computes the lowest
    while (count < 4)
    {
        int currentlowest = grades[count];

        for (int i = count; i<N; i++)
        {
            if (grades[i] < currentlowest)
                currentlowest = grades[i];   
        }

        for (int i = count; i<N; i++)
        {
            if (grades[i] == currentlowest)
                swap(grades[i], grades[count]);
        }
        count++;
    }
    
    switch (N)
    {
        case 1:
            cout << "There was only one grade inputted, so the lowest grade is: " << grades[0] << "." << "\n" << "\n";
            break;
        case 2:
            cout << "There were only two grades inputted, so the 2 lowest grades are: " << grades[0] << " and " << grades[1] << "." << "\n" << "\n";
            break;
        case 3:
            cout << "There were only three grades inputted, so the 3 lowest grades are: " << grades[0] << ", " << grades[1] << ", and " << grades[2] << "." << "\n" << "\n";
            break;
        default:
            cout << "The 4 lowest grades are: " << grades[0] << ", " << grades[1] << ", " << grades[2] << ", and " << grades[3] << '.' << "\n" << "\n";
    }
}

void average(int* grades, int N)
{
    double sum = 0;
    
    for (int i = 0; i<N; i++) //Finds sum of all grades entered
    {
        sum = sum + grades[i];
    }

    cout << "The average grade is: " << sum/N << '.' << "\n" << "\n"; //sum/N produces the average by dividing the total sum by the number of students
}

void median(int* grades, int N)
{
    void swap(int &, int &);
    int count = 0;

    //Full sorting algorithm that follows the same logic as fourlowest
    //Instead of sorting just the first four, it sorts the whole array.
    while (count < N)
    //Runs the selection sort loop N times as opposed to 4 times, since we want to sort the entire array not just four terms
    {
        int currentlowest = grades[count];

        for (int i = count; i<N; i++)
        {
            if (grades[i] < currentlowest)
                currentlowest = grades[i];   
        }

        for (int i = count; i<N; i++)
        {
            if (grades[i] == currentlowest)
                swap(grades[i], grades[count]);
        }
        count++;
    }

    if (N%2 == 0) //If N is even
    {
        double median = (grades[N/2] + grades[(N/2)-1])/2; //Computes the median as the average of the two middle numbers in the set
        cout << "The median is: " << median << "." << "\n" << endl;
    }
    else
    {
        int median = grades[N/2];
        cout << "The median is: " << median << "." << "\n" << endl;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Agrades(int* grades, int N)
{
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (grades[i] >= 90)
            count++;
    }

    cout << "The number of A grades is: " << count << "." << "\n" << endl;
}

void Bgrades(int* grades, int N)
{
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (grades[i] < 90 && grades[i] >= 80)
            count++;
    }

    cout << "The number of B grades is: " << count << "." << "\n" << endl;
}

void Cgrades(int* grades, int N)
{
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (grades[i] < 80 && grades[i] >= 65)
            count++;
    }

    cout << "The number of C grades is: " << count << "." << "\n" << endl;
}

void Dgrades(int* grades, int N)
{
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (grades[i] < 65 && grades[i] >= 50)
            count++;
    }

    cout << "The number of D grades is: " << count << "." << "\n" << endl;
}

void Fgrades(int* grades, int N)
{
    int count = 0;

    for (int i=0; i<N; i++)
    {
        if (grades[i] < 50)
            count++;
    }

    cout << "The number of F grades is: " << count << "." << "\n" << "\n";
}