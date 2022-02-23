//
// Created by tomno on 19/02/2022.
//
#include "iostream"
#include "vector"
using namespace std;

int counter(const vector<int> & numbers, const int x){
    int counting = 0;
    for (int number : numbers){         // for loop die elk nummer in de lijst checkt
        if (number == x){
            counting++;          // counter om alle gevonden nummers te vinden
        }
    }
    return counting;
}

bool control(){
    vector<int> list = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1};
    int nul = counter(list, 0);
    int een = counter(list, 1);
    if (nul < 12) {             // check of er minder dan 12 nullen zijn
        if (een < nul) {        // check of een kleiner is dan nul
            return 0;       //  vervang voor "return 0" als het een int main functie is
        }
        else if (een > nul) {   // check of een groter is dan nul
            return true;       //  vervang voor "return 0" als het een int main functie is
        }
    }
    else{
        return false;           //  vervang voor "return 0" als het een int main functie is
    }
    return false;
}

void twee_tien() {
    bool c = control();
    if ( c == true){
        cout << "True";
    }
    else {
        cout << "False";
    }
}