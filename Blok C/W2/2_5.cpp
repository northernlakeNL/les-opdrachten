//
// Created by tomno on 14/02/2022.
//
#include "iostream"
#include "vector"
using namespace std;

int count(const vector<int> & numbers, const int x){
    int counter = 0;
    for (int number : numbers){         // for loop die elk nummer in de lijst checkt
        if (number == x){
                counter++;          // counter om alle gevonden nummers te vinden
        }
    }
    return counter;
}

void twee_vijf(){
    vector<int> n = {37,4,9,4,9,37,3,5,0,4,1};
    int number_of_fours = count(n,4);
    cout << "The numbers of fours are: " << number_of_fours << endl;
}