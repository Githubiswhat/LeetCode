//
// Created by windows on 2023/3/2.
//

//#include "Solution2846.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


//vector<int> minOperationsQueries(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
//  vector<vector<pair<int, int>>> joints(n);
//
//  for (const auto &item : edges){
//    joints[item[0]].push_back({item[1], item[2]});
//    joints[item[1]].push_back({item[0], item[2]});
//  }
//
//  function<bool(int, int, vector<int>&, unordered_set<int>&)> dfs = [&](int index, int target, vector<int>& list, unordered_set<int>& visit) {
//    if (index == target){
//      return true;
//    }
//    visit.emplace(index);
//    for (int i = 0; i < joints[index].size(); ++i) {
//      if (visit.count(joints[index][i].first))
//        continue;
//      list.push_back(joints[index][i].second);
//      if (dfs(joints[index][i].first, target, list, visit)){
//        return true;
//      }
//      list.pop_back();
//    }
//    visit.erase(index);
//    return false;
//  };
//
//  vector<int> res;
//  for (const auto &item : queries){
//    vector<int> list;
//    unordered_set<int> visited;
//    dfs(item[0], item[1], list, visited);
//    unordered_map<int, int> hash;
//    int maxVal = 0;
//    for (const auto &cost : list){
//      hash[cost]++;
//      maxVal = max(maxVal, hash[cost]);
//    }
//    res.push_back(list.size() - maxVal);
//  }
//  return res;
//}
//

//int main() {
//  int n = 8;
//  vector<vector<int>> edges = {{1, 2, 6}, {1, 3, 4}, {2, 4, 6}, {2, 5, 3}, {3, 6, 6}, {3, 0, 8}, {7, 0, 2}};
//  vector<vector<int>> queries = {{4, 6}, {0, 4}, {6, 5}, {7, 4}};
//
//  vector<int> result = minOperationsQueries(n, edges, queries);
//
//  // 输出结果
//  for (int val : result) {
//    cout << val << " ";
//  }
//
//  return 0;
//}

//class TreeAncestor {
//  vector<int> depth;
//  vector<vector<int>> pa;
//public:
//  TreeAncestor(vector<pair<int, int>> &edges) {
//    int n = edges.size() + 1;
//    int m = 32 - __builtin_clz(n); // n 的二进制长度
//    vector<vector<int>> g(n);
//    for (auto [x, y]: edges) { // 节点编号从 0 开始
//      g[x].push_back(y);
//      g[y].push_back(x);
//    }
//
//    depth.resize(n);
//    pa.resize(n, vector<int>(m, -1));
//    function<void(int, int)> dfs = [&](int x, int fa) {
//      pa[x][0] = fa;
//      for (int y: g[x]) {
//        if (y != fa) {
//          depth[y] = depth[x] + 1;
//          dfs(y, x);
//        }
//      }
//    };
//    dfs(0, -1);
//
//    for (int i = 0; i < m - 1; i++)
//      for (int x = 0; x < n; x++)
//        if (int p = pa[x][i]; p != -1)
//          pa[x][i + 1] = pa[p][i];
//  }
//
//  int get_kth_ancestor(int node, int k) {
//    for (; k; k &= k - 1)
//      node = pa[node][__builtin_ctz(k)];
//    return node;
//  }
//
//  // 返回 x 和 y 的最近公共祖先（节点编号从 0 开始）
//  int get_lca(int x, int y) {
//    if (depth[x] > depth[y])
//      swap(x, y);
//    // 使 y 和 x 在同一深度
//    y = get_kth_ancestor(y, depth[y] - depth[x]);
//    if (y == x)
//      return x;
//    for (int i = pa[x].size() - 1; i >= 0; i--) {
//      int px = pa[x][i], py = pa[y][i];
//      if (px != py) {
//        x = px;
//        y = py;
//      }
//    }
//    return pa[x][0];
//  }
//};
//
//int main() {
//  // 构建树结构
//  vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 3}, {2, 4}, {3, 5}};
//  TreeAncestor tree(edges);
//
//  // 测试 get_kth_ancestor
//  cout << "3rd ancestor of node 5: " << tree.get_kth_ancestor(5, 3) << endl;
//
//  // 测试 get_lca
//  int lca = tree.get_lca(3, 5);
//  cout << "Lowest Common Ancestor of nodes 3 and 5: " << lca << endl;
//
//  return 0;
//}

vector<int> minOperationsQueries(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
  vector<vector<pair<int, int>>> g(n);

  for (const auto &edge : edges){
    g[edge[0]].emplace_back(edge[1], edge[2] - 1);
    g[edge[1]].emplace_back(edge[0], edge[2] - 1);
  }

  int m = 32 - __builtin_clz(n);
  vector<vector<int>> pa(n, vector<int>(m, -1));
  vector<vector<vector<int>>> count(n, vector<vector<int>>(m, vector<int>(26)));

  vector<int> depth(n);
  function<void(int, int)> dfs = [&](int x, int fa){
    pa[x][0] = fa;
    for (const auto [y, w] : g[x]){
      if (y != fa){
        count[y][0][w] = 1;
        depth[y] = depth[x] + 1;
        dfs(y, x);
      }
    }
  };
  dfs(0, -1);



  for (int i = 0; i < m - 1; i++){
    for (int x = 0; x < n; ++x) {
      int p = pa[x][i];
      if (p != -1){
        int pp = pa[p][i];
        pa[x][i + 1] = pp;
        for (int j = 0; j < 26; ++j) {
          count[x][i + 1][j] = count[x][i][j] + count[p][i][j];
        }
      }
    }
  }


  vector<int> ans;
  for (const auto &q : queries){
    int x = q[0], y = q[1];
    int path_len = depth[x] + depth[y];

    int cw[26]{};

    if (depth[x] > depth[y]){
      swap(x, y);
    }

    // 让 y 和 x 在同一深度
    for (int k = depth[y] - depth[x]; k; k &= k - 1) {
      int i = __builtin_ctz(k);
      int p = pa[y][i];
      for (int j = 0; j < 26; ++j) {
        cw[j] += count[y][i][j];
      }
      y = p;
    }


    if (y != x){
      for (int i = m - 1; i >= 0 ; --i) {
        int px = pa[x][i], py = pa[y][i];
        if (px != py){
          for (int j = 0; j < 26; ++j) {
            cw[j] += count[x][i][j] + count[y][i][j];
          }
          x = px;
          y = py;
        }
      }
      for (int j = 0; j < 26; j++) {
        cw[j] += count[x][0][j] + count[y][0][j];
      }
      x = pa[x][0];
    }

    int lca = x;
    path_len -= depth[lca] * 2;
    ans.push_back(path_len - *max_element(cw, cw + 26));
  }
  return ans;
}


int main() {
  // 构建测试数据
  int n = 7;  // 节点数量
  vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 1}, {2, 3, 1}, {3, 4, 2}, {4, 5, 2}, {5, 6, 2}};
  vector<vector<int>> queries = {{0, 3}, {3, 6}, {2, 6}, {0, 6}};

  // 调用你的函数进行计算
  vector<int> result = minOperationsQueries(n, edges, queries);

  // 输出计算结果
  cout << "Result: ";
  for (int res : result) {
    cout << res << " ";
  }
  cout << endl;

  return 0;
}






