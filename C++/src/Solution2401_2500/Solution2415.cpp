//
// Created by windows on 2023/3/2.
//

#include "Solution2415.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
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

#include "vector"
#include <algorithm>
#include <map>
using namespace std;

void dfs(TreeNode* root, map<int, vector<TreeNode*>>& map, int level){
    if (root == nullptr){
      return;
    }
    map[level].push_back(root);
    dfs(root->left, map, level + 1);
    dfs(root->right, map, level + 1);
}



TreeNode* reverseOddLevels(TreeNode* root) {
    map<int, vector<TreeNode*>> map;
    dfs(root,map, 0);
    for (const auto &item : map){
      if (item.first % 2 == 1) {
        std::vector<TreeNode*> tempVector = item.second; // 复制要反转的 vector
        // 反转复制出来的 vector
        std::reverse(tempVector.begin(), tempVector.end());
        // 将反转后的 vector 赋值回原位置
        map[item.first] = tempVector;
      }
    }

    for (const auto &item : map){
      std::vector<TreeNode*> tempVector = item.second; // 复制要反转的 vector
      for (int i = 0; i < tempVector.size(); ++i) {
        if (map.find(item.first + 1) != map.end()){
          tempVector[i]->left = map[item.first + 1][i * 2];
          tempVector[i]->right = map[item.first + 1][i * 2 + 1];
        }
      }
    }
    return map[0][0];
}
