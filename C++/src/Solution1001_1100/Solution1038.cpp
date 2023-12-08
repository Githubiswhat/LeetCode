//
// Created by windows on 2023/3/2.
//


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


#include "Solution1038.h"
#include "vector"
#include "unordered_map"
using namespace std;

void dfs(TreeNode* root, vector<int>& list){
    if (root == nullptr){
      return;
    }
    dfs(root->left, list);
    list.push_back(root->val);
    dfs(root->right, list);
}

void dfs1(TreeNode* root, unordered_map<int,int> hashmap){
    if (root == nullptr){
      return;
    }
    root->val = hashmap[root->val];
}


TreeNode* bstToGst(TreeNode* root) {
  vector<int> list;
  dfs(root, list);
  unordered_map<int, int> hashmap;
  vector<int> listProcess(list.size(), list[list.size() - 1]);
  for (int i = list.size() - 2; i >= 0 ; --i) {
      listProcess[i] = list[i] + list[i + 1];
      hashmap[list[i]] = listProcess[i];
  }
  hashmap[list[list.size() - 1]] = listProcess[list.size() -1];
  dfs1(root, hashmap);
  return root;
}



