#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int lengthOfWord;
    
    // Get length
    printf("Enter the length of the word: ");
    scanf("%d", &lengthOfWord);
    char word[lengthOfWord];
    string suffix;
    // Get letters
    for (int i = 0; i < lengthOfWord; i++){
        switch (i+1){
            case 1:
                suffix = "st";
                break;
            case 2:
                suffix = "nd";
                break;
            case 3:
                suffix = "rd";
                break;
            default:
                suffix = "th";
                break;
        }
        printf("What is the %d%s letter: ", i+1, suffix.c_str());
        cin >> word[i];
    }
    

    /*// Print word
    for (int i = 0; i < lengthOfWord; i++){
        printf("%c",word[i]);
    }
    printf("\n");
    */
   // Print number of combinations
    int numberOfCombinations = 1;
    for (int i = 0; i < lengthOfWord; i++){
       if (word[i] == '0'){
           numberOfCombinations *= 26;
       }
       else {
           printf("Valid character: %c\n", word[i]);
       }
   }
    printf("Number of combinations: %d\n", numberOfCombinations);
    return 0;
}