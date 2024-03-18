//
// Created by windows on 2023/3/2.
//

#include "Solution2706.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;


int buyChoco(vector<int>& prices, int money) {
    int fi = INT_MAX, se = INT_MAX;
    for (auto p : prices) {
        if (p < fi) {
            se = fi;
            fi = p;
        } else if (p < se) {
            se = p;
        }
    }
    return money < fi + se ? money : money - fi - se;
}