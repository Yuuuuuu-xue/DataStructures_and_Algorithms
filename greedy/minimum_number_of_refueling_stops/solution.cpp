#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    int o = 0;
    priority_queue<int> pq;
    int currPos = startFuel;
    for (int i = 0; i < stations.size() && currPos < target; i++) {
      if (currPos < stations[i][0]) {
        // Need to fill the gas
        while (currPos < stations[i][0] && currPos < target && !pq.empty()) {
          currPos += pq.top();
          o ++;
          pq.pop();
        }
        // If pq is empty and we did not reach to the next station
        if (currPos >= target) return o;
        if (currPos < stations[i][0]) return -1;
        
      }
      pq.push(stations[i][1]);
    }
    // finish all the stations need to reach to the target
    // Need to fill the gas
    while (currPos < target && !pq.empty()) {
      currPos += pq.top();
      o ++;
      pq.pop();
    }
    // If did not reach to target
    if (currPos < target) return -1;
    return o;
  }
};