//
// Created by windows on 2023/3/2.
//

#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
  int ans = 0;
  int a = capacityA, b = capacityB;
  int i = 0, j = plants.size() - 1;
  while (i < j) {
    // Alice 给植物 i 浇水
    if (a < plants[i]) {
      // 没有足够的水，重新灌满水罐
      ans++;
      a = capacityA;
    }
    a -= plants[i++];
    // Bob 给植物 j 浇水
    if (b < plants[j]) {
      // 没有足够的水，重新灌满水罐
      ans++;
      b = capacityB;
    }
    b -= plants[j--];
  }
  // Alice 和 Bob 到达同一株植物，那么当前水罐中水更多的人会给这株植物浇水
  if (i == j && max(a, b) < plants[i]) {
    // 没有足够的水，重新灌满水罐
    ans++;
  }
  return ans;
}

int main() {
  vector<int> plants = {274, 179, 789, 417, 293, 336, 133, 334, 569, 355, 813, 217, 80, 933, 961, 271, 294, 933, 49, 980, 685, 470, 186, 11, 157, 889, 299, 493, 215, 807, 588, 464, 218, 248, 391, 817, 32, 606, 740, 941, 505, 533, 289, 306, 490};
  int capacityA = 996; // 用水壶 A 的容量
  int capacityB = 1172; // 用水壶 B 的容量

  int result = minimumRefill(plants, capacityA, capacityB);

  cout <<  result << endl;

  return 0;
}