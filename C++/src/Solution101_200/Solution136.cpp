//
// Created by windows on 2023/3/1.
//

#include "Solution136.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution136::singleNumber(vector<int> &nums) {
    int num = nums[0];
    for (int i = 1; i < nums.size(); i++){
        num ^= nums[i];
    }
    return num;
}
