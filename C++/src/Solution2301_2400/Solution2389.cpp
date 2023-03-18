//
// Created by windows on 2023/3/2.
//

#include "Solution2389.h"
#include <algorithm>

vector<int> Solution::answerQueries(vector<int> &nums, vector<int> &queries) {
    sort(nums.begin(), nums.end());
    int n = queries.size();
    int m = nums.size();
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        int j = 0;
        for (; j < m; ++j) {
            if (sum + nums[j] <= queries[i]){
                sum += nums[j];
            } else{
                break;
            }
        }
        result[i] = j;
    }
    return result;
}
