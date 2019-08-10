#include <iostream>

using namespace std;
/*
    Multi
    Line
    Comment
*/


int main(){

    int a = 5, b = 0, c = 20;
    short d = 5; // only 2 bytes, instead of 4 for normal int

    unsigned int t9 = 2242; // no sign (+ or -) so has double amount of possible digits

    float t2 = 6.3; // 4 bytes of memory
    double t3 = 53453.4543; // 8 bytes of memory

    char t4 = 'a';

    string t5 = "stringy", t6 = "combined";

    bool t8 = true; // can be 1+ for true, 0 for false

    const string GOOBYPLS = "indeed"; // constants are immutable
    //string L = "whatupp"
    // leaving a variable undeclared does not mean it will be 0
    // cout = console output
    cout << a << endl; 
    cout << b << endl;
    cout << c << endl;
    cout << t5 + " " + t6;
}