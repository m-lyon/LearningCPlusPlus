#include <stdio.h>

using namespace std;

int main(){

    // Initialize variables
    int sum = 0;
    int i = 1;
    char res;

    // Do the loop
    while(true){
        // Get user input
        printf("The current sum is: %d\n", sum);
        printf("Do you want to add %d? (Y/N): ", i);
        scanf(" %c", &res);
        if (res == 'Y' || res == 'y'){
            sum += i++;
        }
        else if ( res == 'N' || res == 'n'){
            i++;
            continue;
        }
        else {
            break;
        }
    }

    return 0;
}