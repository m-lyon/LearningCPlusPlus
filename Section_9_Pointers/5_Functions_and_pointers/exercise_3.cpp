#include <iostream>

using namespace std;

void fillArrayWithValues(int* arr, int size){
    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void printArrayValues(int* arr, int size){
    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

/*
int main(){

    int arr[3];

    fillArrayWithValues(arr, 3);
    printArrayValues(arr, 3);

    return 0;
}
*/