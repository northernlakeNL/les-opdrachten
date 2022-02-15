//
// Created by tomno on 15/02/2022.
//
#include "iostream"
using namespace std;

void een_elf(){
    int max,i,x,y;
    cout << "Hoe Groot?" << endl;
    cin >> max;
    for (i = 1; i <= max; ++i)
    {
        for (x = 1; x <= i; ++x){
            cout << "*";
        }
        cout << endl;
    }
    for (i = max-1; i >= 1; --i){
        for(y = 1; y <= i; ++y){
            cout << "*";
        }
        cout << endl;
    }
}