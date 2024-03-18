//
// Created by windows on 2023/3/2.
//

#include "Solution1962.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>

using namespace std;


int minStoneSum(vector<int>& piles, int k) {
    priority_queue<int> pq(piles.begin(), piles.end());
    for (int i = 0; i < k; i++) {
        int pile = pq.top();
        pq.pop();
        pile -= pile / 2;
        pq.push(pile);
    }
    int sum = 0;
    while (!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    return sum;
}
