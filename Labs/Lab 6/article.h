#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include <iostream>
using namespace std;

class Article
{
private:
    string title;
    int page_start;
    int page_end;
    int year;

public:
    //Constructors
    Article();
    Article(string, int, int, int);
    
    //Getter functions
    string get_title();
    int get_page_start();
    int get_page_end();
    int get_year();

    //Setter functions
    void set_title(string);
    void set_page_start(int);
    void set_page_end(int);
    void set_year(int);

    void info();

    void compare_thickness(Article*);
    void compare_time(Article*);
};

#endif