#include <iostream>
#include "library.h"

using namespace std;

Book Library::getBook(int index){
    return books[index];
}

Library::Library(int libSize){
    librarySize = libSize;
    books = new Book[librarySize];
}

void Library::printBooks(){
    cout << "| ID | Title | Author | Year | " << endl;
    for (int i = 0; i < numOfBooks; i++){
        cout << "| " << books[i].getID();
        cout << " | " << books[i].getTitle();
        cout << " | " << books[i].getAuthor();
        cout << " | " << books[i].getYear() << " |" << endl;
    }
}

bool Library::addBook(Book newBook){
    if (numOfBooks >= librarySize){
        return false;
    }
    books[numOfBooks] = newBook;
    numOfBooks++;
    return true;
}

Library::~Library(){
    delete[] books;
}