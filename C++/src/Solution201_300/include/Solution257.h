//
// Created by windows on 2023/3/2.
//

#ifndef C___SOLUTION257_H
#define C___SOLUTION257_H

#include <string>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution257{
public:
    vector<string> binaryTreePaths(TreeNode* root);

    void dfs(TreeNode *node, string path, vector<string>& res);
};


#endif //C___SOLUTION257_H
