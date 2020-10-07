#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        int year;
        int id;
    public:
        Book();
        Book(string, string, int);
        ~Book();
        bool setTitle(string);
        bool setAuthor(string);
        bool setYear(int);
        string getTitle();
        string getAuthor();
        int getYear();
        int getID();
        static int numOfBooks;
};

#endif // BOOK_H_INCLUDED