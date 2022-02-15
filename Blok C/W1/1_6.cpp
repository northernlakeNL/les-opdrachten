//
// Created by tomno on 15/02/2022.
//

#include "1_6.h"
#include "iostream"
using namespace std;

void een_zes(){
    char character;
    int cijfer;
    char HL;
    cout << "\n";
    cout << "Geef een Character:";
    cin >> character;
    cout << endl;
    HL = character + 32;
    cijfer = int(HL);
    cout << character << " + 32 = " << cijfer << endl;
    cout << character << " + 32 = "<< HL;
}