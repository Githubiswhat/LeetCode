//
// Created by windows on 2023/3/2.
//

#include "Solution49.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
#include "unordered_map"
#include "vector"
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  unordered_map<string, vector<string>> map;
  for (const auto &item : strs){
    string str = item;
    sort(str.begin(), str.end());
    map[str].push_back(item);
  }
  vector<vector<string>> result;
  for (const auto &item : map){
    result.push_back(item.second);
  }
  return result;
}
