//
// Created by windows on 2023/3/2.
//

#include "Solution1641.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <string>
using namespace std;

void Solution::process(int n, string s){
    count++;
    if (n == 0){
        return;
    }
    for (int i = 0; i < 5; ++i) {
        if (s.length() == 0){
            process(n - 1, s + to_string(i));
        }else if (s[s.length() - 1] > i + '0'){
            process(n - 1, s + to_string(i));
        }
    }
}


int Solution::countVowelStrings(int n) {
    process(n, "");
    return count;
}
