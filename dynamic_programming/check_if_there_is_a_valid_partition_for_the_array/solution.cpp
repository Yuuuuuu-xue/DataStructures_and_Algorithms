#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool validPartition(vector<int>& nums) {
    vector<bool> dp(nums.size() + 1, false);
    dp[0] = true;
    dp[2] = nums[0] == nums[1];
    for (int i = 2; i < nums.size(); i++) {
      dp[i + 1] = (nums[i - 1] == nums[i] && dp[i - 1]) || (nums[i - 2] == nums[i] && nums[i - 1] == nums[i] && dp[i - 2]) || (nums[i - 2] + 1 == nums[i - 1] && nums[i - 1] + 1 == nums[i] && dp[i - 2]);
    }
    return dp[nums.size()];
  }
};