#include <iostream>
#include <string>
using namespace std;

int main(){
    int max;
    cout << "Hoe Groot? ";
    cin >> max;
    std::string stars = "    \n";
    char ch = '*';
    for ( int i = 0; i < max; ++i){
        if (i < max){
            stars.append(1, ch);
            std::cout << stars;
        }
    }
    max = max + 1;
    for ( int i = max - 1; i < max; i--){
        if (i > 0){
            stars.erase(i, ch);
            std::cout << stars;
        }
    }
    return 0;
}