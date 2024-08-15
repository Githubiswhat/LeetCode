//
// Created by windows on 2023/3/2.
//

#include "Solution721.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
  int n = accounts.size();
  unordered_map<string, vector<int>> email_to_index;
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j < accounts[i].size(); ++j) {
      email_to_index[accounts[i][j]].push_back(i);
    }
  }

  vector<int> vis(n);
  unordered_set<string> emails;

  auto dfs = [&](auto&& dfs, int i) -> void{
    vis[i] = true;
    for (int k = 1; k < accounts[i].size(); ++k) {
      string& email = accounts[i][k];
      if (emails.count(email)){
        continue;
      }
      emails.insert(email);
      for (const auto &j : email_to_index[email]){
        if (!vis[j]){
          dfs(dfs, j);
        }
      }
    }
  };

  vector<vector<string>> ans;
  for (int i = 0; i < n; ++i) {
    if (vis[i]){
      continue;
    }
    emails.clear();
    dfs(dfs, i);

    vector<string> tmp = {accounts[i][0]};
    tmp.insert(tmp.end(), emails.begin(), emails.end());
    sort(tmp.begin() + 1, tmp.end());
    ans.push_back(tmp);
  }
  return ans;
}