#include <stdio.h>

int main(){
    short int i = 5;

    printf ("Enter your age: ");
    //asterisk means ignore
    scanf ("%*2hd");
    // length of 2, short int, decimal
    scanf ("%2hd", &i);
    printf ("Your age is %i \n", i);
    return 0;
}