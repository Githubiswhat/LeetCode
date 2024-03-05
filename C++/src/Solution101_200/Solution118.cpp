//
// Created by windows on 2023/3/1.
//

#include "Solution118.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<int>> Solution118::generate(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({1});
    for (int i = 1; i < numRows; i++) {
        vector<int> row(i + 1, 0);
        row[0] = 1;
        for (int j = 1; j < i; ++j) {
            row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        row[i] = 1;
        ans.push_back(row);
    }
    return ans;
}
