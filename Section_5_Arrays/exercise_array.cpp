#include <iostream>

using namespace std;

int main(){

    const int array_size = 4;
    double array[array_size];

    // Get user input
    for (int i = 0; i < array_size; i++){
        cout << "Please enter value " << (i+1) << ": ";
        cin >> array[i];
    }
    
    double sum = 0;
    // Generate sum
    for (int i = 0; i < array_size; i++){
        sum += array[i];
    }

    // Output
    cout << "Result = " << sum << endl;
    cout << "Address of first element = " << array << endl;
    cout << "Address of last element = " << &array[array_size-1] << endl;
    return 0;
}