//
// Created by windows on 2023/3/2.
//

#include "Solution674.h"
#include <algorithm>

int Solution674::findLengthOfLCIS(vector<int> &nums) {
    int n = nums.size();
    int res = 1;
    int count = 1;
    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            count++;
            res = max(count, res);
        }else{
            count = 1;
        }
    }
    return res;
}
