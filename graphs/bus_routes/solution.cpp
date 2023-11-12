#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
    unordered_map<int, vector<int>> busStopToBusNum;

    // Build the graph
    for (int i = 0; i < routes.size(); i++) {
      for (int busStop : routes[i]) {
        if (busStopToBusNum.find(busStop) == busStopToBusNum.end()) {
          busStopToBusNum[busStop] = {};
        }
        busStopToBusNum[busStop].push_back(i);
      }
    }

    unordered_set<int> seenBusStop;
    unordered_set<int> seenBusNum;
    int i = 0;
    vector<int> q = { source };

    while (!q.empty()) {
      vector<int> nextQ;
      for (int busStop : q) {
        if (busStop == target) {
          return i;
        }

        for (int busNum : busStopToBusNum[busStop]) {
          if (seenBusNum.find(busNum) == seenBusNum.end()) {
            seenBusNum.insert(busNum);

            for (int nextBusStop : routes[busNum]) {
              if (seenBusStop.find(nextBusStop) == seenBusStop.end()) {
                seenBusStop.insert(nextBusStop);
                nextQ.push_back(nextBusStop);
              }
            }
          }
        }
      }
      
      i ++;
      q = nextQ;
    }

    return -1;
  }
};