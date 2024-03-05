//
// Created by windows on 2023/3/2.
//

#include "Solution598.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution598::maxCount(int m, int n, vector<vector<int>> &ops) {
    for (vector<int> op: ops) {
        if (m > op[0]){
            m = op[0];
        }
        if (n > op[1]){
            n = op[1];
        }
    }
    return n * m;
}
