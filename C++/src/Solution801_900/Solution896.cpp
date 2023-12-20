//
// Created by windows on 2023/3/2.
//

#include "Solution896.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool Solution::isMonotonic(vector<int> &nums) {
    int n = nums.size();
    if (nums[0] < nums[n - 1]){
        for (int i = 0; i < n - 1; i++){
            if (nums[i] > nums[i + 1]){
                return false;
            }
        }
        return true;
    }else{
        for (int i = 0; i < n - 1; i++){
            if (nums[i] < nums[i + 1]){
                return false;
            }
        }
        return true;
    }
}
