#include <iostream>

#include "exercise_1.h"
#include "exercise_2.h"
#include "exercise_3.h"

using namespace std;

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

/*
int main(){

    int t = 5;
    int* arr = createArray(t);

    fillArrayWithValues(arr, t);
    
    bubbleSort(arr, t, "asc");

    printArrayValues(arr, t);

    return 0;
}
*/