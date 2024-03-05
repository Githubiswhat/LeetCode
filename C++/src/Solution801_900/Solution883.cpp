//
// Created by windows on 2023/3/2.
//

#include "Solution883.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution::projectionArea(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();
    int left = 0;
    int before = 0;
    int counter = 0;
    for (int i = 0; i < m; ++i) {
        int max_val_left = grid[i][0];
        for (int j = 1; j < n; ++j) {
            max_val_left = max(max_val_left, grid[i][j]);
            if (grid[i][j]) counter++;
        }
        left += max_val_left;
    }
    for (int i = 0; i < n; ++i) {
        int max_val_before = grid[0][i];
        for (int j = 0; j < m; ++j) {
            max_val_before = max(max_val_before, grid[j][i]);
        }
        before += max_val_before;
    }
    return counter + left + before;
}
