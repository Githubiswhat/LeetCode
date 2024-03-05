//
// Created by windows on 2023/3/2.
//

#include "Solution2024.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
using namespace std;

int maxCount(string& answerKey, int k, char c){
  int n = answerKey.size();
  int ans = 0;
  for (int left = 0, right = 0, sum = 0; right < n; ++right) {
    sum += answerKey[right] != c;
    while (sum > k){
      sum -= answerKey[left++] != c;
    }
    ans = max(ans, right - left + 1);
  }
  return ans;
}


int maxConsecutiveAnswers(string answerKey, int k) {
  return max(maxCount(answerKey, k, 'T'), maxCount(answerKey, k, 'F'));
}
