//
// Created by windows on 2023/3/24.
//

#ifndef C___TRIE_H
#define C___TRIE_H

#include <vector>
#include <string>
using namespace std;

class Trie {
public:
    vector<Trie*> children;
    bool isEnd;

    Trie() : children(26), isEnd(false) {}

    void insert(string& w);

    bool search(string& w);

};


#endif //C___TRIE_H
