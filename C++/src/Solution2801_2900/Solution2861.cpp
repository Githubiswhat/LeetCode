//
// Created by windows on 2023/3/2.
//

#include "Solution2861.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
  int mx = *min_element(stock.begin(), stock.end()) + budget;
  int ans = 0;

  for (const auto &item : composition){
    auto check = [&](long long num){
      long long sum = 0;
      for (int i = 0; i < item.size(); ++i) {
        if (num * item[i] > stock[i]){
          sum += (num * item[i] - stock[i]) * cost[i];
          if (sum > budget) return false;
        }
      }
      return true;
    };

    int left = ans, right = mx + 1;
    while (left + 1 < right){
      int mid = left + (right - left) / 2;
      if (check(mid)){
        left = mid;
      } else{
        right = mid;
      }
    }
    ans = left;
  }
  return ans;
}
