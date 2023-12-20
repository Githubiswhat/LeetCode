//
// Created by windows on 2023/12/20.
//

#include "Solution69.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#include "vector"
using namespace std;

// int peakIndexInMountainArray(vector<int>& arr) {
//   int count =  0;
//   for (int i = 1; i < arr.size() - 1; ++i) {
//     if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
//       return i;
//     }
//   }
//   return 0;
// }

int peakIndexInMountainArray(vector<int> &arr) {
  int left = -1, right = arr.size();
  while (left < right - 1) {
    int mid = (left + right) / 2;
    if (arr[mid] < arr[mid + 1]) {
      left = mid;
    } else if (arr[mid] < arr[mid - 1]) {
      right = mid;
    } else {
      return mid;
    }
  }
  return arr[left] > arr[right] ? left : right;
}
