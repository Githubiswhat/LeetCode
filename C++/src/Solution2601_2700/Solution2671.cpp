//
// Created by windows on 2023/3/2.
//

#include "Solution2671.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;


class FrequencyTracker {
public:

  unordered_map<int, int> mp;
  unordered_map<int, int> count;

  FrequencyTracker() {

  }

  void add(int number) {
    auto it = count.find(mp[number]);
    if (it != count.end()){
      it->second--;
      if(it->second <= 0){
        count.erase(it);
      }
    }

    mp[number]++;
    count[mp[number]]++;
  }

  void deleteOne(int number) {
    auto it = mp.find(number);
    if (it != mp.end()) { // 如果找到了键

      count[it->second]--;
      if(count[it->second] <= 0){
        count.erase(it->second);
      }

      if (it->second > 1) {
        it->second--; // 如果频率大于1，则减少频率
        count[it->second]++;
      } else {
        mp.erase(it); // 如果频率等于1，则删除键值对
      }
    }
  }

  bool hasFrequency(int frequency) {
    return count.count(frequency);
  }
};