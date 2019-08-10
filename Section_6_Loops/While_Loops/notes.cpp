#include <iostream>
using namespace std;

int main(){

    // why and for loop check condition at beginnning
    
    int i = 10;
    /*
    while(i-- > 0){
        cout << i << endl;
    }
    */
   
   // do loop checks condition afterwards
    do{
        cout << "some code";
    } while (i > 0);
    
}