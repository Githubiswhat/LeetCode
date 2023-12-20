//
// Created by windows on 2023/3/2.
//

#include "Solution415.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string Solution415::addStrings(string num1, string num2) {
    int i = num1.length() - 1, j = num2.length() - 1;
    int carry = 0;
    string res = "";
    while (i >= 0 || j >= 0 || carry == 1){
        int sum = carry;
        if (i >= 0){
            sum += num1[i--] - '0';
        }
        if (j >= 0){
            sum += num2[j--] - '0';
        }
        carry = sum / 10;
        res = to_string(sum % 10) + res;
    }
    return res;
}
