#include "iostream"
#include "vector"
#include "string"

using namespace std;



vector<string> richting(vector<string> map, int size){
}


void vijf_acht(){
    vector<string> map = {  "west", "west", "south", "south", "south", "west",
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
    vector<string> map2 = richting(map, map.size());
    for (int x = 0; x < map2.size(); x++){
        cout << map2[x];
    }
}