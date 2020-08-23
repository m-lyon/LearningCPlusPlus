#include <iostream>

using namespace std;

int main(){
    int array[5];
    int *p = array;
    *p = 1;
    *(++p) = 5;
    *(++p) = 10;
    *(++p) = 15;
    *(++p) = 20;

    for (int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}