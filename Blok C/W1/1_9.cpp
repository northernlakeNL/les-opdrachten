//
// Created by tomno on 15/02/2022.
//
#include "iostream"
using namespace std;

void een_negen() {
    cout << endl;
    int max, spatie, i;
    cout << "Hoe Groot?";
    cin >> max;
    for (int i = max; i >= 1; --i) {
        for (int spatie = 0; spatie < max - i; ++spatie)
            cout << " ";
        for (int x = i; x <= i; ++x)
            cout << "*";
        for (int x = 0; x < i - 1; ++x)
            cout << "*";
        cout << endl;
    }
}