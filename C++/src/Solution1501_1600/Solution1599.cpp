//
// Created by windows on 2023/3/2.
//

#include "Solution1599.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost) {
    if (runningCost >= 4 * boardingCost) return -1;
    int max = -1;
    int count = 0;
    int left = 0;
    int n = customers.size();
    int i = 0;
    int t = 0;
    while (left > 0 || i < n){
        left += i < n ? customers[i] : 0;
        int up = min(4, left);
        left -= up;
        t += up * boardingCost - runningCost;
        if (t > max){
            max = t;
            count = i;
        }
    }
    return count;
}