#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = 3;
    cout << a % b << endl;

    //Post-incrementation
    int d = 1;
    cout << d++;
    //d++ here will increment after output
    //Not before

    //Pre-incrementation
    cout << ++d;
    //works for d-- and --d too.

    //relational operators
    // put in brackets
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    
    // same as in bash for and and or 
    cout << ((a == b) || (a != b)) << endl;

    // bitwise operators works on the bits (0 and 1)
    // 
    /*
    BITWISE:
    & - and
    | - or
    ~ - not
    ^ - xor 
    << - shift left by some amount
    >> - shift right by some amount
    */

    return 0;
}