//
// Created by windows on 2023/3/2.
//

#include <set>
#include "Solution414.h"

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
