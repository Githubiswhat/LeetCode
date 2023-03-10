//
// Created by windows on 2023/3/2.
//

#include "Solution100.h"

bool Solution100::isSameTree(TreeNode *p, TreeNode *q) {
    return dfs(p, q);
}


bool Solution100::dfs(TreeNode *p, TreeNode *q){
    if (p == nullptr || q == nullptr){
        if (p == nullptr && q  == nullptr){
            return true;
        }
        return false;
    }
    if (p->val == q->val){
        bool left = dfs(p->left, q->left);
        bool right = dfs(p->right, q->right);
        return left && right;
    }
    return false;
}