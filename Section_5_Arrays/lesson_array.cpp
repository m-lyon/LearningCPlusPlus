#include <iostream>

using namespace std;

int main(){

    int n;
    // Declare array
    int array[5];
    // Shouldn't get size of array after compilation, eg below is bad practice:
    cout << "Array size: ";
    cin >> n;
    int array_two[n];

    array_two[1] = 60;
    cout << "array_two[1] = " << array_two[1] << endl;

    if (array == &array[0]){
        cout << "They're equal" << endl;
    }

    return 0;
}