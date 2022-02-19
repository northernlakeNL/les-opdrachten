//algemeen
#include <iostream>
#include <unistd.h>
//week 1
#include "W1/1_4.h"
#include "W1/1_6.h"
#include "W1/1_7.h"
#include "W1/1_8.h"
#include "W1/1_9.h"
#include "W1/1_10.h"
#include "W1/1_11.h"
#include "W1/1_12.h"
//week 2
#include "W2/2_5.h"
#include "W2/2_10.h"
#include "W2/2_12.h"
using namespace std;

int main() {
    string bestand, week;
    cout << "welke week?";
    getline(cin, week);
    cout << endl;
    sleep(1);
    if (week == "1") {
        cout << "Welk bestand van week 1?  ";
        cout << endl;
        getline(cin, bestand);
        if (bestand == "4") {
            een_vier();
        }
        if (bestand == "6") {
            een_zes();
        }
        if (bestand == "7") {
            een_seuven();
        }
        if (bestand == "8") {
            een_acht();
        }
        if (bestand == "9") {
            een_negen();
        }
        if (bestand == "10") {
            een_tien();
        }
        if (bestand == "11") {
            een_elf();
        }
        if (bestand == "12") {
            een_twaalf();
        }
    }
    if (week == "2") {
        cout << "Welk bestand van week 2?  ";
        cout << endl;
        getline(cin, bestand);
        if (bestand == "5"){
            twee_vijf();
        }
        if (bestand == "10"){
            twee_tien();
        }
        if (bestand == "12"){
            twee_twaalf();
        }
    }
    return 0;
}

