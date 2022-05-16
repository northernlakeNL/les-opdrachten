#include <iostream>
#include "meubels.h"
#include "meubelsmain.h"

void mainmeubels(){
    furniture F = furniture(4,1,4,1,4,200,100); //amount_seats, amount_tables, N_legs, N_Seats, N_Legs, Length, Width)
    std::cout << "Amount of stools are: " << F.getseats() << std::endl;
    std::cout << "Amount of tables are: " << F.getTable() << std::endl;
    std::cout << "amount of stool legs are: " << F.stool::getLegs() << std::endl;
    std::cout << "amount of table legs are: " << F.table::getLegs() << std::endl;
    F.MakeMoreHipster();
    std::cout << "Amount of stools are: " << F.getseats() << std::endl;
    std::cout << "Amount of tables are: " << F.getTable() << std::endl;
    std::cout << "New amount of stool legs are: " << F.stool::getLegs() << std::endl;
    std::cout << "New amount of table legs are: " << F.table::getLegs() << std::endl;
}

