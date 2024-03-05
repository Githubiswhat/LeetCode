//
// Created by windows on 2023/3/2.
//

#include "Solution506.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>
#include <algorithm>

//输入：score = [10,3,8,9,4]
//输出：["Gold Medal","5","Bronze Medal","Silver Medal","4"]
//解释：名次为 [1st, 5th, 3rd, 2nd, 4th]
vector<string> Solution506::findRelativeRanks(vector<int> &score) {
    int n = score.size();
    unordered_map<int, string> rank_map;
    vector<int> sort_score = score;
    sort(sort_score.rbegin(), sort_score.rend());
    rank_map[sort_score[0]] = "Gold Medal";
    if (n > 1) rank_map[sort_score[1]] = "Silver Medal";
    if (n > 2) rank_map[sort_score[2]] = "Bronze Medal";
    for (int i = 3; i < n; i++) {
        rank_map[sort_score[i]] = to_string(i + 1);
    }
    vector<string> res;
    for (int i = 0; i < n; ++i) {
        res.push_back(rank_map[score[i]]);
    }
    return res;
}
