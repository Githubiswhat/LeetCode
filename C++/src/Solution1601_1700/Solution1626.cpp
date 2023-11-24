//
// Created by windows on 2023/3/2.
//

#include "Solution1626.h"
#include <algorithm>

int Solution::bestTeamScore(vector<int> &scores, vector<int> &ages) {
    int n = scores.size();
    vector<pair<int, int>> people;
    for (int i = 0; i < n; ++i) {
        people.push_back({scores[i], ages[i]});
    }
    vector<int> dp(n, 0);
    int res;
    sort(people.begin(), people.end());
    for (int i = 0; i < n; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (people[j].second <= people[i].second){
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i] += people[i].first;
        res = max(dp[i], res);
    }
    return res;
}
