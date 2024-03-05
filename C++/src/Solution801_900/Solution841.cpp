//
// Created by windows on 2023/3/2.
//

#include "Solution841.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <queue>

bool Solution::canVisitAllRooms(vector<vector<int>> &rooms) {
    int n = rooms.size();
    queue<int> queue;
    for (int key : rooms[0]) {
        queue.push(key);
    }
    vector<bool> visited(n, false);
    visited[0] = true;
    int count = 1;
    while (!queue.empty()) {
        int roomKey = queue.front();
        queue.pop();
        if (visited[roomKey]) {
            continue;
        }
        count++;
        visited[roomKey] = true;
        for (int key : rooms[roomKey]) {
            if (!visited[key]) {
                queue.push(key);
            }
        }
    }
    return count == n;
}
