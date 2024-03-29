//
// Created by windows on 2023/3/2.
//

#include "Solution530.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


#include <algorithm>
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

void dfs(TreeNode* root, int& pre, int& ans){
  if (root == nullptr){
    return ;
  }
  dfs(root->left, pre, ans);
  if (pre == -1){
    pre = root->val;
  } else{
    ans = min(ans, root->val - pre);
    pre = root->val;
  }
  dfs(root->right, pre, ans);
}


int getMinimumDifference(TreeNode* root) {
  int ans = INT_MAX, pre = -1;
  dfs(root, pre, ans);
  return ans;
}
