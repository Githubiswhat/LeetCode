//
// Created by windows on 2023/3/2.
//

#include "Solution605.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool Solution605::canPlaceFlowers(vector<int> &flowerbed, int n) {
    for (int i = 0; i < flowerbed.size(); ++i) {
        if (flowerbed[i] == 0 && (i - 1 < 0 ||(i - 1 > 0 && flowerbed[i - 1] == 0)) && ((i + 1 < flowerbed.size() && flowerbed[i + 1] == 0) || i + 1 >= flowerbed.size())) {
            flowerbed[i] = 1;
            n--;
        }
    }
    return n <= 0;
}
