//
// Created by windows on 2023/3/2.
//

#include "Solution717.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool Solution717::isOneBitCharacter(vector<int> &bits) {
    int n = bits.size();
    for (int i = 0; i < n - 1; ++i) {
        if (bits[i] == 1){
            bits[i + 1] = -1;
        }
    }
    return bits[n - 1] == 0;
}
