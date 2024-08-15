//
// Created by windows on 2023/3/2.
//

#include "Solution2391.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
  int ans = 0;
  int n = garbage.size();
  function<void(char)> f = [&](char c){
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      string s = garbage[i];
      bool flag = false;
      for (const auto &item : s){
        if (item == c){
          ans++;
          flag = true;
        }
      }
      if (i > 0){
        sum += travel[i - 1];
      }
      if (flag){
        ans += sum;
        sum = 0;
      }
    }
  };
  f('G');
  f('P');
  f('M');
  return ans;
}