//
// Created by windows on 2023/3/2.
//

#include "Solution693.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool hasAlternatingBits(int n) {
    int pre = n & 1;
    n >>= 1;
    while (n) {
        if ((n & 1) == pre) {
            return false;
        }
        pre = n & 1;
        n >>= 1;
    }
    return true;
}
