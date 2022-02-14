//
// Created by tomno on 14/02/2022.
//
#include <iostream>
#include <unistd.h>
#include "een_twaalf.h"
#include "1_7.h"
using namespace std;

int main(){
    string bestand;
    cout << "Welk bestand?  ";
    getline (cin, bestand);
    sleep(1);
    if (bestand == "12"){
        een_twaalf();}
    if (bestand == "7"){
        een_seuven();}
}
