#include "winners.h"
#include "vector"
#include "iostream"

using namespace std;
float nearestScore2Average(const vector<float>& scores) {
    vector<float> diff ={};
    float total = 0;
    float near;
    for (int x = 0; x<scores.size(); ++x){
        total = total + scores[x];
    }
    float av = total / scores.size();
    for (int s = 0; s < scores.size(); ++s){
        diff.push_back(scores[s] - av);
    }
    for (int y = 0; y < diff.size(); ++y) {
        if (diff[y] < 0) {
            diff[y] = diff[y] * (-1);
        }
    }
    near = scores[0];
    for (int i = 0; i < diff.size(); ++i){
        if (diff[i] < diff[i+1]){
            near = scores[i];
        }
    }
    return near;
}
float furthestScoreFromWinner(const vector<float>& scores){
    vector<float> diff ={};
    float total = 0;
    float far=0;
    for (int x = 0; x<scores.size(); ++x){
        total = total + scores[x];
    }
    float av = total / scores.size();
    for (int s = 0; s < scores.size(); ++s){
        diff.push_back(scores[s] - av);
    }
    for (int y = 0; y < diff.size(); ++y) {
        if (diff[y] < 0) {
            diff[y] = diff[y] * (-1);
        }
    }
    for (int i = 0; i < diff.size(); ++i){;
        if (diff[i] > far){
            far = scores[i];
        }
    }
    return far;
}