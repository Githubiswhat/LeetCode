//
// Created by windows on 2023/3/2.
//

#include "Solution2469.h"

vector<double> Solution::convertTemperature(double celsius) {
    return {celsius + 273.15, celsius * 1.80 +32.00};
}
