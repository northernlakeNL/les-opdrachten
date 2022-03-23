#include "iostream"
#include "vector"
#include "string"

using namespace std;

struct compas{
    string direction;
    int amount;
};

void final(vector<compas> map) {
    if (map[0].amount > map[1].amount) {
        int north = map[0].amount - map[1].amount;
        cout << "north" <<  north;
    }
    if (map[1].amount > map[0].amount) {
        int south = map[1].amount - map[0].amount;
        cout << "south: " << south;
    }
    if (map[2].amount > map[3].amount) {
        int west = map[2].amount - map[3].amount;
        cout << "west:" <<  west;
    }
    if (map[3].amount > map[2].amount) {
        int east = map[3].amount - map[2].amount;
        cout << "east:" << east;
    }
}

vector<compas> richting(vector<string> map, int size, vector<compas> map2){
    if (size >= 0){
        if (map[size] == "north") {
            map2[0].amount++;
            return richting(map, size - 1, map2);
        }
        else if (map[size] == "south") {
            map2[1].amount++;
            return richting(map, size - 1, map2);
        }
        else if (map[size] == "west") {
            map2[2].amount++;
            return richting(map, size - 1, map2);
        }
        else if (map[size] == "east") {
            map2[3].amount++;
            return richting(map, size - 1, map2);
        }
    }
    return map2;
}


void vijf_acht(){
    vector<string> map = {"west", "west", "south", "south", "south", "west",
                          "west", "west", "north", "north", "north", "north", "north", "west",
                          "west", "west", "west", "west", "west", "south", "south", "south",
                          "south", "east", "east", "east", "west", "west", "south", "south",
                          "south", "west", "west", "north", "north", "north", "north", "north",
                          "north", "west", "west", "west", "west", "west", "west", "south",
                          "south", "south", "south", "east", "east", "east", "north", "north",
                          "north", "north", "north", "north", "north", "north", "north",
                          "north", "north", "east", "east", "east", "east", "east", "east",
                          "east", "east", "east", "south", "south", "south", "south", "south",
                          "west", "west", "west", "east", "east", "east", "east", "east",
                          "east", "east", "east", "north", "west", "north", "north", "north",
                          "north", "north", "north", "north", "north", "north", "north"};
    vector<compas> map2 = {{"north", 0},
                           {"south", 0},
                           {"west",  0},
                           {"east",  0}};
    map2 = richting(map, map.size() -1, map2);
    final(map2);
}
