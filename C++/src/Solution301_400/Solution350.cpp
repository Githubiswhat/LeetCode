//
// Created by windows on 2023/3/2.
//

#include "Solution350.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>


vector<int> Solution350::intersect(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> hashtable;
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++) {
        hashtable[nums1[i]] = hashtable[nums1[i]] + 1;
    }
    for (int i = 0; i < nums2.size(); ++i) {
        if (hashtable.count(nums2[i]) && hashtable[nums2[i]] > 0) {
            res.push_back(nums2[i]);
            hashtable[nums2[i]] = hashtable[nums2[i]] - 1;
        }
    }
    return res;
}
