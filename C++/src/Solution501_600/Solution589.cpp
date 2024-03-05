//
// Created by windows on 2023/3/2.
//

#include "Solution589.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
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

void dfs(Node* root, vector<int>& list){
if (root == nullptr){
  return;
}
list.push_back(root->val);
for (const auto &item : root->children){
  dfs(item, list);
}
}

vector<int> preorder(Node* root) {
  vector<int> list;
  dfs(root, list);
  return list;
}
