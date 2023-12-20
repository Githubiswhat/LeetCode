//
// Created by windows on 2023/3/2.
//

#include "Solution1042.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> Solution::gardenNoAdj(int n, vector<vector<int>> &paths) {
    vector<vector<int>> adjPaths(n + 1, vector<int>());
    for (auto path : paths) {
        adjPaths[path[0]].push_back(path[1]);
        adjPaths[path[1]].push_back(path[0]);
    }
    vector<int> res(n, 0);
    for (int i = 1; i < adjPaths.size(); ++i) {
        vector<bool> color(5, false);
        for (int id : adjPaths[i]) {
            color[res[id  -1]] = true;
        }
        for (int j = 1; j <= 4; ++j) {
            if (!color[j]){
                res[j - 1] = j;
            }
        }
    }
    return res;
}
