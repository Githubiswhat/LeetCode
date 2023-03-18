//
// Created by windows on 2023/3/2.
//

#include "Solution17.h"
#include <unordered_map>
void dfs(string str, vector<string>& res, int n, unordered_map<char, string>& map, string& digits){
    if (str.length() == n){
        res.push_back(str);
        return;
    }
    string s = map[digits[str.size()]];
    for (int i = 0; i < s.size(); ++i) {
        string tmp = str + s[i];
        dfs(tmp, res, n, map, digits);
    }
}


vector <string> Solution::letterCombinations(string digits) {
    if (digits.length() < 1){
        return {};
    }
    vector<string> res;
    unordered_map<char, string> map = {{'2', "abc"},
                         {'3', "def"},
                         {'4', "ghi"},
                         {'5', "jkl"},
                         {'6', "mno"},
                         {'7', "pqrs"},
                         {'8', "tuv"},
                         {'9', "wxyz"}
    };
    dfs("", res, digits.size(), map, digits);
    return res;
}

