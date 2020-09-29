#include <iostream>

using namespace std;

void swapTwoValues(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

/*
int main(){
    int a = 3;
    int b = 5;

    swapTwoValues(&a, &b);
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;

    return 0;
}
*/