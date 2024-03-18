//
// Created by windows on 2023/3/2.
//

#include "Solution236.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr || root == p || root == q){
        return root;
    }
    TreeNode* left = lowestCommonAncestor(root->left, p , q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right){
        return root;
    }

    return left ? left : right;
}