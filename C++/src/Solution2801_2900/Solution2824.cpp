//
// Created by windows on 2023/3/2.
//

#include "Solution2824.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;



int countPairs(vector<int>& nums, int target) {
  int count = 0;
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = i + 1; j < nums.size(); ++j) {
      if (nums[i] + nums[j] < target){
        count++;
      }
    }
  }
  return count;
}
