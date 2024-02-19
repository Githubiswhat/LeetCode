//
// Created by windows on 2023/3/2.
//

#include "Solution1483.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

//class TreeAncestor {
//public:
//  vector<int> pa;
//  TreeAncestor(int n, vector<int>& parent) {
//    pa.resize(n);
//    for (int i = 0; i < n; ++i) {
//      pa[i] = parent[i];
//    }
//  }
//
//  int getKthAncestor(int node, int k) {
//    for (int i = 0; i < k; ++i) {
//      if (node == -1){
//        return -1;
//      }
//      node = pa[node];
//    }
//    return node;
//  }
//};

class TreeAncestor {
public:
  vector<vector<int>> pa;
  TreeAncestor(int n, vector<int>& parent) {
    int m = 32 - __builtin_clz(n);
    pa.resize(n, vector<int>(m, -1));
    for (int i = 0; i < n; ++i) {
      pa[i][0] = parent[i];
    }
    for (int i = 0; i < m - 1; ++i) {
      for (int x = 0; x < n; ++x) {
        if (int p = pa[x][i]; p != -1){
          pa[x][i + 1] = pa[p][i];
        }
      }
    }
  }

  int getKthAncestor(int node, int k) {
    for (int i = 0; i < 32 - __builtin_clz(k); ++i) {
      if ((k >> i) & 1){
        node = pa[node][i];
        if (node < 0){
          break;
        }
      }
    }
    return node;
  }
};











