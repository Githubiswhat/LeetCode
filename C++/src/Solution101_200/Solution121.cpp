//
// Created by windows on 2023/3/1.
//

#include "Solution121.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution121::maxProfit(vector<int> &prices) {
    int maxProfit = 0;
    int maxValue = 0;
    for (int i = prices.size() - 1; i >= 0; i--){
        if (prices[i] > maxValue) {
            maxValue = prices[i];
        }else {
            if (maxValue - prices[i] > maxProfit){
                maxProfit = maxValue - prices[i];
            }
        }
    }
    return maxProfit;
}
