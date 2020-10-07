#include <iostream>

using namespace std;

int* createArray(int num){

    int* intArray = new int[num];

    srand(time(NULL));

    for (int i = 0; i < num; i++){
        intArray[i] = rand() % 1501;
    }

    return intArray;
}

void swapTwoValues(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

void printArrayValues(int* arr, int size){
    for (int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void bubbleSort(int* arr, int size, string order){

    for (int i = 0; i < size-1; i++){
        for (int x = 0; x < size-1-i; x++){
            if (order == "asc" && arr[x] > arr[x+1]){
                swapTwoValues(arr+x, arr+x+1);
            }
            else if (order == "desc" && arr[x] < arr[x+1]){
                swapTwoValues(arr+x, arr+x+1);
            }
        }
    }
}

void selectionSort(int* arr, int size, string order){

    for (int i = 0; i < size-1; i++){

        int xCurrent = i;

        for (int x = i+1; x < size; x++){
            if (order == "asc" && arr[x] < arr[xCurrent]){
                xCurrent = x;
            }
            else if (order == "desc" && arr[x] > arr[xCurrent]){
                xCurrent = x;
            }
        }
        if (xCurrent != i){
            swapTwoValues(arr+i, arr+xCurrent);
        }
    }
}