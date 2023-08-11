#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int change(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= amount; i++) {
      for (int coin : coins) {
        if (i >= coin) {
          dp[i] += dp[i - coin];
        }
      }
    }
    return dp[amount];
  }
};