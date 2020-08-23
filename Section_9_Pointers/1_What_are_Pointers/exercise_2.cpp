#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int* p = &a;
    int** pp = &p;

    cout << "a value: " << a << endl;
    cout << "a address: " << &a << endl;
    cout << "p pointed value: " << *p << endl;
    cout << "p value: " << p << endl;
    cout << "p address: " << &p << endl;
    cout << "pp pointed value: " << *pp << endl;
    cout << "pp value: " << pp << endl;
    cout << "pp address: " << &pp << endl;
    return 0;
}