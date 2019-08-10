#include <stdio.h>

int main(){
    // Initialize variables
    int pin_number;
    int pin_check;

    // Grab input from user
    printf("Enter your pin number: ");
    scanf("%d", &pin_number);

    // Pin check
    printf("Please enter your pin number again: ");
    while(pin_number != pin_check){
        scanf("%d", &pin_check);
        if (pin_number != pin_check){
            printf("Incorrect pin, try again: ");
        }
        else {
            printf("Pin correct!\n");
        }
    }
    

}