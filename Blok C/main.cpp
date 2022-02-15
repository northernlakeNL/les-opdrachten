//
// Created by tomno on 14/02/2022.
//
#include <iostream>
#include <unistd.h>
#include "W1/een_twaalf.h"
#include "W1/1_7.h"
#include "W1/1_6.h"
#include "W1/1_8.h"
using namespace std;

int main(){
    string bestand;
    cout << "Welk bestand?  ";
    getline (cin, bestand);
    sleep(1);
    if (bestand == "6"){
        een_zes();}
    if (bestand == "7"){
        een_seuven();}
    if (bestand == "8"){
        een_acht();}
//    if (bestand == "9"){
//        een_negen();}
    if (bestand == "12"){
        een_twaalf();}
}
