//
// Created by windows on 2023/3/2.
//

#include "Solution1146.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

class SnapshotArray {
private:
  unordered_map<int, unordered_map<int, int>> hash;
  vector<int> nums;
  int snap_id;
public:
  SnapshotArray(int length) {
    snap_id = 0;
    nums.resize(length, 0);
    for (int i = 0; i < length; ++i) {
      hash[snap_id][i] = nums[i];
    }
  }

  void set(int index, int val) {
    nums[index] = val;
    hash[snap_id][index] = val;
  }

  int snap() {
    snap_id++;
    return snap_id - 1;
  }

  int get(int index, int snap_id) {
    while (snap_id >= 0){
      if (hash[snap_id].count(index)){
        return hash[snap_id][index];
      } else{
        snap_id--;
      }
    }
    return -1;
  }
};