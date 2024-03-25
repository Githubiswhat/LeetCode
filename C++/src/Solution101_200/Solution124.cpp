//
// Created by windows on 2023/3/2.
//

#include "Solution124.h"
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


int maxPathSum(TreeNode* root) {
  int res = INT_MIN;
  function<int(TreeNode* root)> dfs = [&](TreeNode* root){
    if (!root){
      return 0;
    }
    int left = dfs(root->left);
    int right= dfs(root->right);
    res = max(res, left + right + root->val);
    return max(max(left, right) + root->val, 0);
  };
  dfs(root);
  return res;
}