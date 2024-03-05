//
// Created by windows on 2023/3/2.
//

#include "Solution942.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> diStringMatch(string s) {
  int n = s.size();
  vector<int> res;
  int left = 0, right = n;
  for (int i = 0; i < n; ++i) {
    res.push_back(s[i] == 'I' ? left++ : right--);
  }
  res.push_back(left);
  return res;
}
