//
// Created by windows on 2023/3/2.
//

#include "Solution1893.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

bool Solution1893::isCovered(vector<vector<int>> &ranges, int left, int right) {
    sort(ranges.begin(), ranges.end());
    for (auto range : ranges) {
        if (range[0] <= left && range[1] >= left){
            left = range[1] + 1;
        }
    }
    return left > right;
}
