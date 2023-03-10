//
// Created by windows on 2023/3/2.
//

#include "Solution733.h"

vector<vector<int>> Solution733::floodFill(vector<vector<int>> &image, int sr, int sc, int color) {
    int currColor = image[sr][sc];
    if (currColor != color) {
        dfs(image, sr, sc, currColor, color);
    }
    return image;
}

void Solution733::dfs(vector<vector<int>> &image, int x, int y, int currColor, int color) {
    if (image[x][y] == currColor) {
        image[x][y] = color;
        for (int i = 0; i < 4; i++) {
            int mx = x + dx[i], my = y + dy[i];
            if (mx >= 0 && mx < image.size() && my >= 0 && my < image[0].size()) {
                dfs(image, mx, my, currColor, color);
            }
        }
    }
}

