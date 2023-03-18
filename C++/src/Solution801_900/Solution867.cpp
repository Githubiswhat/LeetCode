//
// Created by windows on 2023/3/2.
//

#include "Solution867.h"

vector<vector<int>> Solution::transpose(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> res(n, vector<int>(m));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            res[j][i] = matrix[i][j];
        }
    }
    return res;
}
