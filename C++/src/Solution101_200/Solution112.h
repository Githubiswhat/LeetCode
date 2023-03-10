//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION112_H
#define C___SOLUTION112_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution112{
public:
    bool hasPathSum(TreeNode* root, int targetSum);

    bool dfs(TreeNode *root, int targetSum, int sum);
};


#endif //C___SOLUTION112_H
