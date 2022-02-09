#include<iostream>
using namespace std;

int main(){
    int max;
    cout << "Hoe groot? \n";
    cin >> max;
    cout << max;
    string star = "*";
    char str = "*";

    for ( int i = 0; i < max; ++i){
        if (max[i] < max){
            star + str;
            cout << star;
        }
    }
    return 0;
}