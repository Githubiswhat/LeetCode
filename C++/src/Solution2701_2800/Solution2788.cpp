//
// Created by windows on 2023/3/2.
//

#include "Solution2788.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
    vector<string> res;

    for (auto &word: words){
        string str = "";
        word += separator;
        for (const auto &item: word){
            if (item != separator){
                str += item;
            } else{
                if (str.length() > 0){
                    res.push_back(str);
                    str = "";
                }
            }
        }
    }
    return res;
}