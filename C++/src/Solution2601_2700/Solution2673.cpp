//
// Created by windows on 2023/3/2.
//

//#include "Solution2673.h"
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <vector>
using namespace std;


//int minIncrements(int n, vector<int>& cost) {
//  int ans = 0;
//  int index = 0;
//  int layer = 2;
//  while (index < n - 1){
//    int upper = pow(2, layer) - 2;
//    layer++;
//    int maxVal = cost[index + 1];
//    for (int i = index + 1; i <= upper; ++i) {
//      maxVal = max(maxVal, cost[i]);
//    }
//    for (int i = index + 1; i <= upper; ++i) {
//      ans += maxVal - cost[i];
//      index++;
//    }
//  }
//  return ans;
//}

int minIncrements(int n, vector<int>& cost) {
  int ans = 0;
  for (int i = n / 2; i > 0 ; --i) {
    ans += abs(cost[i * 2] - cost[i * 2 - 1]);
    cost[i - 1] += max(cost[i * 2], cost[i * 2 - 1]);
  }
  return ans;
}




int main() {
  int n = 15; // 元素数量
  vector<int> cost = {764,1460,2664,764,2725,4556,5305,8829,5064,5929,7660,6321,4830,7055,3761}; // 每个元素的成本

  int result = minIncrements(n, cost);

  cout << result << endl;

  cout << 7 / 2 ;

  return 0;
}
