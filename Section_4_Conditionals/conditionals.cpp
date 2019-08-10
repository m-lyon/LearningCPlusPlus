#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    if (a > b){
        cout << "A is bigger m8" << endl;
    }
    else {
        cout << "B is bigger" << endl;
    }
    // Switch
    // Can only use integers and chars
    switch (a){
        case 0 ... 9:
            cout << "A is between 0 and 9" << endl;
            break;
        default:
            cout << "Default option" << endl;
            break;

    }

    // Conditional Operator
    // (condition) ? if : else
    string message = ( a > b) ? "a is greater than b": "a is less than b";
    cout << message << endl;
    return 0;
}