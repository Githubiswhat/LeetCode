//
// Created by windows on 2023/3/2.
//

#include "Solution394.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    function<void(TreeNode*)> dfs = [&](TreeNode* node){
        if (node == nullptr){
            return;
        }
        dfs(node->left);
        ans.push_back(node->val);
        dfs(node->right);
    };
    dfs(root);
    return ans;
}