//
// Created by windows on 2023/3/2.
//

#include "Solution448.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>


vector<int> Solution448::findDisappearedNumbers(vector<int> &nums) {
    unordered_set<int> s;
    vector<int> res;
    for (int num : nums) {
        s.insert(num);
    }
    for (int i = 1; i <= nums.size(); ++i) {
        if (!s.count(i)){
            res.push_back(i);
        }
    }
    return res;
}
