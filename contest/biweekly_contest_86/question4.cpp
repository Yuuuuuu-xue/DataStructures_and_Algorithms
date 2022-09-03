#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
    int o = 0;
    unsigned long long currSum = 0;
    int i = 0;
    priority_queue<int> pq;
    unordered_map<int, int> seen;
    for (int j = 0; j < chargeTimes.size(); j++) {
      pq.push(chargeTimes[j]);
      int currMax = pq.top();
      currSum += runningCosts[j];
      unsigned long long currBudget = currMax + (j - i + 1) * currSum;
      // cout << currSum << " " << currSum << " " << i << " " << j << " " << currBudget << "\n";
      if (currBudget <= budget) {
        o = max(o, j - i + 1);
      } else {
        // Exceed, need pop all the items out until it does not reach to budge
        while (currBudget > budget) {
          // cout << currBudget << " " << budget << " " << i << "\n";
          // Pop previous items
          while (!pq.empty() && seen[pq.top()] > 0) {
            // cout << pq.top() << " dadad\n";
            seen[pq.top()] --;
            pq.pop();
          }
          if (pq.empty()) {
            currBudget = budget;
            continue;
          }
          // Pop item at i
          if (pq.top() == chargeTimes[i]) {
            pq.pop();
            currMax = pq.top();
          } else {
            // currMax stays same
            seen[chargeTimes[i]] ++;
          }
          currSum -= runningCosts[i];
          i ++;
          currBudget = currMax + (j - i + 1) * currSum;
        }
      }
    }
    return o;
  }
};