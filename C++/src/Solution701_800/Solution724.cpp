//
// Created by windows on 2023/3/2.
//

#include "Solution724.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution724::pivotIndex(vector<int> &nums) {
    int left_sum = 0;
    int right_sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        right_sum += nums[i];
    }
    for (int i = 0; i < nums.size(); ++i) {
        right_sum -= nums[i];
        if (left_sum == right_sum){
            return i;
        }else{
            left_sum += nums[i];
        }
    }
    return -1;
}
