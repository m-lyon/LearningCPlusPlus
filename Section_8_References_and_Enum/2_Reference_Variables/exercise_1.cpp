
#include <string>
#include <iostream>

using namespace std; // std::string, 

string name = "Seymore Butts";

string& ref1 = name;
string& ref2 = name;
string& ref3 = name;

int main(){

    cout << "name: " << name << " address: " << &name << endl;
    cout << "ref1: " << ref1 << " address: " << &ref1 << endl;
    cout << "ref2: " << ref2 << " address: " << &ref2 << endl;
    cout << "ref3: " << ref3 << " address: " << &ref3 << endl;
    return 0;
}