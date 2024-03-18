//
// Created by windows on 2023/3/2.
//

//#include "Solution2684.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maxMoves(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    int ans = 0;
    function<void(int, int)> dfs = [&](int i, int j) {
        ans = max(ans, j);
        if (ans == n - 1) { // ans 已达到最大值
            return;
        }
        // 向右上/右/右下走一步
        for (int k = max(i - 1, 0); k < min(i + 2, m); k++) {
            if (grid[k][j + 1] > grid[i][j]) {
                dfs(k, j + 1);
            }
        }
        grid[i][j] = 0;
    };
    for (int i = 0; i < m; i++) {
        dfs(i, 0); // 从第一列的任一单元格出发
    }
    return ans;
}

int main() {
    // 测试用例
    vector<vector<int>> grid = {
            {3,2,4},
            {2,1,9},
            {1,1,7}
    };

    // 调用函数计算最大移动步数
    int max_steps = maxMoves(grid);

    // 输出结果
    std::cout << max_steps << std::endl;

    return 0;
}