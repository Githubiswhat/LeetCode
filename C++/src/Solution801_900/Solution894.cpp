//
// Created by windows on 2023/3/2.
//

#include "Solution894.h"


#include <functional>
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

vector<TreeNode*> f[11];
auto init = []{
  f[1] = {new TreeNode(0)};
  for (int i = 2; i < 11; ++i) {
    for (int j = 1; j < i; ++j) {
      for (const auto &left: f[j]){
        for (const auto &right: f[i-j]){
          auto node = new TreeNode(0, left, right);
          f[i].push_back(node);
        }
      }
    }
  }
  return 0;
}();

vector<TreeNode*> allPossibleFBT(int n) {
  return f[n % 2 > 0 ? (n + 1) / 2 : 0];
}

