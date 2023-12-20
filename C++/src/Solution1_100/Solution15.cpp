//
// Created by windows on 2023/3/2.
//

#include "Solution15.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

vector<vector<int>> Solution::threeSum(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i - 1] == nums[i]){
            continue;
        }
        int target = 0 - nums[i];
        int k = n - 1;
        for (int j = i + 1; j < n; ++j) {
            if (j > i + 1 && nums[j - 1] == nums[j]){
                continue;
            }
            while (j < k && nums[j] + nums[k] > target) k--;
            if (j == k){
                break;
            }
            if (nums[k] + nums[j] == target){
                result.push_back({nums[i], nums[j], nums[k]});
            }
        }
    }
    return result;
}
