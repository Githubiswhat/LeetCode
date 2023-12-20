//
// Created by windows on 2023/3/2.
//

#include "Solution888.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

vector<int> Solution::fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes) {
    int aliceSum = 0, bobSum = 0;
    unordered_set<int> set;
    for (int num : aliceSizes) {
        aliceSum += num;
        set.insert(num);
    }
    for (int num : bobSizes) {
        bobSum += num;
    }
    int sub = bobSum - aliceSum;
    for (int num : bobSizes) {
        if (set.count(num + sub)){
            return {num + sub, num};
        }
    }
    return {-1, -1};
}
