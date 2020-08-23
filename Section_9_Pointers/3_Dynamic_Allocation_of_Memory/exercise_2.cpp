#include <iostream>

using namespace std;

int howMany(){
    int i;
    cout << "How many numbers in the array? ";
    cin >> i;
    return i;
}

int getNumber(int i){
    int n;
    cout << "Input number " << i+1 << ": ";
    cin >> n;
    return n;
}

int main(){
    int num = howMany();
    int* dynamicArray = new int[num];

    for (int i = 0; i < num; i++){
        *(dynamicArray+i) = getNumber(i);
    }

    for (int i = 0; i < num; i++){
        cout << "dynamicArray[" << i << "] = " << *(dynamicArray+i) << endl;
    }

    delete[] dynamicArray;

    return 0;
}