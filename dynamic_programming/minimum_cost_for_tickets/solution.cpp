#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int mincostTickets(vector<int>& days, vector<int>& costs) {
    vector<int> dp(days.size() + 1);
    int j = -1;
    int k = -1;
    for (int i = 0; i < days.size(); i++) {
      // Update j and k
      while (days[i] - days[j + 1] >= 7) j++;
      while (days[i] - days[k + 1] >= 30) k++;
      // Build dp
      dp[i + 1] = min({costs[0] + dp[i],
                       costs[1] + (j == -1 ? 0 : dp[j + 1]),
                       costs[2] + (k == -1 ? 0 : dp[k + 1])});
      // cout << i << " " << j << " " << k << " " << dp[i + 1] << "\n";
    }
    return dp[days.size()]; 
  }
};