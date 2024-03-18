//
// Created by windows on 2023/3/2.
//

#include "Solution2746.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//int minimizeConcatenatedLength(vector<string>& words) {
//    string str = words[0];
//    int n = words.size();
//    for (int i = 1; i < n; ++i) {
//        int length = str.size();
//        if (str[length - 1] == words[i][0]){
//            str += words[i].substr(1);
//        }else if (str[0] == words[i][words[i].length() - 1]){
//            str = words[i] + str.substr(1);
//        } else if(i + 1 < n && words[i]){
//            str += words[i];
//        }
//    }
//    return str.length();
//}