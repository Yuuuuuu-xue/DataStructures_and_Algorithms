#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    vector<int> dp(prices.size() + 2);
    for (int i = prices.size() - 2; i >= 0; i--) {
      dp[i] = dp[i + 1];
      for (int j = i + 1; j < prices.size(); j++) {
        dp[i] = max(dp[i], prices[j] - prices[i] + dp[j + 2]);
      }
    }
    return dp[0];
  }
};