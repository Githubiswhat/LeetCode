//
// Created by windows on 2023/3/2.
//

#include "Solution2171.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


long long minimumRemoval(vector<int>& beans) {
  sort(beans.begin(), beans.end());
  long long minVal = INT_MAX;
  int n = beans.size();
  vector<long long> prefix(n, 0);
  long long sum = 0;
  for (int i = 1; i < n; ++i) {
      sum += beans[i - 1];
      prefix[i] = sum;
  }
  sum = 0;
  vector<long long> suffix(n, 0);
  for (int i = n - 2; i >= 0; --i) {
      sum += (beans[i + 1] - beans[i]) * (n - i - 1);
      suffix[i] = sum;
  }

  for (int i = 0; i < n; ++i) {
    long long count = prefix[i] + suffix[i];
    minVal = min(minVal, count);
  }
  return minVal;
}
