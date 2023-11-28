//
// Created by windows on 2023/3/2.
//

#include "Solution39.h"
#include <algorithm>
#include <vector>
using namespace std;

void dfs(vector<int>& candidates, int target, vector<vector<int>>& lists, int sum, int index, vector<int>& list){
  if (sum > target || index >= candidates.size()){
    return ;
  }
  if (sum == target){
    lists.push_back(list);
    return;
  }
  dfs(candidates, target, lists, sum , index + 1 , list);

  list.push_back(candidates[index]);
  dfs(candidates, target, lists, sum + candidates[index], index, list);
  list.pop_back();
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> lists;
    vector<int> list;
    sort(candidates.begin(), candidates.end());
    dfs(candidates, target, lists, 0, 0, list);
    return lists;
}