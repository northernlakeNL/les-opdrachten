#include <iostream>
#include <string>
using namespace std;

int main(){
    int max;
    cout << "How Big? \n";
    cin >> max;
    std::string stars = "\n*";
    char ch = '*';
    std::cout << stars;
    for ( int i = 0; i < max; ++i){
        if (i < max){
            stars.append(1, ch);
            std::cout << stars;
        }
    }
    max = max + 2;
    for ( int i = max - 1; i < max; i--){
        if (i > 0){
            stars.erase(i, ch);
            std::cout << stars;
        }
    }
    return 0;
}