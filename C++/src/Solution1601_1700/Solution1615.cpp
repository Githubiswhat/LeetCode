//
// Created by windows on 2023/3/2.
//

#include "Solution1615.h"
#include <unordered_map>

int Solution::maximalNetworkRank(int n, vector<vector<int>> &roads) {
    vector<vector<bool>> connect(n, vector<bool>(n, false));
    vector<int> degree(n, 0);
    for (vector<int> vec: roads) {
        connect[vec[0]][vec[1]] = true;
        connect[vec[1]][vec[0]] = true;
        degree[vec[0]]++;
        degree[vec[1]]++;
    }
    int max_val = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int num = degree[i] + degree[j] - (connect[i][j] ? 1 : 0);
            max_val = max(max_val, num);
        }
    }
    return max_val;
}
