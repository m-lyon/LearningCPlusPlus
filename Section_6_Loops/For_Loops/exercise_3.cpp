#include <stdio.h>

int main(){

    float num, ans;
    int power;

    // Grab user data
    printf("Input number: ");
    scanf("%f", &num);
    printf("Input power: ");
    scanf("%d", &power);
    // Calculate answer
    ans = num;
    for (int i = 1; i < power; i++){
        ans *= num;
    }
    // Print answer
    printf("%.1f^%d is equal to %.1f\n",num,power,ans);
    return 0;
}