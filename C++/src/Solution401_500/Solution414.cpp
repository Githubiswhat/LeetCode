//
// Created by windows on 2023/3/2.
//

#include <set>
#include "Solution414.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution414::thirdMax(vector<int> &nums) {
    set<int> s;
    for (int num : nums) {
        s.insert(num);
        if (s.size() > 3){
            s.erase(s.begin());
        }
    }
    return s.size() == 3 ? *s.begin() : *s.rbegin();
}
