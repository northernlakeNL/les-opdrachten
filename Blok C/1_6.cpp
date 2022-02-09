#include <iostream>
using namespace std;

int main(){
    char letter;

    cout << "Geef een Character: ";
    cin >> letter;
    int som = letter + 32;
    cout << letter << " + 32 = "<< som << "\n";
    char L = letter + 32;
    cout << letter << " + 32 = " << L;

    return 0;
}


