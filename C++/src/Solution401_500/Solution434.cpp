//
// Created by windows on 2023/3/2.
//

#include "Solution434.h"

int Solution434::countSegments(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ((i == 0 || s[i- 1] == ' ') && s[i] != ' '){
            result++;
        }
    }
    return result;
}
