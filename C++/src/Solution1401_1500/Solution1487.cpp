//
// Created by windows on 2023/3/2.
//

#include "Solution1487.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_map>

vector<string> Solution1487::getFolderNames(vector<string> &names) {
    unordered_map<string, int> index;
    vector<string> res;
    for (const auto &name : names) {
        if (!index.count(name)) {
            res.push_back(name);
            index[name] = 1;
        } else {
            int k = index[name];
            while (index.count(addSuffix(name, k))) {
                k++;
            }
            res.push_back(addSuffix(name, k));
            index[name] = k + 1;
            index[addSuffix(name, k)] = 1;
        }
    }
    return res;

}

string Solution1487::addSuffix(string name, int k) {
    return name + "(" + to_string(k) + ")";
}
