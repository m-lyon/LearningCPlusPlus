#include <stdio.h>

int main(){
    // Initialize variables
    const int a_size = 5;
    int array[a_size];

    // Input
    printf("Enter %d integer numbers below\n", a_size);
    for (int i = 0; i < a_size; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    // Output
    for (int i = 0; i < a_size; i++){
        printf("The number %d is %s\n", array[i], (array[i] % 2 == 0) ? "even": "odd");
    }
    return 0;
}