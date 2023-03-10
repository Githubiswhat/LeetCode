//
// Created by windows on 2023/3/2.
//

#include "Solution392.h"

bool Solution392::isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i == s.length();
}

