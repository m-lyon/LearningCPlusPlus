#include <iostream>
#include <stdio.h>

using namespace std;

int getNumberInput(){
    int arg;
    printf("Pleas enter number: ");
    scanf("%d", &arg);
    return arg;
}

void addition(){
    int arg1 = getNumberInput();
    int arg2 = getNumberInput();
    printf("%d + %d = %d\n", arg1, arg2, arg1+arg2);
}

void subtraction(){
    int arg1 = getNumberInput();
    int arg2 = getNumberInput();
    printf("%d - %d = %d\n", arg1, arg2, arg1-arg2);
}

void multiplication(){
    int arg1 = getNumberInput();
    int arg2 = getNumberInput();
    printf("%d * %d = %d\n", arg1, arg2, arg1*arg2);
}

void division(){
    int arg1 = getNumberInput();
    int arg2 = getNumberInput();
    printf("%d / %d = %d\n", arg1, arg2, arg1/arg2);
}

void exponentiation(){
    int arg1 = getNumberInput();
    int arg2 = getNumberInput();
    int ans = 1;
    for (int i = 1; i <= arg2; i++){
        ans *= arg1;
    }
    printf("%d^%d = %d\n", arg1, arg2, ans);
}

void chooseOperation(){
    char input;
    while (true){
        printf("Choose a mathematical operation: ");
        scanf(" %c", &input);
        switch (input){
            case '+':
                addition();
                break;
            case '-':
                subtraction();
                break;
            case '*':
                multiplication();
                break;
            case '/':
                division();
                break;
            case '^':
                exponentiation();
                break;
            default:
                printf("Incorrect symbol, try again\n");
                break;
        }
    }
}

int main(){

    chooseOperation();
    return 0;
}