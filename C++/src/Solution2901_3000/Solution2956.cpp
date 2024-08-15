//
// Created by windows on 2023/3/2.
//

#include "Solution2956.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
  unordered_set<int> s1(nums1.begin(), nums1.end());
  unordered_set<int> s2(nums2.begin(), nums2.end());
  int n = nums1.size(), m = nums2.size();
  vector<int> ans(2);
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (s2.count(nums1[i])){
      count++;
    }
  }
  ans[0] = count;
  count = 0;
  for (int i = 0; i < m; ++i) {
    if (s1.count(nums2[i])){
      count++;
    }
  }
  ans[1] = count;
  return ans;
}