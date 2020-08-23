#include <iostream>

using namespace std;


void setValue(int& ref){;
    cout << "Input an integer: ";
    cin >> ref;
    ref = 5;
}

int main(){
    int var;

    setValue(var);
    cout << "Variable is: " << var << endl;
    return 0;
}