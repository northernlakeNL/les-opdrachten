#include "iostream"
#include "vector"

using namespace std;

float add(vector<int> list, int size) {
    if (size <= 0){
        return 0;
    }
    if (size == 1) {
        return list[0];
    }
    else{
        return list[size-1] + add(list, size-1);
    }
}

void vijf_zes() {
    vector<int> random = {52, 39, 90, 7, 57, 43, 67, 30, 5, 66, 100, 90, 33, 18, 80}; // total = 777 / lengte: 15 / average = 51.8
    float total = add(random, random.size());
    float average = total/random.size();
    cout << average;
}