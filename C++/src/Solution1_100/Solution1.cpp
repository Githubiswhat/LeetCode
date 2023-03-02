//
// Created by windows on 2023/3/1.
//

#include "Solution1.h"

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
