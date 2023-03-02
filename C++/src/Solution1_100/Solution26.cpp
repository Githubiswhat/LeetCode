//
// Created by windows on 2023/3/1.
//

#include "Solution26.h"

int Solution26::removeDuplicates(vector<int> &nums) {
    if (nums.empty()) {
        return 0;
    }
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

