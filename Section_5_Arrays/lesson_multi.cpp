#include <iostream>

using namespace std;

int main(){

    // array size must be const i guess
    const int i = 5;
    const int j = 5;
    // 2-d array, assign all values as 0
    int multi_array[i][j] = {0};

    // extends to n-dimensions
    // stored in memory each dimension sequentially.
    cout << "multi_array[2][2]: " << multi_array[2][2] << endl;
    return 0;
}