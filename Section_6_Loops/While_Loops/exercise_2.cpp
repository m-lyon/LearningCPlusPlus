#include <stdio.h>

int main(){
    // Initialize variables
    int pin_number;
    int pin_check;
    int tries = 0;

    // Grab input from user
    printf("Enter your pin number: ");
    scanf("%d", &pin_number);

    // Pin check
    printf("Please enter your pin number again: ");
    while(pin_number != pin_check && tries < 5){
        tries++;
        scanf("%d", &pin_check);
        if (pin_number != pin_check){
            printf("Incorrect pin, %d tries left: ", (5-tries));
        }
        else {
            printf("Pin correct!\n");
        }
    }

    if (tries == 5){
        printf("\nYou have entered a wrong pin 5 times!\n");
        return 1;
    }

    return 0;

}