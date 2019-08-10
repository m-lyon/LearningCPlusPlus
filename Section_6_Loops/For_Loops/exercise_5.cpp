#include <stdio.h>

int main(){

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    for (int i = 0; i < input; i++){
        if ((i % 5 == 0) && (i != 0)){
            printf("\n");
        }
        printf("*");
    }
    printf("\n");
    return 0;
}