#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool canPartition(vector<int>& nums) {
    // Find the sum
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum % 2 != 0) return false;

    vector<vector<bool>> dp(sum / 2 + 1, vector<bool>(nums.size() + 1));
    
    // Base case
    for (int i = 1; i <= nums.size(); i++) dp[0][i] = true;

    // Build dp
    for (int i = 1; i < sum / 2 + 1; i++) {
      for (int j = 1; j <= nums.size(); j++) {
        // cout << i << " " << j << "\n";
        if (nums[j - 1] > i) {
          dp[i][j] = dp[i][j - 1];
        } else {
          dp[i][j] = dp[i][j - 1] || dp[i - nums[j - 1]][j - 1];
        }
      }
    }
    return dp[sum / 2][nums.size()];
  }
};