//
// Created by windows on 2023/3/2.
//

#include "Solution387.h"
#include <unordered_map>

int Solution387::firstUniqChar(string s) {
    unordered_map<char, int> map;
    for (char c : s) {
        map[c]++;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (map[s[i]] == 1){
            return i;
        }
    }
    return -1;
}
