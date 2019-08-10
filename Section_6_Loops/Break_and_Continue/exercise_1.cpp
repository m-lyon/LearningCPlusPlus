#include <stdio.h>

using namespace std;

int main(){

    // Initialize variables
    int input;
    int last_sum = 0;

    // Grab user input
    printf("Please enter an integer: ");
    scanf("%d", &input);

    // Calculate even sum
    for (int i = 1; i <= input; i++){
        if (i % 2 != 0){
            continue;
        }
        printf("%d + %d = %d\n", last_sum, i, last_sum+i);
        last_sum += i;
    }

    return 0;
}