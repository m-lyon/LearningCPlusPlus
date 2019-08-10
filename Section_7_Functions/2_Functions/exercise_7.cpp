#include <iostream>
#include <algorithm>
#include <stdio.h>

bool wayToSort(double i, double j) { return i > j; }

void minValue(double array[], int lastElement){
    std::sort(&array[0], &array[lastElement]);
    printf("The minimum value is %lf\n", array[0]);
}

void maxValue(double array[], int lastElement){
    std::sort(&array[0], &array[lastElement], wayToSort);
    printf("The maximum value is %lf\n", array[0]);
}

int main(){
    int arrLength = 5;
    double array[arrLength];
    for (int i = 0; i < arrLength; i++){
        printf("Please enter number %d: ", i+1);
        scanf(" %lf", &array[i]);
    }

    //system("clear");
    printf("\n\n\n");
    minValue(array, arrLength);
    maxValue(array, arrLength);
    
    return 0;
}