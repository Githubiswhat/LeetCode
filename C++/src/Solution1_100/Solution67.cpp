//
// Created by windows on 2023/3/2.
//

#include "Solution67.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

string Solution67::addBinary(string a, string b) {
    int carry = 0;
    string result = "";
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry > 0){
        int sum = carry;
        if (i >= 0){
            sum += a[i--] - '0';
        }
        if (j >= 0){
            sum += b[j--] - '0';
        }
        carry = sum / 2;
        result = char (sum % 2 + '0') + result;
    }
    return result;
}
