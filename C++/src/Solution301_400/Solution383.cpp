//
// Created by windows on 2023/3/2.
//

#include "Solution383.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

bool Solution383::canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> map;
    for (char c : magazine) {
        map[c]++;
    }
    for (char c : ransomNote) {
        if (!map.count(c)){
            return false;
        }
        if (map[c]-- <= 0) {
            return false;
        }
    }
    return true;
}
