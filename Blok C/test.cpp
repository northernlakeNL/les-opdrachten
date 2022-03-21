#include "iostream"
#include "vector"
#include "string"

using namespace std;


struct line{
    string text;
    int n_spaces;
};

void countSpaces(vector<line> & lines){
    int count;
    char space = ' ';
    for (unsigned int x = 0; x < lines.size(); x++){
        count = 0;
        for(unsigned int y; y < lines[x].size(); y++){
            if (y == space) {
                count++;
            }
            if (y != space){
                lines[x].n_spaces = {count};
                break;
            }
        }
    }
}

void test(){
    vector<line> lines = {{"   oke bye", -1}, {" wild wild west ", -1}};
    countSpaces(lines);
    cout << "amount of spaces at the start of line0: " << lines[0].n_spaces << "\n";
    cout << "amount of spaces at the start of line1: " << lines[1].n_spaces << "\n";
}
