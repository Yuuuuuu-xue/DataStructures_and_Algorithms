#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numberOfArithmeticSlices(vector<int>& nums) {
    int n = nums.size();
    vector<unordered_map<long long, int>> dp(n);
    int o = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        long long diff = (long long)nums[i] - nums[j];
        dp[i][diff] += 1;
        if (dp[j].find(diff) != dp[j].end()) {
          dp[i][diff] += dp[j][diff];
          o += dp[j][diff];
        }
      }
    }

    return o;
  }
};