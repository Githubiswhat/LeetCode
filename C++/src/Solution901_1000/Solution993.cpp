//
// Created by windows on 2023/3/2.
//

#include "Solution993.h"
#include <functional>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


bool isCousins(TreeNode* root, int x, int y) {
  TreeNode* father = nullptr;
  int depth = 0;
  bool ans = false;
  function<bool(TreeNode*, TreeNode*, int)> dfs = [&](TreeNode* node, TreeNode* fa, int d) {
    if (node == nullptr) return false;
    if (node->val == x || node->val == y){
      if (depth){
        ans = depth == d && father == fa;
        return true;
      }
      depth = d;
      father = fa;
    }
    return dfs(node->left, node, d + 1) || dfs(node->right, node, d + 1);
  };

  dfs(root, nullptr, 0);
  return ans;
}
