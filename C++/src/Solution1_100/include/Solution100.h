//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION100_H
#define C___SOLUTION100_H

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution100{
public:
    bool isSameTree(TreeNode* p, TreeNode* q);

    bool dfs(TreeNode *p, TreeNode *q);
};


#endif //C___SOLUTION100_H
