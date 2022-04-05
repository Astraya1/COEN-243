#include "article.h"
#include "article.cpp"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string title1, title2;
    int start1, start2, end1, end2, year1, year2;

    cout <<"First article" << endl;
    cout << "Enter title: ";
    getline(cin, title1);
    cout << "Enter page start: ";
    cin >> start1;
    cout << "Enter page end: ";
    cin >> end1;
    cout << "Enter year: ";
    cin >> year1;

    cout << "\n" << "Second article" << endl;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, title2);
    cout << "Enter page start: ";
    cin >> start2;
    cout << "Enter page end: ";
    cin >> end2;
    cout << "Enter year: ";
    cin >> year2;

    Article article1 = Article(title1, start1, end1, year1);
    Article article2 = Article(title2, start2, end2, year2);

    Article * ptr = &article2;

    article1.compare_thickness(ptr);
    article1.compare_time(ptr);
}