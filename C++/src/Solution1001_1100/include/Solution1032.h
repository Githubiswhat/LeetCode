//
// Created by windows on 2023/3/10.
//

#ifndef C___SOLUTION1032_H
#define C___SOLUTION1032_H
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Trie{
public:
    vector<Trie*> children;
    bool isEnd;

    Trie() : children(26), isEnd(false){}

    void insert(string& w){
        Trie* node = this;
        reverse(w.begin(), w.end());
        for (char c : w) {
            int idx = c - 'a';
            if (!node -> children[idx]){
                node->children[idx] = new Trie();
            }
            node = node->children[idx];
        }
        node->isEnd = true;
    }

    bool search(string& w){
        Trie* node = this;
        for (int i = w.size() - 1; i >= 0; --i) {
            int idx = w[i] - 'a';
            if (!node->children[idx]){
                return false;
            }
            node = node->children[idx];
            if (node->isEnd){
                return true;
            }
        }
        return false;
    }
};


class StreamChecker{
public:
    Trie* trie = new Trie();
    string str;
    StreamChecker(vector<string>& words) {
        for (string word : words) {
            trie->insert(word);
        }
    }

    bool query(char letter) {
        str += letter;
        return trie->search(str);
    }
};


#endif //C___SOLUTION1032_H


