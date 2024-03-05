//
// Created by windows on 2023/3/2.
//

#include "Solution2110.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

long long getDescentPeriods(vector<int>& prices) {
  int n = prices.size();
  long long count = 1;
  long long res = 0;
  for (int i = 1; i < n; ++i) {
    if (prices[i] - prices[i - 1] == -1){
      count++;
    } else{
      for (int j = 1; j < count; ++j) {
        res += j;
      }
      count = 1;
    }
  }
  return res;
}
