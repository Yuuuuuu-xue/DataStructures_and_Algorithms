#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int totalGas = 0;
    int totalCost = 0;
    int currGas = 0;
    int possibleSolution = 0;
    for (int i = 0; i < n; i++) {
      totalGas += gas[i];
      totalCost += cost[i];
      currGas += gas[i] - cost[i];
      if (currGas < 0) {
        possibleSolution = i + 1;
        currGas = 0;
      }
    }
    return totalGas < totalCost ? -1 : possibleSolution;
  }
};

