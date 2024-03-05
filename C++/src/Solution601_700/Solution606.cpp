//
// Created by windows on 2023/3/2.
//

#include "Solution606.h"
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


void dfs(TreeNode* root, string &s){
  if (root == nullptr){
    return;
  }
  s += to_string(root->val);
  if (root->left != nullptr){
    s += '(';
    dfs(root->left, s);
    s += ')';
  }
  if (root->left == nullptr && root->right != nullptr){
    s += "()";
  }
  if (root->right != nullptr){
    s += '(';
    dfs(root->right, s);
    s += ')';
  }
}

string tree2str(TreeNode* root) {
    string s = "";
    dfs(root, s);
    return s;
}
