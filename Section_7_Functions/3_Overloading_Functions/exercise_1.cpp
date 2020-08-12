#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int v1 = 5;
double v2 = 6.8;
string v3 = "poopy";

int variableType(int a){
    cout << "Variable is: " << a << endl;
    /*
    printf("variable is: %d", a);
    printf("variable is type int");
    */
    return 0;
}

int variableType(double a){
    printf("variable is: %f\n", a);
    printf("variable is type double\n");
    return 0;
}

int variableType(string a){
    cout << "Variable is: " << a << endl;
    //printf("variable is: %s", a.c_str());
    cout << "Variable is type string" << endl;
    return 0;
}

int main(){

    variableType(v1);
    variableType(v2);
    variableType(v3);
    return 0;
}