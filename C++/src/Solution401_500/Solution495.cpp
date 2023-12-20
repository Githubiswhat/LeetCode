//
// Created by windows on 2023/3/2.
//

#include "Solution495.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution495::findPoisonedDuration(vector<int> &timeSeries, int duration) {
    int total = 0;
    for (int i = 1; i < timeSeries.size(); ++i) {
        if (timeSeries[i] - timeSeries[i - 1] < duration){
            total += timeSeries[i] - timeSeries[i - 1];
        }else{
            total += duration;
        }
    }
    return total + duration;
}
