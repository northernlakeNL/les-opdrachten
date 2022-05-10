#ifndef MEUBELS_H
#define MEUBELS_H

#include <iostream>

class stool {
private:
    int n_legs;
    int n_seats;
    void print_legs();
    void print_seats();
public:
    stool(const int& n_legs, const int& n_seats) :
        n_legs(n_legs), n_seats(n_seats) {
        }
    void print();
};

class table{
private:
    int n_legs;
    int length;
    int width;
    void print_legs();
    void print_length();
    void print_width();
public:
    table(const int& n_legs, const int& length, const int& width):
    n_legs(n_legs), length(length), width(width){
    }
    void print();
};

class furniture{

};

#endif // MEUBELS_H
