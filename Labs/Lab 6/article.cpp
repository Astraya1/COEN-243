#include "article.h"
#include <iostream>
#include <string>
using namespace std;

Article::Article()
{
    title = '0';
    page_start = 0;
    page_end = 0;
    year = 0;
}

Article::Article(string a, int b, int c, int d)
{
    title = a;
    page_start = b;
    page_end = c;
    year = d;
}

//Getter functions
string Article::get_title()
{
    return title;
}

int Article::get_page_start()
{
    return page_start;
}

int Article::get_page_end()
{
    return page_end;
}

int Article::get_year()
{
    return year;
}

//Setter functions
void Article::set_title(string newtitle)
{
    title = newtitle;
}

void Article::set_page_start(int a)
{
    page_start = a;
}

void Article::set_page_end(int a)
{
    page_end = a;
}

void Article::set_year(int a)
{
    year = a;
}

void Article::info()
{
    cout << "Article " << get_title() << " " << get_page_start() << " - " << get_page_end() << ", year (" << get_year() << ")";
}

void Article::compare_thickness(Article *otherarticle)
{
    int numpages1 = (get_page_end() - get_page_start());
    int numpages2 = (otherarticle->get_page_end() - otherarticle->get_page_start());

    if (numpages1 > numpages2)
        cout << get_title() << " is thiccer than " << otherarticle->get_title() << endl;
    else if (numpages1 < numpages2)
        cout << otherarticle->get_title() << " is thiccer than " << get_title() << endl;
    else
        cout << get_title() << " is same thiccness as " << otherarticle->get_title() << endl;
}

void Article::compare_time(Article *otherarticle)
{
    int year1 = get_year();
    int year2 = otherarticle->get_year();

    if (year1 > year2)
        cout << get_title() << " is newer than " << otherarticle->get_title() << endl;
    else if (year1 < year2)
        cout << otherarticle->get_title() << " is newer than " << get_title() << endl;
    else
        cout << get_title() << " is the same age as " << otherarticle->get_title() << endl;
}