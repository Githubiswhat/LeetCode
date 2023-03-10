//
// Created by windows on 2023/3/2.
//

#include "Solution14.h"

string Solution14::longestCommonPrefix(vector<string> &strs) {
    string res = "";
    int index = 0;
    while (true){
        if (index == strs[0].size()) break;
        char c = strs[0][index];
        for (int i = 1; i < strs.size(); ++i) {
            if (index == strs[i].size() || c != strs[i][index]){
                return res;
            }
        }
        index++;
        res += c;
    }
    return res;
}
