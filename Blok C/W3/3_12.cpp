#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> & matrix){
    int temp = 0;
    vector<int> used = {1};
    for (int x = 0; x < matrix.size(); ++x) {
        for (int y = 0; y < matrix[x].size(); ++y) {
            for (int z = 0; z < used.size(); ++z) {
                do{
                    temp = matrix[x][y];
                    used.push_back(temp);
                    matrix[x][y] = matrix[y][x];
                    matrix[y][x] = temp;
                }
                while(temp != used[z]);
                }
            continue;
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