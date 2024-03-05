//
// Created by windows on 2023/3/2.
//

#include "Solution575.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

int Solution575::distributeCandies(vector<int> &candyType) {
    int n = candyType.size();
    unordered_set<int> hashset;
    for (int i = 0; i < n; ++i) {
        hashset.insert(candyType[i]);
    }
    return hashset.size() >= n / 2 ? n / 2: hashset.size();
}
