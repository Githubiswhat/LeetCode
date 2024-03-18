//
// Created by windows on 2023/3/2.
//

#include "Solution107.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <map>
#include <functional>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> ans;
    map<int, vector<int>> hash;

    function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int depth){
        if (node == nullptr){
            return;
        }
        hash[depth].push_back(node->val);
        dfs(node->left, depth + 1);
        dfs(node->right, depth + 1);
    };
    dfs(root, 0);
    for (const auto &item: hash){
        ans.push_back(item.second);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
