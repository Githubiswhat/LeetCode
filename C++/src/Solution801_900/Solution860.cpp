//
// Created by windows on 2023/3/2.
//

#include "Solution860.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

bool Solution::lemonadeChange(vector<int> &bills) {
    unordered_map<int, int> map{{5, 0}, {10, 0}, {20, 0}};
    int n = bills.size();
    for (int i = 0; i < n; ++i) {
        if (bills[i] == 10){
            if (--map[5] < 0){
                return false;
            }
            map[10]++;
        }else if (bills[i] == 20){
            if (map[10] < 1){
                if (map[5] < 2){
                    return false;
                }
                map[5] -= 2;
            }else {
                if (map[5] < 1){
                    return false;
                }
                map[10]--;
                map[5]--;
            }
            map[20]++;
        } else{
            map[5]++;
        }
    }
    return true;
}
