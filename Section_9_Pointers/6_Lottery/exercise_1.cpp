#include <iostream>
#include "source.h"

using namespace std;

int main(){
    int sizeOfArray;
    string SortAlgo;
    string order;

    cout << "Please enter size of array: ";
    cin >> sizeOfArray;

    int* arr = createArray(sizeOfArray);

    cout << "Please enter the sorting algorithm (bubble/select): ";
    cin >> SortAlgo;

    cout << "Please enter a sorting order (asc/desc): ";
    cin >> order;

    if (SortAlgo == "bubble"){
        bubbleSort(arr, sizeOfArray, order);
    }
    else if (SortAlgo == "select"){
        selectionSort(arr, sizeOfArray, order);
    }
    else{
        cout << "Error: algorithm not recognised.";
        return 1;
    }

    cout << "Below is the sorted array" << endl;
    printArrayValues(arr, sizeOfArray);

    return 0;
}