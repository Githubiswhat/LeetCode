//
// Created by windows on 2023/3/2.
//

#include "Solution559.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

class Node {
public:
  int val;
  vector<Node*> children;

  Node() {}

  Node(int _val) {
    val = _val;
  }

  Node(int _val, vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

int maxDepth(Node* root) {
  int res = 0;
  function<void(Node*, int)> dfs = [&](Node* root, int depth) {
    if (!root) return;
    res = max(res, depth);
    for (auto child : root->children) {
      dfs(child, depth + 1);
    }
  };
  dfs(root, 1);
  return res;
}