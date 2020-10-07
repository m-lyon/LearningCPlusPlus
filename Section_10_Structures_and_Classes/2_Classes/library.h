#ifndef SOURCE_H
#define SOURCE_H
#include <iostream>
#include "book.h"

using namespace std;

class Library{
    private:
        int librarySize;
        Book* books;
        int numOfBooks = 0;
    public:
        bool addBook(Book);
        Book getBook(int);
        void printBooks();

        Library(int);
        ~Library();
};

#endif // SOURCE_H