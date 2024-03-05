//
// Created by windows on 2023/3/2.
//

#include "Solution303.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

NumArray::NumArray(vector<int> &nums) {
    int n = nums.size();
    sums.resize(n + 1);
    for (int i = 0; i < n; ++i) {
        sums[i + 1] = sums[i] + nums[i];
    }
}

int NumArray::sumRange(int left, int right) {
    return sums[right + 1] - sums[left];
}
