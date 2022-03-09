#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> & matrix){
    vector<vector<int>> matrix2 = {{},{},{}};
    int counter = 0;
    for (int x = 0; x<matrix.size(); ++x){
        int counter2 = 0;
        matrix2[counter2].push_back((matrix[counter][0]));
        counter2++;
        matrix2[counter2].push_back((matrix[counter][1]));
        counter2++;
        matrix2[counter2].push_back((matrix[counter][2]));
        counter++;
    }
    return matrix2;
}

void drie_twaalf(){
    vector<vector<int>> team = { {1,2,3},
                                 {4,5,6},
                                 {7,8,9}};
    vector<vector<int>> swapped = transpose(team);
    for (int x = 0; x < swapped.size();++x){
        for (int y = 0; y < swapped[x].size(); ++y){
            cout << swapped[x][y]<<",";
        }
        cout << endl;
    }
}
