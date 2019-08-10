#include <iostream>

using namespace std;

int main(){

    int n_size = 3, m_size = 3;
    int array[m_size][n_size];
    int counter = 0;

    for (int i = 0; i < m_size; i++){
        for (int j = 0; j < n_size; j++){
            array[i][j] = ++counter;
            cout.width(4);
            cout << array[i][j];
        }
        cout << endl;
    }

    return 0;
}