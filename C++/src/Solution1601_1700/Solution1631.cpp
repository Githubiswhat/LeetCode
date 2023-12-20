//
// Created by windows on 2023/3/2.
//

#include "Solution1631.h"
#include "vector"
#include <numeric>
#include <valarray>
using namespace std;

class UnionFind {
public:
  int n ;
  vector<int> parent;

  explicit UnionFind(int _n) : n(_n) , parent(n){
    iota(parent.begin(), parent.end(), 0);
  }

  int findParent(int x){
    while (parent[x] != x){
      parent[x] = parent[parent[x]]; // 路径压缩优化
      x = parent[x];
    }
    return parent[x];
  }

  void unite(int x, int y){
    x = findParent(x);
    y = findParent(y);
    if (x == y){
      return;
    }
    parent[x] = y;
    n--;
  }

  bool connected(int x, int y){
    x = findParent(x);
    y = findParent(y);
    return x == y;
  }

};

int minimumEffortPath(vector<vector<int>>& heights) {
  int m = heights.size();
  int n = heights[0].size();

  vector<tuple<int, int, int>> edges;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      int pos = i * n + j;
      if (i < m){
        edges.emplace_back(abs(heights[i + 1][j] - heights[i][j]), pos, pos + n);
      }
      if (j < n){
        edges.emplace_back(abs(heights[i][j + 1] - heights[i][j]), pos, pos + 1);
      }
    }
  }

  sort(edges.begin(), edges.end(), [](auto &e1, auto &e2){
    auto&&[v1, x1, y1] = e1;
    auto&&[v2, x2, y2] = e2;
    return v1 < v2;
  });

  UnionFind unionFind(m * n);
  int ans = 0;
  for (const auto &[v, x, y] : edges){
    unionFind.unite(x, y);
    if (unionFind.connected(0, m * n - 1)){
      ans = v;
      return ans;
    }
  }
  return ans;
}



