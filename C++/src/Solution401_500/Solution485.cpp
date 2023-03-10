//
// Created by windows on 2023/3/2.
//

#include "Solution485.h"

int Solution485::findMaxConsecutiveOnes(vector<int> &nums) {
    int max = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 1){
            if (++count > max){
                max = count;
            }
        }else{
            count = 0;
        }
    }
    return max;
}
