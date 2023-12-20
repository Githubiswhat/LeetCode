//
// Created by windows on 2023/3/2.
//

#include "Solution661.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<int>> Solution661::imageSmoother(vector<vector<int>> &img) {
    int m = img.size();
    int n = img[0].size();
    vector<vector<int>> res(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int num = 0, sum = 0;
            for (int k = i - 1; k <= i + 1; ++k) {
                for (int l = j - 1; l <= j + 1; ++l) {
                    if (k >= 0 && k < m && l >= 0 && l < n){
                        num++;
                        sum += img[k][l];
                    }
                }
            }
            res[i][j] = sum / num;
        }
    }
    return res;
}
