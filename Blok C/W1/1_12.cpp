#include <iostream>
using namespace std;

void een_twaalf(){
    int max, spatie, k, i, x;
    cout << "Hoe groot? ";
    cin >> max;
    for (i = 1; i <= max; ++i, k = 0) {
        cout << " ";
        for (spatie = 1; spatie <= max - i; ++spatie) {
            cout << " ";
            }
        while (k != i - 1) {
            cout << "*";
            ++k;
        }
        cout << endl;
    }
    for (i = max; i >= 1; --i){
        for (spatie = 0; spatie < max-i; ++spatie)
            cout << " ";
        for (x = i; x <= i; ++x)
            cout << "*";
        for (x = 0; x<i-1; ++x)
            cout << "*";
        cout << endl;
    }
}
