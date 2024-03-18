//
// Created by windows on 2023/3/2.
//

#include "Solution2292.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool canWinNim(int n) {
    return n % 4 != 0;
}