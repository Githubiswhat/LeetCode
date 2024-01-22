//
// Created by windows on 2023/3/2.
//

#include "Solution2707.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;


//int minExtraChar(string s, vector<string>& dictionary) {
//  unordered_map<string,int> dic;
//  for(auto &d:dictionary){
//    dic[d]++;
//  }
//  int n = s.size();
//  vector<int> dp(n + 1, INT_MAX);
//  dp[0] = 0;
//  for (int i = 1; i <= n; ++i) {
//    dp[i] = dp[i - 1] + 1;
//    for (int j = i - 1; j >= 0 ; --j) {
//      if (dic.count(s.substr(j, i - j))){
//        dp[i] = min(dp[i], dp[j]);
//      }
//    }
//  }
//  return dp[n];
//}

class Trie {
private:
  vector<Trie*> children;
  bool isEnd;
public:

  Trie(): children(26), isEnd(false) {}

  void insert(string &s) {
    Trie *node = this;
    for (auto &c : s) {
      char ch = c - 'a';
      if (node->children[ch] == nullptr){
        node->children[ch] = new Trie();
      }
      node = node->children[ch];
    }
    node->isEnd = true;
  }

  bool trace(Trie*& node, char c){
    char ch = c - 'a';
    if (node == nullptr || node->children[ch] == nullptr){
      node = nullptr;
      return false;
    }
    node = node->children[ch];
    return node->isEnd;
  }
};


int minExtraChar(string s, vector<string>& dictionary) {
  int n = s.size();
  vector<int> dp(n + 1,INT_MAX);
  dp[0] = 0;

  Trie root;
  for(auto &d:dictionary){
    reverse(d.begin(), d.end());
    root.insert(d);
  }

  for (int i = 1; i <= n; ++i) {
    dp[i] = dp[i - 1] + 1;
    Trie *node = &root;
    for (int j = i - 1; j >= 0; --j) {
      if(node->trace(node, s[j])){
        dp[i] = min(dp[i], dp[j]);
      }
    }
  }
  return dp[n];
}




