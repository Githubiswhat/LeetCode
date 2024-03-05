//
// Created by windows on 2023/3/2.
//

#include "Solution344.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

void Solution344::reverseString(vector<char> &s) {
    for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
