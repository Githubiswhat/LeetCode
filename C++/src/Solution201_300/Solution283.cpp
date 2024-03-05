//
// Created by windows on 2023/3/1.
//

#include "Solution283.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void Solution283::moveZeroes(vector<int> &nums) {
    int i = 0;
    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] != 0) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i++] = temp;
        }
    }
}
