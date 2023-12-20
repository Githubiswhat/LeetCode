//
// Created by windows on 2023/3/2.
//

#include "Solution594.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

int Solution594::findLHS(vector<int> &nums) {
    int n = nums.size();
    unordered_map<int, int> map;
    int max = 0;
    for (int i = 0; i < n; ++i) {
        map[nums[i]]++;
    }
    for (auto& [key, value] : map) {
        if (map.count(key - 1)){
            if (map[key - 1] + map[key] > max){
                max = map[key - 1] + map[key];
            }
        }
    }
    return max;
}
