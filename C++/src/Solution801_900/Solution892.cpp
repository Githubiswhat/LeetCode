//
// Created by windows on 2023/3/2.
//

#include "Solution892.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution::surfaceArea(vector<vector<int>> &grid) {
    int n = grid.size();
    int res = 0;
    vector<vector<int>> dirs = {{1,  0},
                                {-1, 0},
                                {0,  1},
                                {0,  -1}};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!grid[i][j]) {
                res += 2;
                for (int k = 0; k < dirs.size(); ++k) {
                    int x = i + dirs[k][0], y = j + dirs[k][1];
                    int val = 0;
                    if (x >= 0 && y >= 0 && x < n && y < n) {
                        val = grid[x][y];
                    }
                    res += max(grid[i][j] - val, 0);
                }
            }
        }
    }
    return res;
}

