//
// Created by windowhaystack on 2023/3/2.
//

#include "Solution28.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution::strStr(string haystack, string needle) {
    int n = haystack.length(), m = needle.length();
    if (m == 0){
        return 0;
    }
    vector<int> next(m);
    for (int i = 1, j = 0; i < m; ++i) {
        while (j > 0 && needle[j] != needle[i]) j = next[j - 1];
        if (needle[i] == needle[j]) {
            j++;
        }
        next[i] = j;
    }

    for (int i = 0, j = 0; i < n; ++i) {
        while (j > 0 && haystack[i] != needle[j]) j = next[j - 1];
        if (haystack[i] == needle[j]) {
            j++;
        }
        if (j == m){
            return i - m + 1;
        }
    }
    return -1;
}
