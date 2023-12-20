//
// Created by windows on 2023/3/9.
//

#include "Solution1020.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>
#include <unordered_map>

vector<vector<string>> Solution1020::groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> map;
    for (string str : strs) {
        string temp = str;
        sort(temp.begin(), temp.end());
        if (map.count(temp)){
            map[temp].push_back(str);
        }else{
            vector<string> vec{str};
            map[temp] = vec;
        }
    }
    vector<vector<string>> result;
    for (auto& [key, value] : map) {
        result.push_back(value);
    }
    return result;
}
