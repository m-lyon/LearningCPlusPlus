#include <iostream>

using namespace std;

void checkIfSame(int& arg1, int& arg2){
    if (arg1 == arg2){
        cout << "Arguments have the same value" << endl;
        if (&arg1 == &arg2){
            cout << "Arguments are exactly the same" << endl;
        }
        else{
            cout << "Arguments have different addresses" << endl;
        }
    }
    else{
        cout << "Arguments are different" << endl;
    }
    cout << endl;
}

int main(){
    int a = 5, b = 10;
    int c = a;
    int& d = a;
    
    checkIfSame(a, b);
    checkIfSame(a, c);
    checkIfSame(a, d);

    return 0;
}