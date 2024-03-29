//
// Created by windows on 2023/3/2.
//

#include "Solution566.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<int>> Solution566::matrixReshape(vector<vector<int>> &mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    if (m * n != r * c) return mat;
    vector<vector<int>> res(r, vector<int>(c));
    int row = 0, col = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            res[row][col++] = mat[i][j];
            if (col == c){
                row++;
                col = 0;
            }
        }
    }
    return res;
}
