#include <iostream>
using namespace std;

void een_twaalf(){
    int max, spatie, k, i, x;
    cout << "Grootte van de piramide:";
    cin >> max; 
    for (i = 2; i <= max; ++i, k =0)  // i waarde 1 geven / als i kleiner of gelijk is aan max / i+1 / k waarde 0 geven
    {
        cout << " ";
        for (spatie = 1; spatie <= max-i; ++spatie){    // spatie waarde 1 geven / checken of spatie kleiner is dan max-1 / spatie + 1
            cout << " ";
            }

        while(k != i-1){            // zolang k niet gelijk is aan i-1
            cout << "*";
            ++k;
            }

        cout << endl;       // volgende regel
        }
    for (i = max; i >= 1; --i)      // i gelijk aan max maken / zolang i groter is dan 1 / i-1
    {
        for (spatie = 0; spatie < max-i; ++spatie) // spatie zetten zolang spatie kleiner is dan max-i
            cout << " ";

        for (x = i; x <= i; ++x)    // x gelijk maken aan i om de maximale waarde te printen
            cout << "*";

        for (x = 0; x<i-1; ++x)     // de overige sterren plaatsen die nodig zijn
            cout << "*";
        cout << endl;       // volgende regel
    }
}
