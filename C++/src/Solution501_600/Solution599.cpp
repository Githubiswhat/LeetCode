//
// Created by windows on 2023/3/2.
//

#include "Solution599.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

vector<string> Solution599::findRestaurant(vector<string> &list1, vector<string> &list2) {
    unordered_map<string, int> hashtable;

    for (int i = 0; i < list1.size(); ++i) {
        hashtable[list1[i]] = i;
    }
    int min = 2000;
    vector<string> res;
    for (int i = 0; i < list2.size(); ++i) {
        if (hashtable.count(list2[i])){
            if (hashtable[list2[i]] + i < min){
                res.clear();
                min = hashtable[list2[i]] + i;
                res.push_back(list2[i]);
            } else if (hashtable[list2[i]] + i == min){
                res.push_back(list2[i]);
            }
        }
    }
    return res;
}
