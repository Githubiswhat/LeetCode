//
// Created by windows on 2023/3/2.
//

#include "Solution112.h"

bool Solution112::hasPathSum(TreeNode *root, int targetSum) {
    return dfs(root, targetSum, 0);
}


bool Solution112::dfs(TreeNode *root, int targetSum, int sum) {
    if (root == nullptr) return false;
    if (root-> left == nullptr && root->right == nullptr){
        return sum + root->val == targetSum;
    }
    bool left = dfs(root->left, targetSum, sum + root->val);
    bool right = dfs(root->right, targetSum, sum + root->val);
    return left || right;
}