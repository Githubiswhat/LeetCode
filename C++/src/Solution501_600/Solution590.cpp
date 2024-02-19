//
// Created by windows on 2023/3/2.
//

#include "Solution590.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


// Definition for a Node.
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

vector<int> postorder(Node* root) {
  vector<int> res;
  function<void(Node*)> dfs = [&](Node* root) {
    if (!root) return;
    for (auto child : root->children) {
      dfs(child);
    }
    res.push_back(root->val);
  };
  dfs(root);
  return res;
}