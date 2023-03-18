//
// Created by windows on 2023/3/2.
//

#include "Solution6.h"

string Solution::convert(string s, int numRows) {
    if (numRows == 1){
        return s;
    }
    int n = s.length();
    string strs[numRows];
    for (int i = 0; i < numRows; ++i) {
        strs[i] = "";
    }
    int count = 0;
    int num = 1;
    for (int i = 0; i < n ; ++i) {
        strs[count] += s[i];
        if (count == numRows - 1) {
            num = -1;
        }else if (count == 0) {
            num = 1;
        }
        count += num;
    }
    string res = "";
    for (int i = 0; i < numRows; ++i) {
        res += strs[i];
    }
    return res;
}
