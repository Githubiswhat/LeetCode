//
// Created by windows on 2023/3/2.
//

#include "Solution455.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

int Solution455::findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    for (int num : g) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= num){
                count++;
                s[i] = 0;
                break;
            }
        }
    }
    return count;
}
