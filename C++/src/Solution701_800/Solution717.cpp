//
// Created by windows on 2023/3/2.
//

#include "Solution717.h"

bool Solution717::isOneBitCharacter(vector<int> &bits) {
    int n = bits.size();
    for (int i = 0; i < n - 1; ++i) {
        if (bits[i] == 1){
            bits[i + 1] = -1;
        }
    }
    return bits[n - 1] == 0;
}
