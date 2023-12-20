//
// Created by windows on 2023/3/2.
//

#include "Solution649.h"
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;
#include "string"
#include <queue>
using namespace std;


string predictPartyVictory(string senate) {
  int n = senate.size();
  queue<int> radiant, dire;

  for (int i = 0; i < n; ++i) {
    if (senate[i] == 'R'){
      radiant.push(i);
    } else{
      dire.push(i);
    }
  }

  while (!radiant.empty() && !dire.empty()){
    if (radiant.front() < radiant.front()){
      radiant.push(radiant.front() + n);
    } else{
      dire.push(dire.front() + n);
    }
    radiant.pop();
    dire.pop();
  }
  return radiant.empty() ? "Dire" : "Radiant";
}
