//
// Created by windows on 2023/3/2.
//

#include "Solution1103.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> distributeCandies(int candies, int num_people) {
  vector<int> ans(num_people);
  int i = 0;
  while (candies){
    if (candies >= i + 1){
      ans[i % num_people] += (i + 1);
      candies -= (i + 1);
    } else{
      ans[i % num_people] += candies;
      break;
    }
    i++;
  }
  return ans;
}