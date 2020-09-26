#include <iostream>

using namespace std;

int numOfChars(){
    int chars;
    cout << "How many characters would you like? ";
    cin >> chars;
    return chars;
}

int main(){

    int num = numOfChars();
    char* charArray = new char[num];

    for (int i = 0; i < num; i++){

        cout << "Input character " << i+1 << ": ";
        cin >> *(charArray+i);
    }

    cout << "String output: ";
    for (int i = 0; i < num; i++){
        cout << charArray[i];
    }
    cout << endl;

    delete[] charArray;

    return 0;
}