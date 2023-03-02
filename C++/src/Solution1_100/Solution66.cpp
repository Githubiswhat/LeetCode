//
// Created by windows on 2023/3/1.
//

#include "Solution66.h"

vector<int> Solution66::plusOne(vector<int> &digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] == 9){
            digits[i] = 0;
        } else{
            digits[i] = digits[i] + 1;
            return digits;
        }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
}
