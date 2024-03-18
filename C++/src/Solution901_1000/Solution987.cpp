//
// Created by windows on 2023/3/2.
//

#include "Solution987.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <map>
#include <queue>
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


vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> ans;
    map<int, vector<pair<int, int>>> hash;
    function<void(TreeNode*, int, int)> dfs = [&](TreeNode* node, int depth, int index){
        if (node == nullptr){
            return;
        }
        hash[index].emplace_back(depth, node->val);
        dfs(node->left, depth + 1, index - 1);
        dfs(node->right, depth + 1, index + 1);
    };
    dfs(root, 0, 0);
    for (auto &item: hash){
        sort(item.second.begin(), item.second.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            if (a.first != b.first) {
                return a.first < b.first;
            } else {
                return a.second < b.second;
            }
        });
        vector<int> temp;
        for (const auto &pair: item.second){
            temp.push_back(pair.second);
        }
        ans.push_back(temp);
    }
    return ans;
}