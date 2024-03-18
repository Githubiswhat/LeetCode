//
// Created by windows on 2023/3/2.
//

#include "Solution1261.h"
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



class FindElements {
public:
  FindElements(TreeNode* root) {
    this->node = root;
    dfs(this->node, 0);
  }

  bool find(int target) {
    return find(this->node, target);
  }



private:
  TreeNode* node;
  void dfs(TreeNode* root, int val){
    if (root == nullptr){
      return;
    }
    root->val = val;
    if (root->left != nullptr){
      dfs(root->left, 2 * val + 1);
    }
    if (root->right != nullptr){
      dfs(root->right, 2 * val + 2);
    }
  }


  bool find(TreeNode* root, int val){
    if (root == nullptr){
      return false;
    }
    return root->val == val || find(root->left, val) || find(root->right, val);
  }
};