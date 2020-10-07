#include <iostream>

using namespace std;

struct book{
    string title;
    string author;
    int year;
};

void fillInBook(book &b){
    cout << "What is the title of the book: ";
    cin >> b.title;
    cout << "What is the author's name: ";
    cin >> b.author;
    cout << "What year was it published: ";
    cin >> b.year;
}

void printOutBook(book &b){
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Year: " << b.year << endl;
}

int main(){

    book books[3];

    for (int i = 0; i < 3; i++){
        cout << "Book number " << i+1 << endl;
        fillInBook(books[i]);
    }

    for (int i = 0; i < 3; i++){
        cout << "Book number " << i+1 << endl;
        printOutBook(books[i]);
    }

    return 0;
}