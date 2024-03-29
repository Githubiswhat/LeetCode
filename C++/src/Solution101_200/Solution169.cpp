//
// Created by windows on 2023/3/1.
//

#include "Solution169.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int Solution169::majorityElement(vector<int> &nums) {
    int num = nums[0];
    int ticket = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == num) {
            ticket++;
        }else{
            if(--ticket == 0){
                num = nums[i];
                ticket = 1;
            }
        }
    }
    return num;
}



