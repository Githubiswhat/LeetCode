//
// Created by windows on 2023/3/2.
//

#include "Solution520.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

bool Solution520::detectCapitalUse(string word) {
    int n = word.length();
    if (word[0] >= 'a'){
        for (int i = 1; i < n; ++i) {
            if (word[i] < 'a'){
                return false;
            }
        }
    } else{
        if (word[1] >= 'a'){
            for (int i = 2; i < n; ++i){
                if (word[i] < 'a'){
                    return false;
                }
            }
        } else{
            for (int i = 2; i < n; ++i){
                if (word[i] >= 'a'){
                    return false;
                }
            }
        }
    }
    return true;
}
