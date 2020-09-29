#include <iostream>
#include "exercise_1.h"

using namespace std;

int* createArray(int num){
    int* intArray = new int[num];
    return intArray;
}

/*
int main(){
    int* arr = createArray(3);
    arr[1] = 1;
    cout << "arr[1] is " << arr[1] << endl;
    delete[] arr;

    return 0;
}
*/

