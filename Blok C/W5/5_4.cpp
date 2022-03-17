#include "iostream"
using namespace std;

int fibonacci(int x){
    if ((x == 0) or (x == 1)){          // als x gelijk is aan 0 of 1
        return x;
    }
    else{
        return(fibonacci(x-1) + fibonacci(x-2));        // x -1 en x -2 samen voegen en returnen
    }
}
void vijf_vier(){
    int febo , f = 0;
    cout << "lengte van de lijst:";
    cin >> febo ;
    cout << "\nFibonacci: ";
    while (f <= febo){              // zolang f klein of gelijk is aan febo
        cout << fibonacci(f);    // print de return uitkomst
        if (f != febo){             // voorkomen dat er na de lijst nog een comma geplaatst wordt
            cout << ", ";
        }
        f++;                        // plus één f
    }
}