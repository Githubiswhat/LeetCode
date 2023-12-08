//
// Created by windows on 2023/3/2.
//

#include "Solution1466.h"
#include "vector"
#include <functional>
using namespace std;



int minReorder(int n, vector<vector<int>>& connections) {
  vector<vector<pair<int, bool>>> g(n);

  for (const auto &item : connections){
    g[item[0]].push_back(make_pair(item[1], true));
    g[item[1]].push_back(make_pair(item[0], false));
  }


  function<void(int, int, int&)> dfs = [&](int cur, int fa, int& count) {
    for (const auto &item : g[cur]){
      if (item.first != fa){
        if (item.second){
          count++;
        }
        dfs(item.first, cur, count);
      }
    }
  };

  int count = 0;
  dfs(0, -1, count);
  return count;
}
