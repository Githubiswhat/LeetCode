//
// Created by windows on 2023/3/2.
//

#include "Solution525.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int findMaxLength(vector<int>& nums) {
  int n = nums.size();
  if (n <= 1) return 0; // 处理边界情况

  // 初始化前缀和数组
  vector<pair<int, int>> s(n + 1);
  s[0] = {0, 0};

  int res = 0;
  for(int i = 1; i <= n; ++i){
    // 计算前缀和
    if (nums[i - 1] == 0){
      s[i] = {s[i - 1].first + 1, s[i - 1].second};
    } else {
      s[i] = {s[i - 1].first, s[i - 1].second + 1};
    }
  }

  // 使用哈希表来存储前缀和及其对应的下标
  unordered_map<int, int> mp;
  for (int i = 0; i <= n; ++i) {
    // 如果前缀和已经存在，则更新结果
    if (mp.count(s[i].first - s[i].second)) {
      res = max(res, i - mp[s[i].first - s[i].second]);
    } else {
      // 否则将前缀和及其下标加入哈希表
      mp[s[i].first - s[i].second] = i;
    }
  }

  return res;
}