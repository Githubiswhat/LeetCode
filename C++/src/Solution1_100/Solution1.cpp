//
// Created by windows on 2023/3/1.
//

#include "Solution1.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> Solution1::twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash_table;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash_table.count(complement)) {
            return {hash_table[complement], i};
        }
        hash_table[nums[i]] = i;
    }
    return {};
}
