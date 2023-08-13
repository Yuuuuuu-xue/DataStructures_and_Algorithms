#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minCostClimbingStairs(vector<int>& cost) {
    int oneStepLeft = cost[1];
    int zeroStepsLeft = 0;
    for (int i = 2; i < cost.size() + 1; i++) {
      int prevZeroStepsLeft = zeroStepsLeft;
      zeroStepsLeft = min(oneStepLeft, zeroStepsLeft + cost[i - 2]);
      oneStepLeft = min(prevZeroStepsLeft, oneStepLeft) + cost[i - 1];
      // cout << zeroStepsLeft << " " << oneStepLeft << "\n";
    }
    return min(oneStepLeft, zeroStepsLeft);
  }
};