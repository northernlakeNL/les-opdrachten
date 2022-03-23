#include "iostream"
#include "string"
#include "bitset"
using namespace std;


uint8_t shove(int n, uint8_t ch){
    if (n < 0){         // naar rechts schuiven
//        ch
    }
    else if (n > 0){    // naar links schuiven

    }
    else{               // niks doen
        return ch;
    }
}


void vier_zes(){
    ch = bitset<8>(10110001);
//    uint8_t ch = 10111000;
    int n = 3;
//    int n = -4;
    cout << shove(n, ch);
}