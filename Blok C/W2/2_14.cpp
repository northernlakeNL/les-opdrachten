//
// Created by tomno on 20/02/2022.
//
#include "iostream"
#include "vector"

using namespace std;

string check(vector <int> list){
    for (int i = 0; i < list.size();){
        if (list[i] <= list[i+1]){          // checken of list i kleiner is dan de volgende
            ++i;
        }
        else if (list[i] > list[i+1]){      // als i groter is dan de volgende is de lijst niet gesorteerd
            return "de reeks is niet gesorteerd. \n";
        }
    }
    return "De reeks is gesorteerd. \n";
}

vector<int> numbers() {
    vector<int> numbers = {};       // lijst aanmaken
    float number;
    do {                                    // doen zolang number 0 of hoger is
        cout << "Geef een getal:";
        cin >> number;
        numbers.insert(numbers.end(), number); // achter aan de lijst toevoegen
    } while (number >= 0);                  // nul of hoger checken
    numbers.pop_back();
    numbers.size()-1;           // het laatste getal eraf halen zodat er alleen positieve getallen staan
    return numbers;
}

int adding(vector<int> list){
    float total = list[0];
    for (int i = 1; i < list.size(); ++i){      // totaal optellen
        total = total + list[i];
    }
    return total;
}

int min(vector<int> list){
    int x = list[0];             // x het begin getal geven
    for (int i = 0; i < list.size(); ++i){
        if (list[i] < x){                       // checken of getal in lijst kleiner is dan x
            x = list[i];
        }
        if (i == list.size()){              // einde bereiken
            return x;
        }
    }
    return x;
}

void twee_veertien() {
    vector<int> list = numbers();
    int total = adding(list);
    float average = total / list.size();            // gemiddelde van de lijst uiterekenen
    int amount = list.size();
    int minimum =  min(list);
    string returned = check(list);
    cout << returned;
    cout << "de gemiddelde waarde is: " << average << endl;
    cout << "de minimum waarde is: " << minimum << endl;
    cout << "de reeks bevat: " << amount << " getallen" << endl;
}

