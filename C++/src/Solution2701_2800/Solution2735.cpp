//
// Created by windows on 2023/3/2.
//

#include "Solution2735.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;


long long minCost(vector<int>& nums, int x) {
    int n = nums.size();
    vector<long long> s(n);

    for (int i = 0; i < n; ++i) {
        s[i] = i * x;
    }

    for (int i = 0; i < n; ++i) {
        int mn = nums[i];
        for (int j = i; j < i + n; ++j) {
            mn = min(mn, nums[j % n]);
            s[j - i] += mn;
        }
    }

    return *min_element(s.begin(), s.end());
}