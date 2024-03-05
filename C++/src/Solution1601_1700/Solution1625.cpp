//
// Created by windows on 2023/3/10.
//

#include "Solution1625.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <queue>
#include <unordered_set>

string Solution::findLexSmallestString(string s, int a, int b) {
    int n = s.length();
    queue<string> q{{s}};
    unordered_set<string> set{{s}};
    string ans = s;
    while (!q.empty()){
        string s = q.front();
        q.pop();
        ans = min(ans, s);
        string t1 = s;
        for (int i = 1; i < n; i+=2) {
            t1[i] = (s[i] + a - '0') % 10 + '0';
        }
        string t2 = s.substr(n - b) + s.substr(0, n - b);
        for(auto& t : {t1, t2}){
            if (!set.count(t)){
                set.insert(t);
                q.emplace(t);
            }
        }
    }
    return ans;
}
