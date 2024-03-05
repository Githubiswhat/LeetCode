//
// Created by windows on 2023/3/2.
//

#include "Solution862.h"
#include <functional>
#include <deque>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int shortestSubarray(vector<int>& nums, int k) {
  int n = nums.size();
  vector<long> s(n + 1);
  int ans = n + 1;
  deque<int> q;

  for (int i = 0; i < n; ++i) {
    s[i + 1] = s[i] + nums[i];
  }

  for (int i = 0; i <= n; ++i) {
    long cur_s = s[i];
    while (!q.empty() && cur_s - s[q.front()] >= k){
      ans = min(ans, i - q.front());
      q.pop_front();
    }
    while (!q.empty() && s[q.back()] >= cur_s){
      q.pop_back();
    }
    q.push_back(i);
  }
  return ans > n ? -1 : ans;
}



