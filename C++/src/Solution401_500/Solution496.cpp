//
// Created by windows on 2023/3/2.
//

#include "Solution496.h"
#include <unordered_map>

vector<int> Solution496::nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int m = nums1.size();
    int n = nums2.size();
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums2.size(); ++i) {
        hashtable[nums2[i]] = i;
    }
    vector<int> res(m, -1);
    for (int i = 0; i < m; ++i) {
        for (int j = hashtable[nums1[i]]; j < n; ++j) {
            if (nums1[i] < nums2[j]){
                res[i] = nums2[j];
                break;
            }
        }
    }
    return res;
}
