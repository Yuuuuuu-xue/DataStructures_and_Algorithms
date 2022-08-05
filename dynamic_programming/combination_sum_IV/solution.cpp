#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int combinationSum4(vector<int>& nums, int target) {
    vector<unsigned int> dp(target + 1);
    dp[0] = 1;
    for (int j = 1; j <= target; j++) {
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] <= j) {
          dp[j] += dp[j - nums[i]];
        }
      }
    }
    return dp[target];
  }
};