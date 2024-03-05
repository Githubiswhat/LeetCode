//
// Created by windows on 2023/3/2.
//

#include "Solution5.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>

string Solution::longestPalindrome(string s) {
    int n = s.size();
    if (n < 2){
        return s;
    }
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
    }
    int max_len = 1;
    int begin = 0;
    for (int L = 2; L <= n; ++L) {
        for (int i = 0; i < n; ++i) {
            int j = i + L - 1;
            if (j >= n){
                break;
            }
            if (s[i] != s[j]){
                dp[i][j] = false;
            }else{
                if (L < 3){
                    dp[i][j] = true;
                }else{
                    dp[i][j] = dp[i + 1][j - 1];
                }
                if (dp[i][j] && L > max_len){
                    max_len = L;
                    begin = i;
                }
            }
        }
    }
    return s.substr(begin, max_len);
}
