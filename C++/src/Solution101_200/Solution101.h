//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION101_H
#define C___SOLUTION101_H


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution101{
public:
    bool isSymmetric(TreeNode* root);

    bool dfs(TreeNode *left_t, TreeNode *right_t);
};


#endif //C___SOLUTION101_H
