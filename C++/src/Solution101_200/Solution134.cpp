//
// Created by windows on 2023/3/2.
//

#include "Solution134.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution::canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int i = 0;
    int n = gas.size();
    while (i < n){
        int cnt = 0;
        int totalGas = 0;
        int totalCost = 0;
        while (cnt < n){
            int j = (i + cnt) % n;
            totalGas += gas[j];
            totalCost += cost[j];
            if (totalCost > totalGas){
                break;
            }
            cnt++;
        }
        if (cnt == n){
            return i;
        }
        i = i + cnt + 1;
    }
    return -1;
}
