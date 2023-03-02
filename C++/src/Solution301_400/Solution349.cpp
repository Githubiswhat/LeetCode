//
// Created by windows on 2023/3/1.
//

#include "Solution349.h"
#include <unordered_set>

vector<int> Solution349::intersection(vector<int> &nums1, vector<int> &nums2) {
    unordered_set<int> hashset;
    unordered_set<int> res;
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++) {
        hashset.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++) {
        if (hashset.count(nums2[i])) {
            res.insert(nums2[i]);
        }
    }
    for (int a : res) {
        ans.push_back(a);
    }
    return ans;
}
