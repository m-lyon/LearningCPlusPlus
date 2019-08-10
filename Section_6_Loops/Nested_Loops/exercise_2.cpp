#include <iostream>

using namespace std;

int main(){


    // Initialize variables
    int n_size = 3, m_size = 3;
    char array[m_size][n_size];
    char counter = '0';
    int x_pos, y_pos;

    for (int i = 0; i < m_size; i++){
        for (int j = 0; j < n_size; j++){
            array[i][j] = ++counter;
            cout.width(4);
            cout << array[i][j];
        }
        cout << endl;
    }

    while(true){
        // Grab user input
        cout << "Please enter co-ordinate of X" << endl;
        cout << "x: ";
        cin >> x_pos;
        cout << "y: ";
        cin >> y_pos;

        // Modify array
        if ((0 < x_pos && x_pos <= m_size) && (0 < y_pos && y_pos <= n_size)){
            array[x_pos-1][y_pos-1] = 'X';
        }
        else{
            cout << "Incorrect co-ordinates given, try again." << endl;
            continue;
        }
        // Output
        system("clear");
        for (int i = 0; i < m_size; i++){
            for (int j = 0; j < n_size; j++){
                cout.width(4);
                cout << array[i][j];
            }
            cout << endl;
        }
    }
    

    


    return 0;
}