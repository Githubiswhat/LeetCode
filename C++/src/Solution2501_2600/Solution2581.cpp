//
// Created by windows on 2023/3/2.
//

//#include "Solution2581.h"
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;



int rootCount(vector<vector<int>>& edges, vector<vector<int>>& guesses, int k) {
  int n = edges.size();
  vector<vector<int>> g(n + 1);
  for (const auto &item : edges){
    g[item[0]].push_back(item[1]);
    g[item[1]].push_back(item[0]);
  }

  set<long long> set;
  for (const auto &item : guesses){
    set.emplace((long long) item[0] << 32 | item[1]);
  }

  int count0 = 0;
  function<void(int, int)> dfs = [&](int x, int fa) {
    for (const auto &y : g[x]){
      if (y != fa){
        count0 += set.count((long long) x << 32 | y);
        dfs(y, x);
      }
    }
  };
  dfs(0, -1);

  int ans = 0;
  function<void(int, int, int)> reRoot = [&](int x, int fa, int count) {
    if (count >= k){
      ans++;
    }
    for (const auto &y : g[x]){
      if (y != fa){
        reRoot(y, x, count - set.count((long long) x << 32 | y) + set.count((long long) y << 32 | x));
      }
    }
  };
  reRoot(0, - 1, count0);
  return ans;
}

int main() {
  vector<vector<int>> edges = {{0,1},{1,2},{2,3},{3,4}};
  vector<vector<int>> guesses = {{1,0},{3,4},{2,1},{3,2}};
  int k = 1;
  int result = rootCount(edges, guesses, k);
  cout << "满足条件的树的数量为: " << result << endl;
  return 0;
}