//
// Created by windows on 2023/3/2.
//

#include "Solution628.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

int Solution628::maximumProduct(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return max(nums[0] * nums[1] * nums[n - 1], nums[n - 1] * nums[n- 2] * nums[n - 3]);
}
