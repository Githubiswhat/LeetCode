//
// Created by windows on 2023/3/2.
//

#include "Solution463.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution463::islandPerimeter(vector<vector<int>> &grid) {
    int res = 0;
    int m = grid.size();
    int n = grid[0].size();
    constexpr static int dx[4] = {0 , 1, 0, - 1};
    constexpr static int dy[4] = {1 , 0, -1, 0};
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j]){
                for (int k = 0; k < 4; ++k) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x < 0 || y < 0 || x >= m || y >= n || !grid[x][y]){
                        res++;
                    }
                }
            }
        }
    }
    return res;
}
