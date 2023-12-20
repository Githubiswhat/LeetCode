//
// Created by windows on 2023/3/2.
//

#include "Solution905.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> Solution::sortArrayByParity(vector<int> &nums) {
    int n = nums.size();
    int left = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] % 2 == 0){
            int temp = nums[i];
            nums[i] = nums[left];
            nums[left] = temp;
            left++;
        }
    }
    return nums;
}
