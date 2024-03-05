//
// Created by windows on 2023/3/2.
//

#include "Solution1002.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


vector<string> commonChars(vector<string>& words) {
   vector<int> chars(26);
   for (const auto &item : words[0]){
     chars[item - 'a']++;
   }
   for (int i = 1; i < words.size(); ++i) {
     vector<int> charsTemp(26);
     for (const auto &item : words[i]){
       charsTemp[item - 'a']++;
     }
     for (int j = 0; j < 26; ++j) {
       chars[j] = min(chars[j], charsTemp[j]);
     }
   }

   vector<string> res;
   for (int i = 0; i < 26; ++i) {
     for (int j = 0; j < chars[i]; ++j) {
       res.push_back(string(1, 'a' + i));
     }
   }
   return res;
}
