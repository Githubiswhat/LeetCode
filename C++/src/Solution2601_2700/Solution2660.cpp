//
// Created by windows on 2023/3/2.
//

#include "Solution2660.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


int isWinner(vector<int>& player1, vector<int>& player2) {
    auto score = [&](vector<int> & player){
        int doubleScore = 0;
        int res = 0;
        for (const auto &item: player){
            if (doubleScore > 0){
                res += item;
                doubleScore--;
            }
            if (item == 10){
                doubleScore = 2;
            }
            res += item;
        }
        return res;
    };

    int a = score(player1);
    int b = score(player2);
    if (a == b) return 0;
    return a > b ? 1 : 2;
}