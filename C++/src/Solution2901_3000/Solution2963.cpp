//
// Created by windows on 2023/3/2.
//

//#include "Solution2963.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
using namespace std;

int numberOfGoodPartitions(vector<int>& nums) {
  unordered_map<int, pair<int, int>> mp;
  int n = nums.size();
  for (int i = 0; i < n; ++i) {
    int x = nums[i];
    if (mp.count(x)){
      mp[x] = make_pair(mp[x].first, i);
    } else{
      mp[x] = {i, i};
    }
  }

  vector<pair<int, int>> vec;
  for (const auto &item : mp){
    vec.push_back(item.second);
  }

  sort(vec.begin(), vec.end(), [](auto a, auto b){
    return a.first < b.first;
  });

  int maxR = -1, ans = 1, mod = 1e9 + 7;
  n = vec.size();
  for (int i = 0; i < n; ++i) {
    if (vec[i].first > maxR){
      ans = ans * 2 % mod;
    }
    maxR = max(maxR, vec[i].second);
  }
  return ans / 2;
}

int main() {
  vector<int> nums = {2,4,2,7,4};
  cout << "The number of good partitions: " << numberOfGoodPartitions(nums) << endl;
  return 0;
}