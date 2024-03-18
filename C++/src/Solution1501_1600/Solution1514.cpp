//
// Created by windows on 2023/3/2.
//

//#include "Solution1514.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
using namespace std;

//double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
//  vector<vector<double>> g(n, vector<double>(n, 0)); // 存储边的成功概率
//  // 构建有向图
//  for (int i = 0; i < edges.size(); ++i) {
//    int from = edges[i][0];
//    int to = edges[i][1];
//    g[from][to] = succProb[i];
//    g[to][from] = succProb[i]; // 因为边是双向的，所以需要把双向都赋值
//  }
//
//  vector<double> possibility(n, 0); // 存储到每个节点的概率
//  vector<bool> done(n, false); // 标记每个节点是否已经处理过
//  possibility[start_node] = 1; // 起始节点的概率为1
//
//  while (true) {
//    int x = -1;
//    // 找到当前概率最大的未处理节点
//    for (int i = 0; i < n; ++i) {
//      if (!done[i] && (x == -1 || possibility[i] > possibility[x])) {
//        x = i;
//      }
//    }
//
//    // 如果没有未处理节点了，跳出循环
//    if (x == -1) {
//      break;
//    }
//
//    // 标记节点为已处理
//    done[x] = true;
//
//    // 更新与当前节点相连的节点的概率
//    for (int i = 0; i < n; ++i) {
//      if (g[x][i] > 0 && possibility[x] * g[x][i] > possibility[i]) {
//        possibility[i] = possibility[x] * g[x][i];
//      }
//    }
//  }
//
//  return possibility[end_node];
//}

class Solution {
public:
  double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<double, int>>> graph(n);
    for (int i = 0; i < edges.size(); i++) {
      auto& e = edges[i];
      graph[e[0]].emplace_back(succProb[i], e[1]);
      graph[e[1]].emplace_back(succProb[i], e[0]);
    }

    priority_queue<pair<double, int>> que;
    vector<double> prob(n, 0);

    que.emplace(1, start);
    prob[start] = 1;
    while (!que.empty()) {
      auto [pr, node] = que.top();
      que.pop();
      if (pr < prob[node]) {
        continue;
      }
      for (auto& [prNext, nodeNext] : graph[node]) {
        if (prob[nodeNext] < prob[node] * prNext) {
          prob[nodeNext] = prob[node] * prNext;
          que.emplace(prob[nodeNext], nodeNext);
        }
      }
    }
    return prob[end];
  }
};