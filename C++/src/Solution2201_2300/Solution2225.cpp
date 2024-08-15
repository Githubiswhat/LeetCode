//
// Created by windows on 2023/3/2.
//

#include "Solution2225.h"
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
  map<int, int> cnt;
  set<int> set;
  for (const auto &match : matches){
    cnt[match[1]]++;
    set.emplace(match[0]);
    set.emplace(match[1]);
  }

  vector<vector<int>> res(2);

  for (const auto &item : set){
    if (!cnt.count(item)){
      res[0].push_back(item);
    } else{
      if (cnt[item] == 1){
        res[1].push_back(item);
      }
    }
  }
  return res;
}