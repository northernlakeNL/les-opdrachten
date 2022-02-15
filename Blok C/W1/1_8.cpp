//
// Created by tomno on 15/02/2022.
//
#include "iostream"

using namespace std;

void een_acht() {
    int size;
    cout << "Hoe groot?";
    cin >> size;
    for (int i = 0; i <= size; ++i) {
        if (i != size) {
            for (int i = 0; i <= size; ++i) {cout << "*";
            }
        if (size) {
            cout << endl;
            }
        }
    }
}