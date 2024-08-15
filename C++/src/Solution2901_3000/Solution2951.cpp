//
// Created by windows on 2023/3/2.
//

#include "Solution2951.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> findPeaks(vector<int>& mountain) {
    vector<int> res;
    int n = mountain.size();
    for(int i = 1; i < n - 1; i++){
        if(mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]){
            res.push_back(i);
        }
    }
    return res;
}