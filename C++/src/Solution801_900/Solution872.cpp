//
// Created by windows on 2023/3/2.
//

#include "Solution872.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
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

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
  function<void(TreeNode*, vector<int>&)> dfs = [&](TreeNode* root, vector<int>& l){
    if (!root){
      return ;
    }
    dfs(root->left, l);
    dfs(root->right, l);
    if (!root->left && !root->right){
      l.push_back(root->val);
    }
  };
  vector<int> l1, l2;
  dfs(root1, l1);
  dfs(root2, l2);
  if (l1.size() !=l2.size()) return false;
  for (int i = 0; i < l1.size(); ++i) {
    if (l1[i] != l2[i]){
      return false;
    }
  }
  return true;
}