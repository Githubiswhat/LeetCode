//
// Created by windows on 2023/3/2.
//

#include "Solution18.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

//vector<vector<int>> Solution::fourSum(vector<int> &nums, int target) {
//    sort(nums.begin(), nums.end());
//    int n = nums.size();
//    vector<vector<int>> res;
//    for (int i = 0; i < n - 3; ++i) {
//        if (i > 0 && nums[i] == nums[i -1]){
//            continue;
//        }
//        for (int j = i + 1; j < n - 2; ++j) {
//            if (j > i + 1 && nums[j] == nums[j - 1]){
//                continue;
//            }
//            int k = j + 1, l = n - 1;
//            while (k < l) {
//                long num = (long)nums[i] + nums[j] + nums[k] + nums[l];
//                if (num == target) {
//                    res.push_back({nums[i], nums[j], nums[k], nums[l]});
//                    do k++; while (k < l && nums[k] == nums[k - 1]);
//                    do l--; while (k < l && nums[l] == nums[l + 1]);
//                } else if (num < target) {
//                    k++;
//                }else{
//                    l--;
//                }
//            }
//        }
//    }
//    return res;
//}





vector<vector<int>> Solution::fourSum(vector<int> &nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        if ((long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target){
            break;
        }
        if ((long)nums[i] + nums[n -1] + nums[n -2] + nums[n -3] < target){
            continue;
        }
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int k = j + 1, l = n - 1;
            while (k < l) {
                long num = (long) nums[i] + nums[j] + nums[k] + nums[l];
                if (target == num) {
                    res.push_back({nums[i], nums[j], nums[k], nums[l]});
                    do k++; while (k < l && nums[k] == nums[k - 1]);
                    do l--; while (k < l && nums[l] == nums[l + 1]);
                } else if (num < target) {
                    do k++; while (k < l && nums[k] == nums[k - 1]);
                } else {
                    do l--; while (k < l && nums[l] == nums[l + 1]);
                }
            }
        }
    }
    return res;
}


























