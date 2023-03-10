//
// Created by windows on 2023/3/2.
//

#include "Solution101.h"

bool Solution101::isSymmetric(TreeNode *root) {
    if (root == nullptr){
        return true;
    }
    return dfs(root->left, root->right);
}

bool Solution101::dfs(TreeNode *left_t, TreeNode *right_t){
    if (left_t == nullptr || right_t == nullptr){
        if (left_t == nullptr && right_t == nullptr){
            return true;
        }
        return false;
    }
    if (left_t->val == right_t->val){
        bool left =  dfs(left_t->left, right_t-> right);
        bool right = dfs(left_t-> right, right_t-> left);
        return left && right;
    }
    return false;
}
