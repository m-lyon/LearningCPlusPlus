#include "book.h"

using namespace std;

int Book::numOfBooks = 0;

Book::Book(){

}

Book::Book(string title, string author, int year){
    this->id = numOfBooks++;
    this->title = title;
    this->author = author;
    this->year = year;
}

Book::~Book(){

}

string Book::getTitle(){
    return title;
}

string Book::getAuthor(){
    return author;
}

int Book::getYear(){
    return year;
}

int Book::getID(){
    return id;
}