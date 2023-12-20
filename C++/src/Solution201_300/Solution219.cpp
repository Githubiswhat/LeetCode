//
// Created by windows on 2023/3/1.
//

#include "Solution219.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

bool Solution219::containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        if (hashtable.count(nums[i]) && i - hashtable[nums[i]] <= k){
            return true;
        }
        hashtable[nums[i]] = i;
    }
    return false;
}
