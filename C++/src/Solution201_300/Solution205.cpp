//
// Created by windows on 2023/3/2.
//

#include "Solution205.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>
#include <unordered_set>


bool Solution205::isIsomorphic(string s, string t) {
    if (s.size() != t.size()){
        return false;
    }
    int n = s.size();
    unordered_map<char, char> map;
    unordered_set<char> set;
    for (int i = 0; i < n; ++i) {
        if (!map.count(s[i])){
            if (set.count(t[i])){
                return false;
            }
            map[s[i]] = t[i];
            set.insert(t[i]);
        }else{
            if (map[s[i]] != t[i]){
                return false;
            }
        }
    }
    return true;
}
