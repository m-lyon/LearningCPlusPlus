#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int* p = &a;

    cout << "a value: " << a << endl;
    cout << "a address: " << &a << endl;
    cout << "P pointed value: " << *p << endl;
    cout << "p value: " << p << endl;
    cout << "p address: " << &p << endl;
    return 0;
}