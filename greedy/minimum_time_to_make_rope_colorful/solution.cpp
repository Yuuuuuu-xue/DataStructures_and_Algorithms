#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minCost(string colors, vector<int>& neededTime) {
    int o = 0;
    for (int i = 1; i < colors.size(); i++) {
      if (colors[i] == colors[i - 1]) {
        // Consecutive balloons, take the min cost and left with max cost
        o += min(neededTime[i], neededTime[i - 1]);
        neededTime[i] = max(neededTime[i], neededTime[i - 1]);
      }
    }
    return o;
  }
};