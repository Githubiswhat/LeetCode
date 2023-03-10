//
// Created by windows on 2023/3/2.
//

#include "Solution645.h"
#include <algorithm>

vector<int> Solution645::findErrorNums(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> res(2);
    int prev = 0;
    for (int i = 0; i < n; ++i) {
        int cur = nums[i];
        if (cur == prev){
            res[0] = cur;
        } else if (cur - prev > 1){
            res[1] = prev + 1;
        }
        prev = cur;
    }
    if (nums[n - 1] != n){
        res[1] = n;
    }
    return res;
}
