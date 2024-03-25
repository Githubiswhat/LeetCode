//
// Created by windows on 2023/3/2.
//

#include "Solution830.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<int>> largeGroupPositions(string s) {
  s = s + "A";
  int n = s.size();
  vector<vector<int>> res;
  int count = 1;
  for (int i = 0; i < n; ++i) {
    if (i + 1 < n){
      if (s[i] == s[i + 1]){
        count++;
      } else{
        if (count >= 3){
          res.push_back({i - count + 1, i});
        }
        count = 1;
      }
    }
  }
  return res;
}