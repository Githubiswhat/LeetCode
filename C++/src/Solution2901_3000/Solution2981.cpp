//
// Created by windows on 2023/3/2.
//

#include "Solution2981.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int maximumLength(string s) {
  vector<int> groups[26];
  int count = 0, n = s.size();
  for (int i = 0; i < n; ++i) {
    count++;
    if (i + 1 == n || s[i] != s[i + 1]){
      groups[s[i] - 'a'].push_back(count);
      count = 0;
    }
  }

  int ans = 0;
  for (auto &group : groups){
    if (group.empty()){
      continue;
    }
    std::sort(group.begin(), group.end(), greater());
    group.push_back(0);
    group.push_back(0);
    ans = max({ans, group[0] - 2, min(group[0] - 1, group[1]), group[2]});
  }
  return ans ? ans : -1;
}