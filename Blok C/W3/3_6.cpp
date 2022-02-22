//
// Created by tomno on 20/02/2022.
//
#include "iostream"
#include "vector"

using namespace std;

float average_list(vector<int> list){           // Het gemiddelde uitrekenen van de een lijst
    float total = list[0];
    for (int x = 1; x < list.size(); ++x){
        total = total + list[x];            // alles bij elkaar optellen
    }
    float av = total/(0+list.size());       // delen door de lengte om het gemiddelde te krijgen
    return av;
    return 0;
}

float average(vector<vector<int>> list){
    vector<int> sum = {};
    for (int x = 0; x < list.size(); ++x){      // lijsten individualiseren
         int av = average_list(list[x]);
         sum.insert(sum.end(), av);
    }
    int total_av = average_list(sum); // het gemiddelde van alle lijsten optellen
    return total_av;
}


void drie_zes(){
    vector<vector<int>> random = {  {7, 82, 52, 96, 65, 33, 16, 23,18, 3, 6},           // willekeurig gekozen nummers
                                    {14, 63, 67, 29, 85, 51, 6, 5, 89, 45, 1},
                                    {34, 83, 80, 97, 36, 45, 20, 13, 30, 68, 75},
                                    {22, 7, 4, 61, -18, 58, -52, -56,-36, -93, 62},
                                    {-9, -76, -54, -7, 15, -1, 69, -78, -19, -35, -75}};
    cout << average(random);
}