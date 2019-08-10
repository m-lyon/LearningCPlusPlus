#include <iostream>
#include <stdio.h>

using namespace std; 

int main(){
    int n = 100;
    int num;
    printf("Enter an integer: ");
    scanf("%i", &num);
    printf("Your number is %d\n", num);
    int i = 1;

    for (int i = 1; i <= n; i++){
        printf("%d\n", num + i);
    }
    return 0;
}