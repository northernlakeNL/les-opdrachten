#include <iostream>
using namespace std;

int main(){
    int max, spatie, k, i;
    cout << "Grootte van de piramide:   ";
    cin >> max; 
    for (int i = 1, k = 0; i <= max; ++i, k =0)
    {
        for (spatie = 1; spatie <= max-i; ++spatie){
            cout << " ";
            }
        while(k != i-1){
            cout << "*";
            ++k;
            }
        cout << endl;
        }
    for (int i = max; i >= 1; --i)
    {
        for (int spatie = 0; spatie < max-i; ++spatie)
            cout << " ";

        for (int x = i; x <= i-1; ++x)
            cout << "*";

        for (int x = 0; x<i-1; ++x)
            cout << "*";
        cout << endl;
    }
    return 0;
    }

//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *
