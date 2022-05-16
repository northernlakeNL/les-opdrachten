#ifndef MEUBELS_H
#define MEUBELS_H

#include <iostream>

class stool{
private:
    int N_legs;
    int N_seats;
public:
    void setLegs(int n_legs){
        N_legs = n_legs;
    }
    int getLegs(){
        return N_legs;
    }
    void setseats(int n_seats){
        N_seats = n_seats;
    }
    int getSeats(){
        return N_seats;
    }
    stool(int n_legs, int n_seats){
        N_legs = n_legs;
        N_seats = n_seats;
    }
};

class table{
private:
    int N_Legs;
    int Length;
    int Width;
public:
    void setLegs(int n_legs){
        N_Legs = n_legs;
    }
    int getLegs(){
        return N_Legs;
    }
    void setLength(int length){
        Length = length;
    }
    int getLength(){
        return Length;
    }
    void setWidth(int width){
        Width = width;
    }
    int getWidth(){
        return Width;
    }
    table(int n_legs, int length, int width){
        N_Legs = n_legs;
        Length = length;
        Width = width;
    }
};

class furniture:public stool, public table{
private:
    int Amount_seats;
    int Amount_tables;
public:
    void setSeats(int amount_seats){
        Amount_seats = amount_seats;
    }
    int getseats(){
        return Amount_seats;
    }
    void setTable(int amount_tables){
        Amount_tables = amount_tables;
    }
    int getTable(){
        return Amount_tables;
    }
    furniture(int amount_seats, int amount_tables, int N_legs, int N_Seats, int N_Legs, int Length, int Width)
        : table(N_Legs,Length,Width), stool(N_legs, N_Seats)
    {
        Amount_seats = amount_seats;
        Amount_tables = amount_tables;
    }
    void MakeMoreHipster(){
        stool::setLegs(stool::getLegs()-1);
        table::setLegs((table::getLegs())+(Amount_seats*1));
    }
};

#endif // MEUBELS_H
