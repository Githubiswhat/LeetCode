//
// Created by windows on 2023/3/2.
//

#include "Solution561.h"
#include <algorithm>

int Solution561::arrayPairSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }
    return sum;
}
