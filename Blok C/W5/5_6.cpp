#include "iostream"
#include "vector"

using namespace std;

float add(vector<int> list, int size, float total) {
    if (size <= 0){
        float average = total/list.size();
        return average;
    }
    else{
        total = total + list[size-1];
        return add(list, size-1, total);
    }
}

void vijf_zes() {
    vector<int> random = {52, 39, 90, 7, 57, 43, 67, 30, 5, 66, 100, 90, 33, 18, 80}; // total = 777 / average = 51.8
    float average = add(random, random.size(), 0);
    cout << average;
}