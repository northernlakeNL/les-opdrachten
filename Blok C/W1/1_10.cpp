//
// Created by tomno on 15/02/2022.
//

#include "iostream"
using namespace std;

void een_tien(){
    int max, spatie, k, i;
    cout << "Hoe Groot?" << endl;
    cin >> max;
    for (i = 1; i <= max; ++i){
        for (spatie = 1; spatie <= max+1-i; ++ spatie){
            cout << "*";}
        cout << endl;
    }
}
