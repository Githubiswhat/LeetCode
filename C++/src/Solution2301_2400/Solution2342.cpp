//
// Created by windows on 2023/3/2.
//

#include "Solution2342.h"

#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int process(int nums){
  int result = 0;
  while (nums > 0){
    result += nums % 10;
    nums /= 10;
  }
  return result;
}


int maximumSum(vector<int>& nums) {
  map<int, vector<int>> hashmap;
  for (const auto &item : nums){
    int a = process(item);
    hashmap[a].push_back(item);
  }

  int maxVal = 0;
  for (const auto &[index, value] : hashmap){
    vector<int> sortedValue = value; // 创建新的容器存储排序后的值
    sort(sortedValue.begin(), sortedValue.end());
    if (sortedValue.size() >= 2){
      maxVal = max(maxVal, sortedValue[sortedValue.size() - 1] + sortedValue[sortedValue.size() - 2]);
    }
  }
  return maxVal;
}
