//
// Created by windows on 2023/3/2.
//

#include "Solution16.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "algorithm"

int Solution::threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int min_val = 1e7;
    int res;
    for (int i = 0; i < n; ++i) {
        int j = i + 1, k = n - 1;
        while (j < k){
            int num = nums[i] + nums[j] + nums[k];
            if (abs(target - num) < min_val){
                min_val = abs(target - num);
                res = num;
            }
            if (num == target){
                return res;
            } else if (num < target){
                j++;
            }else {
                k--;
            }
        }
    }
    return res;
}
