#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    // Initialize variables
    const int i = 3;
    const int j = 3;
    int array[i][j];

    // Generate random numbers in array
    for (int n = 0; n < i; n++){
        for (int m = 0; m < j; m++){
            array[n][m] = rand() % 10 + 1;
        }
    }
    printf("Something\n");
    // Get user input
    int x =0, y = 0;
    while (x < 1 || x > 3){
        cout << "x co-ordinate: ";
        cin >> x;
        if (x < 1 || x > 3){
            cout << "x must be between 1 and 3" << endl;
        }
    }

    // Output array
    while (y < 1 || y > 3){
        cout << "y co-ordinate: ";
        cin >> y;
        if (y < 1 || y > 3){
            cout << "y must be between 1 and 3" << endl;
        }
    }

    cout << "Value of array at that point: " << array[x-1][y-1] << endl;

    // Output full array
    for (int m = 0; m < i; m++){
        for (int n = 0; n < i; n++){
            cout << "[" << array[n][m] << "]";
        }
        cout << endl;
    }

    return 0;
}