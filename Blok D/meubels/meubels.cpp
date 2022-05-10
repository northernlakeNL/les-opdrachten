#include <ostream>
#include "meubels.h"
void stool::print() {
    print_legs();
    print_seats();
}
void stool::print_legs() {
    std::cout << "aantal poten:" << n_legs << std::endl;
}
void stool::print_seats() {
    std::cout << "aantal zittingen:" << n_seats << std::endl;
}

void table::print() {
    print_legs();
    print_length();
    print_width();
}
void table::print_legs() {
    std::cout << "aantal poten:" << n_legs << std::endl;
}
void table::print_length() {
    std::cout << "lengte:" << length << std::endl;
}
void table::print_width() {
    std::cout << "breedte:" << width << std::endl;
}

void furniture::print(){
    print_table();
    print_stool();
}
void furniture::print_table() {
    std::cout << "aantal tafels:" << table << std::endl;
}
void furniture::print_stool() {
    std::cout << "aatnal stoelen:" << stool << std::endl;
}