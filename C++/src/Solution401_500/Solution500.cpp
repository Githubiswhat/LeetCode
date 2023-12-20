//
// Created by windows on 2023/3/2.
//

#include "Solution500.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

vector<string> Solution500::findWords(vector<string> &words) {
    unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    vector<unordered_set<char>> rows{row1, row2, row3};
    vector<string> res;

    for (const string& word : words) {
        if (word.empty()) continue;
        int row = 0;
        bool inRow = true;
        if (row1.count(tolower(word[0]))) row = 1;
        if (row2.count(tolower(word[0]))) row = 2;
        if (row3.count(tolower(word[0]))) row = 3;

        for(char c : word){
            if (row == 1 && !row1.count(tolower(c))){
                inRow = false;
                break;
            }
            if (row == 2 && !row2.count(tolower(c))){
                inRow = false;
                break;
            }
            if (row == 3 && !row3.count(tolower(c))){
                inRow = false;
                break;
            }
        }
        if (inRow) {
            res.push_back(word);
        }
    }
    return res;

}
