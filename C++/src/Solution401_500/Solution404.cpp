//
// Created by windows on 2023/3/2.
//

#include "Solution404.h"
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


int sumOfLeftLeaves(TreeNode* root) {
    if (root == nullptr){
      return 0;
    }
    int sum = 0;
    if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr){
      sum += root->left->val;
    }
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right) + sum;
}