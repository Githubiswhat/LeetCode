//
// Created by windows on 2023/3/2.
//

#include "Solution2007.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> findOriginalArray(vector<int>& changed) {
  int n = changed.size();
  if (n % 2 == 1) return {};

  unordered_map<int, int> freq; // 用于记录每个元素出现的次数
  vector<int> ans; // 存储结果的数组

  // 先对输入数组进行排序
  sort(changed.begin(), changed.end());

  // 统计每个元素的出现次数
  for (int num : changed) {
    freq[num]++;
  }

  // 遍历输入数组中的每个元素
  for (int num : changed) {
    // 如果当前元素已经被使用完毕，则跳过
    if (freq[num] == 0) continue;

    // 如果当前元素乘以2的结果存在，并且还没有被使用完毕
    if (freq.count(num * 2) && freq[num * 2] > 0) {
      // 将当前元素乘以2的结果从哈希表中去除一个
      freq[num * 2]--;
      // 将当前元素添加到结果数组中
      ans.push_back(num);
    } else {
      // 否则，说明无法找到符合条件的元素，直接返回空数组
      return {};
    }
    // 将当前元素从哈希表中去除一个
    freq[num]--;
  }

  // 返回结果数组
  return ans;
}