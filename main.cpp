//algemeen
#include <iostream>
#include <unistd.h>
//week 1
#include "Blok C/W1/1_4.h"
#include "Blok C/W1/1_6.h"
#include "Blok C/W1/1_7.h"
#include "Blok C/W1/1_8.h"
#include "Blok C/W1/1_9.h"
#include "Blok C/W1/1_10.h"
#include "Blok C/W1/1_11.h"
#include "Blok C/W1/1_12.h"
//week 2
#include "Blok C/W2/2_5.h"
#include "Blok C/W2/2_10.h"
#include "Blok C/W2/2_12.h"
#include "Blok C/W2/2_13.h"
#include "Blok C/W2/2_14.h"
//week 3
#include "Blok C/W3/3_3.h"
#include "Blok C/W3/3_6.h"
#include "Blok C/W3/3_12.h"
//week 4
#include "Blok C/W4/4_2.h"
#include "Blok C/W4/4_5.h"
#include "Blok C/W4/4_6.h"
//week 5
#include "Blok C/W5/5_4.h"
#include "Blok C/W5/5_6.h"
#include "Blok C/W5/5_8.h"
//test
#include "Blok C/test.h"
//week 1
#include "Blok D/Book/mainbook.h"
#include "C:\Users\tomno\Documenten\GitHub\les-opdrachten\Blok D\meubels\meubelsmain.h"
using namespace std;

int main() {
    string blok, bestand, week;
    cout << "welk blok?";
    getline(cin, blok);
    sleep(1);
    if (blok == "c"){

        cout << "welke week?";
        getline(cin, week);
        sleep(1);
        // week 1
        if (week == "1") {
            cout << "Welk bestand van week 1?";
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
        //week 2
        if (week == "2") {
            cout << "Welk bestand van week 2?";
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
            if (bestand == "13"){
                twee_dertien();
            }
            if (bestand == "14"){
                twee_veertien();
            }
        }
        //week 3
        if (week == "3") {
            cout << "Welk bestand van week 3?";
            getline(cin, bestand);
            if (bestand == "3") {
                drie_drie();
            }
            if (bestand == "6") {
                drie_zes();
            }
            if (bestand == "12") {
                drie_twaalf();
            }
        }
        //week 4
        if (week == "4") {
            cout << "Welk bestand van week 4?";
            getline(cin, bestand);
            if (bestand == "2") {
                vier_twee();
            }
            if (bestand == "5"){
                vier_vijf();
            }
            if (bestand == "6"){
    //            vier_zes();
            }
        }
        //week 5
        if (week == "5"){
            cout << "welk bestand van week 5?";
            getline(cin, bestand);
            if (bestand == "4"){
                vijf_vier();
            }
            if (bestand == "6"){
                vijf_zes();
            }
            if (bestand == "8"){
                vijf_acht();
            }
        }
        if (week == "0"){
            test();
        }
    }
    if (blok == "d"){
        cout << "welke week?";
        getline(cin, week);
        sleep(1);
        // week 1
        if (week == "1") {
            cout << "Welk bestand van week 1?";
            getline(cin, bestand);
            cout << endl;
            if (bestand == "book") {
                bookmain();
            }
            if (bestand == "meubels"){
                mainmeubels();
            }
            if (bestand == "test"){

            }
        }
    }
    return 0;
}


