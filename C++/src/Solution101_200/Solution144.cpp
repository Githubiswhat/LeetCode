//
// Created by windows on 2023/3/2.
//

#include "Solution144.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

//vector<int> Solution144::preorderTraversal(TreeNode *root) {
//    vector<int> res;
//    dfs(root, res);
//    return res;
//}
//
//void Solution144::dfs(TreeNode *root, vector<int> &res) {
//    if (root = nullptr){
//        return;
//    }
//    res.push_back(root->val);
//    dfs(root->left, res);
//    dfs(root->right, res);
//}



vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    function<void(TreeNode*)> dfs = [&](TreeNode* node){
        if (node == nullptr){
            return;
        }
        ans.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    };
    dfs(root);
    return ans;
}
