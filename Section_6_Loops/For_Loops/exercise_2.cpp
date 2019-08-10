#include <stdio.h>

int main(){
    int length = 26;
    char lower = 'a';
    char upper = 'A';
    for (int i = 0; i < length; i++){
        printf("%c %c ", lower + i, upper + i);
    }
    printf("\n");
    return 0;
}