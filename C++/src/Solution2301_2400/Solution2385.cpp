//
// Created by windows on 2023/3/2.
//

//#include "Solution2385.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <queue>
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


TreeNode* fa[100001]; // 哈希表会超时，改用数组

class Solution {
    int start;
    TreeNode* start_node;

    void dfs(TreeNode* node, TreeNode* from) {
      if (node == nullptr) {
        return;
      }
      fa[node->val] = from; // 记录每个节点的父节点
      if (node->val == start) {
        start_node = node; // 找到 start
      }
      dfs(node->left, node);
      dfs(node->right, node);
    }

    int maxDepth(TreeNode* node, TreeNode* from) {
      if (node == nullptr) {
        return -1; // 注意这里是 -1，因为 start 的深度为 0
      }
      int res = -1;
      if (node->left != from) {
        res = max(res, maxDepth(node->left, node));
      }
      if (node->right != from) {
        res = max(res, maxDepth(node->right, node));
      }
      if (fa[node->val] != from) {
        res = max(res, maxDepth(fa[node->val], node));
      }
      return res + 1;
    }

  public:
    int amountOfTime(TreeNode* root, int start) {
      this->start = start;
      dfs(root, nullptr);
      return maxDepth(start_node, start_node);
    }

};

// 根据层序遍历数组构建二叉树
TreeNode* buildTree(vector<int>& nodes) {
    if (nodes.empty()) return nullptr;
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
      TreeNode* curr = q.front();
      q.pop();
      if (nodes[i] != -1) {
        curr->left = new TreeNode(nodes[i]);
        q.push(curr->left);
      }
      i++;
      if (i < nodes.size() && nodes[i] != -1) {
        curr->right = new TreeNode(nodes[i]);
        q.push(curr->right);
      }
      i++;
    }
    return root;
}


int main() {
  // 根据提供的树结构构建二叉树
  vector<int> nodes = {1, 5, 3, -1, 4, 10, 6, 9, 2};
  TreeNode* root = buildTree(nodes);

  // 创建 Solution 对象
  Solution solution;
  int start = 3; // 起始节点值为 3
  int maxTime = solution.amountOfTime(root, start);
  cout << "The maximum amount of time from node " << start << " is: " << maxTime << endl;

  // 释放内存
  // 实际上，为了简便起见，可以不用手动释放内存，程序结束时系统会自动释放
  return 0;
}
