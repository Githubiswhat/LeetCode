//
// Created by windows on 2023/3/2.
//

#include "Solution58.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int Solution58::lengthOfLastWord(string s) {
    int len = 0;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == ' '){
        i--;
    }
    while (i >= 0 && s[i] != ' '){
        i--;
        len++;
    }
    return len;
}
