//
// Created by windows on 2023/3/2.
//

#include "Solution389.h"
#include <unordered_map>

char Solution389::findTheDifference(string s, string t) {
    unordered_map<char, int> map1;
    for (char c : s) {
        map1[c]++;
    }
    for (char c : t) {
        if (!map1.count(c)){
            return c;
        }
        if (map1[c]-- <= 0){
            return c;
        }
    }
    return ' ';
}
