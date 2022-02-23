#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> & matrix){
    vector<int> matrix2;
    for (int x = 0; x<matrix.size(); ++x){
        for (int y = 0; y<matrix[x].size(); ++y) {
            cout << matrix[x][y];
//            for (vector<int> c = {};
//                matrix2.insert(matrix2.end(), c);
//            }
        }

    }
    return matrix;
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
