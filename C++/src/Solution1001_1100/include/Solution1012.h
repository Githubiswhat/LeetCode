//
// Created by windows on 2023/3/18.
//

#ifndef C___SOLUTION1012_H
#define C___SOLUTION1012_H


class Solution{
public:
    int nums[11];
    int dp[11][1<<11];

    int numDupDigitsAtMostN(int n);
    int init(int n);
    int dfs(int p, int mask, bool limit, bool lead);
};


#endif //C___SOLUTION1012_H

