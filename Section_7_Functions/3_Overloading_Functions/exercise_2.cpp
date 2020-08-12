#include <stdio.h>
#include <iostream>

using namespace std;

int howMany(){
    int num = 0;
    printf("How many numbers should be added together?\n");
    while(num > 5 || num < 2){
        printf("Pick between two and five numbers: ");
        scanf(" %d", &num);
    }
    return num;
}

void addition(double a, double b){
    double c = a + b;
    cout << a << " + " << b << " = " << c << endl;
}

void addition(double a, double b, double c){
    double d = a + b + c;
    cout << a << " + " << b << " + " << c << " = " << d << endl;
}

void addition(double a, double b, double c, double d){
    double e = a + b + c + d;
    cout << a << " + " << b << " + " << c << " + " << d << " = " << e << endl;
}

void addition(double a, double b, double c, double d, double e){
    double f = a + b + c + d + e;
    cout << a << " + " << b << " + " << c << " + " << d <<  " + " << e << " = " << f << endl;
}

int main(){
    int num = howMany();
    double vals[5];

    for (int i = 0; i < num; i++)
    {
        cout << "Input " << i+1 << " value: ";
        cin >> vals[i];
    }

    switch(num){
        case 2:
            addition(vals[0], vals[1]);
            break;
        case 3:
            addition(vals[0], vals[1], vals[2]);
            break;
        case 4:
            addition(vals[0], vals[1], vals[2], vals[3]);
            break;
        case 5:
            addition(vals[0], vals[1], vals[2], vals[3], vals[4]);
            break;
    }
    return 0;
}