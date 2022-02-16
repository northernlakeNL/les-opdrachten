#include <iostream>
using namespace std;
void een_vier() {
    int number = 65;
    cout << number << endl;
    while (number < 90) {
        if (number < 70) {
            number = 70;
            cout << number << endl;
        } else if (number < 80) {
            number++;
            cout << " + 1" << endl;
            cout << number << endl;
        }
        number += 3;
        cout << " + 3" << endl;
        cout << number << endl;
    }
}