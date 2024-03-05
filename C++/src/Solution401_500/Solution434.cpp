//
// Created by windows on 2023/3/2.
//

#include "Solution434.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution434::countSegments(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ((i == 0 || s[i- 1] == ' ') && s[i] != ' '){
            result++;
        }
    }
    return result;
}
