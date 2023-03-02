//
// Created by windows on 2023/3/1.
//

#include "Solution35.h"

int Solution35::searchInsert(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        }else if (nums[mid] < target) {
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return left;
}
