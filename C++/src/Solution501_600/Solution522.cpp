//
// Created by windows on 2023/3/2.
//

#include "Solution522.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findLUSlength(vector<string>& strs) {
  function<bool(const string &, const string &)> is_subseq = [&](const string& s1, const string& s2){
    int left = 0, right = 0;
    while (left != s1.size() && right != s2.size()){
      if (s1[left] == s2[right]){
        ++left;
      }
      ++right;
    }
    return left == s1.size();
  };

  int ans = -1, n = strs.size();
  for (int i = 0; i < n; ++i) {
    bool check = true;
    for (int j = 0; j < n; ++j) {
      if (i != j && is_subseq(strs[i], strs[j])) {
        check = false;
        break;
      }
    }
    if (check) {
      ans = max(ans, static_cast<int>(strs[i].size()));
    }
  }
  return ans;
}