//
// Created by windows on 2023/3/2.
//

#include "Solution1630.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<bool> Solution::checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r) {
    int n = l.size();
    vector<bool> res;
    for (int i = 0; i < n; ++i) {
        int left = l[i], right = r[i];
        int min_val = *min_element(nums.begin() + left, nums.begin() + right + 1);
        int max_val = *max_element(nums.begin() + left, nums.begin() + right + 1);
        if (max_val - min_val == 0) {
            res.push_back(true);
            continue;
        }
        if ((max_val - min_val) % (right - left) != 0){
            res.push_back(false);
            continue;
        }
        int d = (max_val - min_val) / (right - left);
        bool flag = true;
        vector<bool> same(n, false);
        for (int j = left; j <= right; ++j) {
            if ((nums[j] - min_val) % d != 0){
                flag = false;
                break;
            }
            int num = (nums[j] - min_val) / d;
            if (same[num]){
                flag = false;
                break;
            }
            same[num] = true;
        }
        res.push_back(flag);
    }
    return res;
}
