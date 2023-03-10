//
// Created by windows on 2023/3/2.
//

#include "Solution345.h"
#include <unordered_set>

string Solution345::reverseVowels(string s) {
    unordered_set<char> set{'a', 'e', 'i', 'o', 'u'};

    int left = 0, right = s.length() - 1;
    while (left < right) {
        while(left < right && !set.count(tolower(s[left]))) left++;
        while(left < right && !set.count(tolower(s[right]))) right--;
        char c = s[left];
        s[left] = s[right];
        s[right] = c;
        left++;
        right--;
    }
    return s;
}
