#include<iostream>
using namespace std;
void een_seuven() {
    string zin;
    cout << "\n";
    cout << "Zin: ";
    getline(cin, zin);
    
    size_t lengte = zin.length();
    for (size_t i = 0; i < lengte; i++)
        if (zin[i] >= 'a' && zin[i] <= 'z')
            zin[i] = zin[i] - 32;

    for (size_t i = 0; i < lengte; i++)
        if (zin[i] == 'E') {
            zin[i] = '3';}
        else if (zin[i] == 'L') {
            zin[i] = '1';}
        else if (zin[i] == 'T') {
            zin[i] = '7';}
        else if (zin[i] == 'O') {
            zin[i] = '0';}
    cout << zin;
}