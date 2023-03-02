//
// Created by windows on 2023/3/1.
//

#include "Solution268.h"
#include <algorithm>

int Solution268::missingNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i) {
            return i;
        }
    }
    return nums.size();
}
