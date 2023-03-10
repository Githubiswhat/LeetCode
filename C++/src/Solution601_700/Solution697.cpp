//
// Created by windows on 2023/3/2.
//

#include "Solution697.h"
#include <unordered_map>

int Solution697::findShortestSubArray(vector<int> &nums) {
    unordered_map<int, vector<int>> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        if (!hashtable.count(nums[i])){
            hashtable[nums[i]] = {1, i, i};
        } else{
            hashtable[nums[i]][0]++;
            hashtable[nums[i]][2] = i;
        }
    }
    int max_value = 0, min_len = 0;
    for(auto& [_, value] : hashtable){
        if (value[0] > max_value){
            max_value = value[0];
            min_len = value[2] - value[1] + 1;
        }else if (value[0] == max_value){
            int temp = value[2] - value[1] + 1;
            min_len = min(temp, min_len);
        }
    }
    return min_len;
}
