//
// Created by windows on 2023/3/2.
//

//#include "Solution2846.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


vector<int> minOperationsQueries(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
  vector<vector<pair<int, int>>> joints(n);

  for (const auto &item : edges){
    joints[item[0]].push_back({item[1], item[2]});
    joints[item[1]].push_back({item[0], item[2]});
  }

  function<bool(int, int, vector<int>&, unordered_set<int>&)> dfs = [&](int index, int target, vector<int>& list, unordered_set<int>& visit) {
    if (index == target){
      return true;
    }
    visit.emplace(index);
    for (int i = 0; i < joints[index].size(); ++i) {
      if (visit.count(joints[index][i].first))
        continue;
      list.push_back(joints[index][i].second);
      if (dfs(joints[index][i].first, target, list, visit)){
        return true;
      }
      list.pop_back();
    }
    visit.erase(index);
    return false;
  };

  vector<int> res;
  for (const auto &item : queries){
    vector<int> list;
    unordered_set<int> visited;
    dfs(item[0], item[1], list, visited);
    unordered_map<int, int> hash;
    int maxVal = 0;
    for (const auto &cost : list){
      hash[cost]++;
      maxVal = max(maxVal, hash[cost]);
    }
    res.push_back(list.size() - maxVal);
  }
  return res;
}


//int main() {
//  int n = 8;
//  vector<vector<int>> edges = {{1, 2, 6}, {1, 3, 4}, {2, 4, 6}, {2, 5, 3}, {3, 6, 6}, {3, 0, 8}, {7, 0, 2}};
//  vector<vector<int>> queries = {{4, 6}, {0, 4}, {6, 5}, {7, 4}};
//
//  vector<int> result = minOperationsQueries(n, edges, queries);
//
//  // 输出结果
//  for (int val : result) {
//    cout << val << " ";
//  }
//
//  return 0;
//}
