//
// Created by windows on 2023/3/2.
//

#include "Solution242.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

bool Solution242::isAnagram(string s, string t) {
    if (s.length() != t.length()){
        return false;
    }
    unordered_map<char, int> map_s;
    unordered_map<char, int> map_t;
    for (char c : s) {
        map_s[c]++;
    }
    for (char c : t) {
        map_t[c]++;
    }
    for(auto& [key, value] : map_s){
        if (map_t[key] != value){
            return false;
        }
    }
    return true;
}
