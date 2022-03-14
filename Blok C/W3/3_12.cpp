#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> & matrix){
    int temp = 0;
    vector<int> used = {};
    for (int x = 0; x < matrix.size()-1; ++x) {
        for (int y = 1; y < matrix[x].size(); ++y) {
            temp = matrix[x][y];
            matrix[x][y] = matrix[y][x];
            matrix[y][x] = temp;
            used.push_back(matrix[x][y]);
                }
            }
    return matrix;
}

void drie_twaalf(){
    vector<vector<int>> team = { {1,2,3},
                                 {4,5,6},
                                 {7,8,9}};
    vector<vector<int>> swapped = transpose(team);
    for(int x = 0; x < swapped.size();++x){
        for (int y = 0; y < swapped[x].size(); ++y){
            cout << swapped[x][y]<<",";
        }
        cout << endl;
    }
}