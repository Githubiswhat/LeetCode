//
// Created by windows on 2023/3/2.
//

#include "Solution2813.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

long long findMaximumElegance(vector<vector<int>>& items, int k) {
  long long max_elegance = 0;
  unordered_map<int, int> s;
  function<void(int, int, long long)> dfs = [&](int i, int cnt ,long long sum) {
    if (i == items.size()) {
      if (cnt == k) {
        int x = s.size() * s.size();
        max_elegance = max(max_elegance, sum + x);
      }
      return;
    }
    dfs(i + 1, cnt, sum);
    s[items[i][1]]++;
    dfs(i + 1, cnt + 1, sum + items[i][0]);
    s[items[i][1]]--;
    if (s[items[i][1]] == 0){
      s.erase(items[i][1]);
    }
  };
  dfs(0, 0, 0);
  return max_elegance;
}