#include <stdio.h>
#include <iostream>

using namespace std;

// Declare functions before main

// Can declare before hand and rewrite

bool isNumber(string tmp){
    bool isNumber = false;
    for (int i = 0; i < tmp.length(); i++){
        if (tmp[i] >= 48 && tmp[i] <= 57){
            isNumber = true;
            break;
        }
    }
    return isNumber;
}

int main(){

    string tmp;
    
    cout << "Enter string: ";
    cin >> tmp;

    if (isNumber(tmp)){
        cout << "Nice" << endl;
    }
    else{
        cout << "Oh no" << endl;
    }
    return 0;
}