//
// Created by windows on 2023/3/2.
//

#include "Solution290.h"
#include <unordered_map>

bool Solution290::wordPattern(string pattern, string s) {
    unordered_map<char, string> map1;
    unordered_map<string , char> map2;
    int i = 0;
    for (char c : pattern) {
        if (i >= s.length()) return false;
        int j = i;
        while (j < s.length() && s[j] != ' ') {
            j++;
        }
        string str = s.substr(i, j);
        i = j + 1;
        if (map1.count(c) && map1[c] != str) return false;
        if (map2.count(str) && map2[str] != c) return false;
        map1[c] = str;
        map2[str] = c;
    }
    return true;
}
