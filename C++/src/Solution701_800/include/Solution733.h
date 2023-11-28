//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION733_H
#define C___SOLUTION733_H

#include <vector>
using namespace std;

class Solution733{
public:
    const int dx[4] = {1, 0, 0, -1};
    const int dy[4] = {0, 1, -1, 0};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color);
    void dfs(vector<vector<int>> &image, int sr, int sc, int currColor, int color);

};


#endif //C___SOLUTION733_H
