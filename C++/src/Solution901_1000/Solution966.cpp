//
// Created by windows on 2023/3/2.
//

#include "string"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "vector"
#include "unordered_set"
#include "unordered_map"
using namespace std;

//string to_lower(string  str){
//  // 把字符串中的每个字符逐个转换成小写
//  string res;
//  for (char &c : str) {
//    res += tolower(c);
//  }
//  return res;
//}
//
//
//bool belong(char c){
//  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//}
//
//bool process(string a, string b){
//  for (int i = 0; i < a.size(); ++i) {
//    if (a[i] != b[i] && (!belong(a[i]) || !belong(b[i]))){
//        return false;
//    }
//  }
//  return true;
//}
//
//int count(string s){
//  int res = 0;
//  for (const auto &item : s){
//    if (belong(item)){
//        res++;
//    }
//  }
//  return res;
//}
//
//
//vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
//  unordered_set<string> hashset;
//  for (const auto &item : wordlist){
//    hashset.emplace(item);
//  }
//
//  unordered_map<string, string> hashmap;
//  for (const auto &item : wordlist){
//    string str = to_lower(item);
//    if (hashmap.find(str) == hashmap.end()){
//      hashmap[str] = item;
//    }
//  }
//
//  unordered_map<int, vector<string>> hashmap1;
//  for (const auto &item : wordlist){
//    int num = count(item);
//    hashmap1[num].push_back(item);
//  }
//
//  int n = queries.size();
//  vector<string> result(n);
//
//  for (int i = 0; i < n; ++i) {
//    if (hashset.find(queries[i]) != hashset.end()){
//      result[i] = queries[i];
//    } else{
//      bool flag = false;
//      string low_queries = to_lower(queries[i]);
//      if (hashmap.find(low_queries) != hashmap.end()){
//        result[i] = hashmap[low_queries];
//        flag = true;
//      }
//      if (!flag){
//        int num = count(low_queries);
//        for (const auto &item : hashmap1[num]){
//          if (item.size() != low_queries.size()){
//            continue;
//          }
//          if (process(to_lower(item), low_queries)){
//            result[i] = item;
//            break;
//          }
//        }
//      }
//    }
//  }
//  return result;
//}



//优化版本
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

string to_lower(string str) {
  // 把字符串中的每个字符逐个转换成小写
  for (char &c : str) {
    c = tolower(c);
  }
  return str;
}

bool is_vowel(char c) {
  // 判断字符是否是元音字母
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool is_similar(const string& a, const string& b) {
  // 判断两个字符串是否只有元音字母不同
  if (a.size() != b.size()) {
    return false;
  }
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] != b[i] && (!is_vowel(a[i]) || !is_vowel(b[i]))) {
      return false;
    }
  }
  return true;
}

int count_vowels(const string& s) {
  // 计算字符串中元音字母的数量
  int count = 0;
  for (char c : s) {
    if (is_vowel(tolower(c))) {
      count++;
    }
  }
  return count;
}

vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
  unordered_set<string> word_set;
  unordered_map<string, string> lower_to_word;
  unordered_map<int, vector<string>> vowel_count_to_words;

  // 构建数据结构
  for (const auto &word : wordlist) {
    word_set.insert(word);
    string lower_word = to_lower(word);
    if (lower_to_word.find(lower_word) == lower_to_word.end()) {
      lower_to_word[lower_word] = word;
    }
    int vowel_count = count_vowels(lower_word);
    vowel_count_to_words[vowel_count].push_back(word);
  }

  vector<string> result;
  for (const auto &query : queries) {
    if (word_set.count(query)) {
      result.push_back(query); // 在词汇表中找到匹配
    } else {
      string lower_query = to_lower(query);
      if (lower_to_word.count(lower_query)) {
        result.push_back(lower_to_word[lower_query]); // 在小写映射中找到匹配
      } else {
        int vowel_count = count_vowels(lower_query);
        bool found_similar = false;
        for (const auto &word : vowel_count_to_words[vowel_count]) {
          if (is_similar(lower_query, to_lower(word))) {
            result.push_back(word); // 找到相似的单词
            found_similar = true;
            break;
          }
        }
        if (!found_similar) {
          result.push_back(""); // 没有找到匹配
        }
      }
    }
  }

  return result;
}


