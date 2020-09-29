#include <iostream>
#include <string>
#include "exercise_1.h"
#include "exercise_2.h"
#include "exercise_3.h"

using namespace std;

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

/*
int main(){

    int t = 5;
    int* arr = createArray(t);

    fillArrayWithValues(arr, t);
    
    selectionSort(arr, t, "asc");

    printArrayValues(arr, t);

    return 0;
}
*/