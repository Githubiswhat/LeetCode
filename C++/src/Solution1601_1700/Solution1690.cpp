//
// Created by windows on 2023/3/2.
//

#include "Solution1690.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <numeric>
#include <functional>

using namespace std;


int stoneGameVII(vector<int> &stones) {
    int n = stones.size();
    vector<int> s(n + 1); // 前缀和
    partial_sum(stones.begin(), stones.end(), s.begin() + 1);
    vector<vector<int>> memo(stones.size(), vector<int>(stones.size()));
    function<int(int, int)> dfs = [&](int i, int j) -> int {
        if (i == j) { // 递归边界
            return 0;
        }
        int &res = memo[i][j]; // 注意这里是引用
        if (res) { // 之前计算过
            return res;
        }
        return res = max(s[j + 1] - s[i + 1] - dfs(i + 1, j), s[j] - s[i] - dfs(i, j - 1));
    };
    return dfs(0, n - 1);
}

