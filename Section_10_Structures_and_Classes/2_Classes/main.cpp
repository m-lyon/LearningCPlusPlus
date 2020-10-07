#include <iostream>
#include "book.h"
#include "library.h"

using namespace std;

int main(){
    
    const Book booky1("me", "A life worth lived", 1993);
    const Book booky2("you", "A life Part II", 1997);
    const Book booky3("us", "It's fucked up", 2020);

    Library lib(3);
    lib.addBook(booky1);
    lib.addBook(booky2);

    lib.printBooks();

    return 0;
}