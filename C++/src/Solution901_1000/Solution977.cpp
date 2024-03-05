//
// Created by windows on 2023/3/2.
//

#include "Solution977.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
  int n = nums.size();
  vector<int> ans(n);
  for (int i = 0, j = n - 1, pos = n - 1; i < j; pos--) {
    if (nums[i] * nums[i] > nums[j] * nums[j]){
      ans[pos] = nums[i] * nums[i];
      i++;
    } else{
      ans[pos] = nums[j] * nums[j];
      j--;
    }
  }
  return ans;
}
