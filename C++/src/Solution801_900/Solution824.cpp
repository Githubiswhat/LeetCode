//
// Created by windows on 2023/3/2.
//

#include "Solution824.h"
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

bool isVoval(char c) {
  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

string toGoatLatin(string sentence) {
  stringstream ss(sentence);
  string word;
  int count = 0;
  string res = "";
  while (ss >> word){
    count++;
    if (isVoval(word[0])){
      word += "ma";
    } else{
      word = word.substr(1) + string(1, word[0]) + "ma";
    }
    for (int i = 0; i < count; ++i) {
      word += 'a';
    }
    res += word + " ";
  }
  return res.substr(0, res.size() - 1);
}
