//
// Created by windows on 2023/3/2.
//

#include <iostream>
#include "Solution747.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution::dominantIndex(vector<int> &nums) {
    int max_value = 0;
    int sec_value = 0;
    int max_index = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > max_value){
            sec_value = max_value;
            max_value = nums[i];
            max_index = i;
        }else if (nums[i] > sec_value){
            sec_value = nums[i];
        }
    }
    cout << sec_value << "  " << max_value << endl;
    return sec_value * 2 <= max_value ? max_index : -1;
}
