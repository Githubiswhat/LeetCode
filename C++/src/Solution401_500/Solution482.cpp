//
// Created by windows on 2023/3/2.
//

#include "Solution482.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <algorithm>

string Solution482::licenseKeyFormatting(string s, int k) {
    int count = 0;
    string ans = "";
    for (int i = s.size() - 1; i >= 0 ; --i) {
        if (s[i] != '-'){
            ans.push_back(toupper(s[i]));
            count++;
            if (count % k == 0){
                ans.push_back('-');
            }
        }
    }
    if (ans.size() > 0 && ans.back() == '-'){
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
