#include <iostream>
#include "meubels.h"
#include "meubelsmain.h"

void makemorehipster(){
    std::cout << std::endl << "hipster" << std::endl;
    stoel.n_legs(stoel.n_legs - 1);

}

void mainmeubels(){
    stool stoel = {4, 1};
    table tafel = {4, 200, 50};
    furniture aantal = {1,4};
    tafel.print();
    stoel.print();
    aantal.print();
    makemorehipster();
}

