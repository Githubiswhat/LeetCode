//
// Created by windows on 2023/3/2.
//

#include "Solution766.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool Solution::isToeplitzMatrix(vector<vector<int>> &matrix) {
    int m = matrix.size(), n = matrix[0].size();
    int j = 0;
    for (int i = 0; i < n; ++i) {
        int x = j + 1, y = i + 1;
        while(x < m && y < n){
            if (matrix[x][y] == matrix[j][i]){
                x++;
                y++;
            } else{
                return false;
            }
        }
    }
    j = 0;
    for (int i = 1; i < m; ++i) {
        int x = i + 1, y = j + 1;
        while(x < m && y < n){
            if (matrix[x][y] == matrix[i][j]){
                x++;
                y++;
            } else{
                return false;
            }
        }
    }
    return true;
}
