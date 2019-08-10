#include <iostream>

using namespace std;

int main(){
    string fname, lname;

    cout << "What is your first name?" << endl;
    cin >> fname; // first name
    cout << "What is your last name?" << endl;
    cin >> lname; // last name

    cout << "Your name is " + fname + " " + lname << endl;
}