//
// Created by windows on 2023/3/2.
//

#include "Solution1894.h"

int Solution1894::chalkReplacer(vector<int> &chalk, int k) {
    int n = chalk.size();
    long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += chalk[i];
    }
    k = k % sum;
    int i = 0;
    while (k > 0){
        if (k < chalk[i]){
            return i;
        }
        k -= chalk[i];
        i = ++i % n;
    }
    return i;
}
