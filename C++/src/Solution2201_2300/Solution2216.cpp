//
// Created by windows on 2023/3/2.
//

#include "Solution2216.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
using namespace std;


int minDeletion(vector<int>& nums) {
  int count = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    if ((i - count) % 2 == 0 && nums[i] == nums[i + 1]){
      count++;
    }
  }
  return (nums.size() - count) % 2 == 0 ? count : count + 1;
}
