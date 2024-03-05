//
// Created by windows on 2023/3/2.
//

#include "Solution2574.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <valarray>
#include <vector>
using namespace std;


vector<int> leftRightDifference(vector<int>& nums) {
  vector<int> result(nums.size(), 0);
  vector<int> left(nums.size(), 0);
  vector<int> right(nums.size(), 0);

  for (int i = 1; i < nums.size(); ++i) {
    left[i] = left[i - 1] + nums[i - 1];
  }
  for (int i = nums.size() - 2; i >= 0 ; --i) {
    right[i] = right[i + 1] + nums[i + 1];
  }
  for (int i = 0; i < nums.size(); ++i) {
    result[i] = abs(left[i] - right[i]);
  }
  return result;
}
