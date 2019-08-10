#include <stdio.h>

int main(){
    int input;
    int ans = 1;
    printf("Enter number: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++){
        ans *= i;
        printf("%d! = %d\n", i, ans);
    }

    return 0;
}