//
// Created by windows on 2023/3/2.
//

#include "Solution765.h"
#include <functional>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include <vector>
using namespace std;

int minSwapsCouples(vector<int>& row) {
  int len = row.size();
  int cot = 0;
  for(int i=0; i<len; i++){
    row[i] = row[i]/2;//将情侣融为一体，例如01是情侣，则将他们都视为0
  }
  for(int i=0; i<len; i+=2){
    if(row[i] != row[i+1]){
      for(int j=i+2; j<len; j++){
        if(row[i] == row[j]){
          swap(row[i+1], row[j]);//交换位置
          cot++;//牵手+1
          break;
        }
      }
    }
  }
  return cot;
}
