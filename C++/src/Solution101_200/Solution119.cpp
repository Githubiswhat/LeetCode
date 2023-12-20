//
// Created by windows on 2023/3/1.
//

#include "Solution119.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> Solution119::getRow(int rowIndex) {
    vector<int> res{1};
    for (int i = 1; i <= rowIndex; ++i) {
        vector<int> row(i + 1, 0);
        row[0] = 1;
        for (int j = 1; j < i; ++j) {
            row[j] = res[j] + res[j - 1];
        }
        row[i] = 1;
        res = row;
    }
    return res;
}
