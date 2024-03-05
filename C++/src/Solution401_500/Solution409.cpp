//
// Created by windows on 2023/3/2.
//

#include "Solution409.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

int Solution409::longestPalindrome(string s) {
    unordered_map<char, int> map;
    for (char c : s) {
        map[c]++;
    }
    int res = 0;
    for(auto& [key, value] : map) {
        res += value / 2 * 2;
        if (value % 2 == 1 && res % 2 == 0){
            res++;
        }
    }
    return res;
}
