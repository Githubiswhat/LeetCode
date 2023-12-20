//
// Created by windows on 2023/3/2.
//

#include "Solution643.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

double Solution643::findMaxAverage(vector<int> &nums, int k) {
    double sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += nums[i];
    }
    double avg = sum / k;
    for (int i = k; i < nums.size(); ++i) {
        sum = sum - nums[i - k] + nums[i];
        if (sum / k > avg) {
            avg = sum / k;
        }
    }
    return avg;
}
