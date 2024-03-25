//
// Created by windows on 2023/3/2.
//

#include "Solution859.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool buddyStrings(string s, string goal) {
  if(s.size() != goal.size()) return false;
  vector<int> diff;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != goal[i])
      diff.push_back(i);
  }
  if (diff.size() == 2){
    return s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]];
  }
  if (diff.size() == 0) {
    unordered_set<char> seen;
    for (char c : s)
      if (seen.count(c))
        return true;
      else
        seen.insert(c);
  }
  return false;
}