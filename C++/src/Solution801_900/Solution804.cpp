//
// Created by windows on 2023/3/2.
//

#include "Solution804.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <unordered_set>

int Solution::uniqueMorseRepresentations(vector<string> &words) {
    vector<string> res = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> set;
    for (string str : words){
        string temp;
        for (char c : str) {
            temp += res[c - 'a'];
        }
        set.insert(temp);
    }
    return set.size();
}
