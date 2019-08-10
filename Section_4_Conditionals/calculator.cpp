#include <iostream>

using namespace std;

int main(){
    double var1, var2, ans;
    char input;

    cout << "Enter first number: ";
    cin >> var1;

    cout << "Enter second number: ";
    cin >> var2;

    cout << "+ Add" << endl << "- Subtract" << endl;
    cout << "* Multiply" << endl << "/ Divide" << endl;
    cout << "What do you want to do with the numbers?: ";

    cin >> input;
    // only accepts '' not "" here
    switch(input){
        case '+':
            ans = var1 + var2;
            break;
        case '-':
            ans = var1 - var2;
            break;
        case '*':
            ans = var1 * var2;
            break;
        case '/':
            // Check value is not 0
            if (var2){
                ans = var1 / var2;
                break;
            }
            else {
                cout << "You cannot divide by 0" << endl;
                return 1;
            }
        default:
            cout << "Unrecognised answer" << endl;
            return 1;
    }

    cout << "The answer is " << ans << endl;
    return 0;
}