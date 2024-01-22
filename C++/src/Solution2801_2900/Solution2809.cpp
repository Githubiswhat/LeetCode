//
// Created by windows on 2023/3/2.
//

#include "Solution2809.h"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int minimumTime(vector<int>& nums1, vector<int>& nums2, int x) {
  int n = nums1.size();
  vector<int> ids(n + 1);
  iota(ids.begin(), ids.end(), 0);
  sort(ids.begin(), ids.end(), [&](int a, int b){
    return nums2[a] - nums2[b];
  });

  vector<int> f(n + 1);
  for (int i = 0; i < n; ++i) {
    int a = nums1[ids[i]], b = nums2[ids[i]];
    for (int j = i + 1; j > 0 ; --j) {
      f[j] = max(f[j], f[j - 1] + a + b * j);
    }
  }

  int s1 = accumulate(nums1.begin(), nums1.end(), 0);
  int s2 = accumulate(nums2.begin(), nums2.end(), 0);

  for (int t = 0; t <= n; ++t) {
    if (s1 + s2 * t - f[t] <= x){
      return t;
    }
  }
  return -1;
}
