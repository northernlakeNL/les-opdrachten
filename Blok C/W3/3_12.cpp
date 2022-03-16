#include "iostream"
#include "vector"
using namespace std;

void transpose(vector<vector<int>> & matrix){
    int temp = 0;
    for (int x = 0; x < matrix.size()-1; ++x) {
        for (int y = 1; y < matrix[x].size(); ++y) {
            temp = matrix[x][y];
            matrix[x][y] = matrix[y][x];
            matrix[y][x] = temp;
        }
    }
}

void drie_twaalf(){
    vector<vector<int>> team = { {1,2,3},
                                 {4,5,6},
                                 {7,8,9}};
    transpose(team);
    for(int x = 0; x < team.size();++x){
        for (int y = 0; y < team[x].size(); ++y){
            cout << team[x][y]<<",";
        }
        cout << endl;
    }
}