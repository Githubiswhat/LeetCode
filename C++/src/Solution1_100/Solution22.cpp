//
// Created by windows on 2023/3/2.
//

#include "Solution22.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void dfs(int n, int left, int right, string str, vector<string> &res) {
    if (str.length() == n) {
        res.push_back(str);
        return;
    }
    if (left < n / 2) {
        dfs(n, left + 1, right, str + '(', res);
    }
    if (left > right) {
        dfs(n, left, right + 1, str + ")", res);
    }
}

vector<string> Solution::generateParenthesis(int n) {
    vector<string> res;
    dfs(n * 2, 0, 0, "", res);
    return res;
}




