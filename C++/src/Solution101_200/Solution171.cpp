//
// Created by windows on 2023/3/2.
//

#include "Solution171.h"

int Solution171::titleToNumber(string columnTitle) {
    int result = 0;
    for (char c : columnTitle) {
        result = result * 26 + (c- 'A' + 1);
    }
    return result;
}