//
// Created by windows on 2023/3/1.
//

#include "Solution217.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

bool Solution217::containsDuplicate(vector<int> &nums) {
    unordered_set<int> hashset;
    for (int i = 0; i < nums.size(); i++){
        if (hashset.count(nums[i])){
            return true;
        }
        hashset.insert(nums[i]);
    }
    return false;
}
