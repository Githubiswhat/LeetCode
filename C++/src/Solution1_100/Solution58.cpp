//
// Created by windows on 2023/3/2.
//

#include "Solution58.h"

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
