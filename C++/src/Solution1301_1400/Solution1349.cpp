//
// Created by windows on 2023/3/2.
//

#include "Solution1349.h"
#include "vector"
using namespace std;


int maxStudents(vector<vector<char>>& seats) {
  int m = seats.size();
  int n = seats[0].size();

  int count = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (seats[i][j] == '.') {
        count++;
        seats[i][j] = '#';
        if (j - 1 >= 0 ){
          if (i - 1 >= 0){
            seats[i - 1][j - 1] = '#';
          }
          if (i + 1 < m){
            seats[i + 1][j - 1] = '#';
          }
          seats[i][j - 1] = '#';
        }
        if (j + 1 < n){
          if (i - 1 >= 0){
            seats[i - 1][j + 1] = '#';
          }
          if (i + 1 < m){
            seats[i + 1][j + 1] = '#';
          }
          seats[i][j + 1] = '#';
        }
      }
    }
  }
  return count;
}
