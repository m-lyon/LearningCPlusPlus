#include <iostream>

using namespace std;

int main(){

    int var1;

    int* var2 = new int;
    int* p = &var1;

    *p = 56;
    *var2 = 100;

    cout << "var1 is " << var1 << " and the address is " << p << endl;
    cout << "var2 is " << *var2 << " and the address is " << var2 << endl;

    delete var2;


    return 0;
}