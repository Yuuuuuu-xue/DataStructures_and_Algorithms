#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool PredictTheWinner(vector<int>& nums) {
    int n = nums.size();
    vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n));
    
    // Base case
    for (int i = 0; i < n; i++) dp[i][i].first = nums[i];

    // Build the dp
    for (int len = 2; len <= n; len++) {
      for (int i = 0; i <= n - len; i++) {
        int j = i + len - 1;
        dp[i][j].first = max(nums[i] + dp[i + 1][j].second, nums[j] + dp[i][j - 1].second);
        dp[i][j].second = min(-nums[i] + dp[i + 1][j].first, -nums[j] + dp[i][j - 1].first);
        // cout << dp[i][j].first << " " << dp[i][j].second << "\n";
      }
    }
    return dp[0][n - 1].first >= 0;
  }
};