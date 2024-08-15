//
// Created by windows on 2023/3/2.
//

#include "Solution2766.h"
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
  set<int> s;
  for (auto i : nums)
    s.insert(i);
  int n = moveFrom.size();
  for (int i = 0; i < n; ++i) {
    s.erase(moveFrom[i]);
    s.insert(moveTo[i]);
  }
  return vector<int>(s.begin(), s.end());
}