//
// Created by tomno on 20/02/2022.
//
#include "iostream"
#include "vector"

using namespace std;


void matrix(vector<vector<int>> mat){
    for (int x = 0; x < mat.size(); ++x){
        for (int i = 0; i < mat[x].size(); ++i) {
            if (mat[x][i] == -1){
                cout<< "x";
            }
            else{
                cout << mat[x][i];
            }
        }
        cout << endl;
    }

}

void drie_drie(){
    vector<vector<int>> mat = { {-1, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                                {-1, 0,-1, 0, 0, 0,-1,-1, 0,-1,-1},
                                {-1, 0,-1, 0,-1,-1,-1, 0, 0, 1,-1},
                                {-1, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1},
                                {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
    matrix(mat);
}