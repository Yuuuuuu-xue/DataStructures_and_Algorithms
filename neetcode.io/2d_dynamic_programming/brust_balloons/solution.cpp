#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxCoins(vector<int>& nums) {
    int n = nums.size();
    // To avoid index out of range
    nums.insert(nums.begin(), 1);
    nums.push_back(1);

    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

    // Build the dp
    for (int len = 1; len <= n; len ++) {
      // Since dummy value at index 0 and index n
      for (int i = 1; i <= n - len + 1; i++) {
        // Calculate j
        int j = i + len - 1;

        for (int k = i; k <= j; k++) {
          // Brust last ballon at index k
          dp[i][j] = max(dp[i][j], nums[i - 1] * nums[k] * nums[j + 1] + dp[i][k - 1] + dp[k + 1][j]);
        }
      }
    }

    return dp[1][n];
  }
};