//
// Created by windows on 2023/3/1.
//

#include "Solution228.h"

vector<string> Solution228::summaryRanges(vector<int> &nums) {
    vector<string> res;
    int i = 0;
    int n = nums.size();
    while (i < n){
        int low = i;
        i++;
        while (i < n && nums[i] == nums[i - 1] + 1){
            i++;
        }
        int high = i - 1;
        string temp = to_string(nums[low]);
        if (low < high){
            temp.append("->");
            temp.append(to_string(nums[high]));
        }
        res.push_back(temp);
    }
    return res;
}
