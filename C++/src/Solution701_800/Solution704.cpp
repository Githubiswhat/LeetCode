//
// Created by windows on 2023/3/2.
//

#include "Solution704.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution704::search(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        }else if (nums[mid] < target) {
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    return -1;
}
