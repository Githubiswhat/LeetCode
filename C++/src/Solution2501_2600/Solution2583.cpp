//
// Created by windows on 2023/3/2.
//

#include "Solution2583.h"
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

long long kthLargestLevelSum(TreeNode* root, int k) {
  unordered_map<int, long long > hash;

  function<void(TreeNode*, int)> dfs = [&](TreeNode* root, int level) {
    if (root == nullptr){
      return ;
    }
    hash[level] += root->val;
    dfs(root->left, level + 1);
    dfs(root->right, level + 1);
  };
  dfs(root, 1);
  if (k > hash.size()){
    return -1;
  }
  vector<long long> list;
  for (const auto &item : hash){
    list.push_back(item.second);
  }
  sort(list.begin(), list.end());

  return list[list.size() - k];
}