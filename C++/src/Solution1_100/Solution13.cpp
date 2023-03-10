//
// Created by windows on 2023/3/2.
//

#include "Solution13.h"
#include <unordered_map>

int Solution13::romanToInt(string s) {
    int result = 0;
    unordered_map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
            result -= romanMap[s[i]];
        }else{
            result += romanMap[s[i]];
        }
    }
    return result;
}
