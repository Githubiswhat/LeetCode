//
// Created by windows on 2023/3/2.
//

#include "Solution207.h"
#include "unordered_map"
#include "vector"
#include <queue>
using namespace std;


bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
  vector<int> count(numCourses, 0);
  unordered_map<int, vector<int>> depends;
  for (const auto &item : prerequisites){
    count[item[0]]++;
    depends[item[1]].push_back(item[0]);
  }

  queue<int> q;
  for (int i = 0; i < count.size(); ++i) {
    if (count[i] == 0){
      q.push(i);
      numCourses--;
    }
  }


  while (!q.empty()){
    int num = q.front();
    q.pop();
    for (const auto &item : depends[num]){
      count[item]--;
      if (count[item] == 0){
        q.push(item);
        numCourses--;
      }
    }
  }

  return numCourses == 0;
}
