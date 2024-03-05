//
// Created by windows on 2023/3/2.
//

#include "Solution46.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;

void dfs(vector<int>nums, vector<vector<int>>& res, vector<int>& path, vector<int>& used){
  if (path.size() == nums.size()){
    res.push_back(path);
    return;
  }
  for (int i = 0; i < nums.size(); i++){
    if (used[i] == 1) continue;
    path.push_back(nums[i]);
    used[i] = 1;
    dfs(nums, res, path, used);
    path.pop_back();
    used[i] = 0;
  }
}

vector<vector<int>> permute(vector<int>& nums) {
  vector<vector<int>> res;
  vector<int> path;
  vector<int> used(nums.size(), 0);
  dfs(nums, res, path, used);
  return res;
}
