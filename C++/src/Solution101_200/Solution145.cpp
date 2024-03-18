//
// Created by windows on 2023/3/2.
//

#include "Solution145.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

//vector<int> Solution145::postorderTraversal(TreeNode *root) {
//    vector<int> result;
//    dfs(root, result);
//    return result;
//}
//
//void Solution145::dfs(TreeNode *root, vector<int> &res){
//    if (root == nullptr){
//        return;
//    }
//    dfs(root->left, res);
//    dfs(root->right, res);
//    res.push_back(root->val);
//}




vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    function<void(TreeNode*)> dfs = [&](TreeNode* node){
        if (node == nullptr){
            return;
        }
        dfs(node->left);
        dfs(node->right);
        ans.push_back(node->val);
    };
    dfs(root);
    return ans;
}


