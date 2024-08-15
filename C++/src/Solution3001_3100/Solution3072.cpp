//
// Created by windows on 2024/3/18.
//

#include "Solution3072.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;

int greaterCount(vector<int> vec, int val){
  int cnt = 0;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] > val) {
      ++cnt;
    }
  }
  return cnt;
}

vector<int> resultArray(vector<int>& nums) {
  int n = nums.size();
  vector<int> result1;
  vector<int> result2;
  result1.push_back(nums[0]);
  result2.push_back(nums[1]);
  for (int i = 3; i < n; ++i) {
    if (greaterCount(result1, nums[i]) > greaterCount(result2, nums[i])){
      result1.push_back(nums[i]);
    } else if (greaterCount(result1, nums[i]) < greaterCount(result2, nums[i])){
      result2.push_back(nums[i]);
    } else{
      result1.size() >= result2.size() ? result1.push_back(nums[i]) : result2.push_back(nums[2]);
    }
  }
  for (int i = 0; i < n / 2; ++i) {
    result1.push_back(result2[i]);
  }
  return result1;
}

