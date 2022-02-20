//
// Created by tomno on 20/02/2022.
//
#include "iostream"
#include "vector"

using namespace std;

string sort_check(vector <int> list){
    for (int i = 0; i < list.size();){
        if (list[i] <= list[i+1]){
            ++i;
        }
        else if (list[i] > list[i+1]){
            return "de reeks is niet gesorteerd.";
        }
    }
    return "De reeks is gesorteerd.";
}

void twee_dertien(){
    vector <int> list;
    int number;
    do {
        cout << "Geef een getal:";
        cin >> number;
        list.insert(list.end(), number);
    }
    while (number > 0);
    string returned = sort_check(list);
    cout << returned;
}