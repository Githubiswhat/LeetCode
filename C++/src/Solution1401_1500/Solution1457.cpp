//
// Created by windows on 2023/3/2.
//

#include "Solution1457.h"
#include <iostream>
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

int isPalindrome(vector<int> & counter){
    int count = 0;
    for (const auto &item : counter){
      if (item % 2 == 1){
        count++;
      }
    }
    return count <= 1;
}

int dfs (TreeNode *root, vector<int>& counter){
    if (root == nullptr){
      return 0;
    }
    counter[root->val]++;
    int res = 0;
    if (root->left == nullptr && root->right == nullptr){
      if (isPalindrome(counter)){
        res = 1;
      }
    }
    res += dfs(root->left, counter) + dfs(root->right, counter);
    counter[root->val]--;
    return res;
}


int pseudoPalindromicPaths (TreeNode* root) {
  vector<int> counter(10);
  return dfs(root, counter);
}