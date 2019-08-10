#include <iostream>

using namespace std;
/*
int main(){
    double age;
    cout << "What is your age?: ";
    cin >> age;
    string message = (age < 18) ? "You are not an adult": "You are an adult";
    cout << message << endl;
}
*/

int main(){
    int score;
    cout << "What was your exam score?: ";
    cin >> score;
    string response = ((score >= 0) && (score <= 100)) 
        ? (score > 50) 
            ? "You passed"
            : "You failed"
        : "no";
    cout << response << endl;
}