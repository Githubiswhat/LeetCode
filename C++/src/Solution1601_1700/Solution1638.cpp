//
// Created by windows on 2023/3/2.
//

#include "Solution1638.h"

int Solution::countSubstrings(string s, string t) {
    int m = s.size();
    int n = t.size();
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int diff = 0;
            for (int k = 0; i + k < m && j + k < n; ++k) {
                diff += s[i + k] == t[j + k] ? 0 : 1;
                if (diff > 1){
                    break;
                }else if (diff == 1){
                    ans++;
                }
            }
        }
    }
    return ans;
}
