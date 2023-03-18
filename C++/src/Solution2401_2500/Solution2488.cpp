//
// Created by windows on 2023/3/2.
//

#include "Solution2488.h"
#include "unordered_map"

inline int sign(int num){
    if (num == 0){
        return 0;
    }
    return num > 0 ? 1 : -1;
}


int Solution::countSubarrays(vector<int> &nums, int k) {
    int res = 0;
    int n = nums.size();
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (nums[i] == k) {
            index = i;
            break;
        }
    }
    unordered_map<int, int> map;
    map[0] = 1;
    int sum = 0;
    for (int j = 0; j < n; ++j) {
        sum += sign(nums[j] - k);
        if (j < index){
            map[sum]++;
        }else{
            int prev0 = map[sum];
            int prev1 = map[sum - 1];
            res += prev0 + prev1;
        }
    }
    return res;
}
