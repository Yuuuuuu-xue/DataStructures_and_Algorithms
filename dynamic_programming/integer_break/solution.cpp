#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    vector<int> dp(n, 0);
    // Since 2 we can use 2 and 3 we can use 3
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i < n; i++) {
      int maxProduct = 0;
      for (int k = 1; k <= (i + 1) / 2; k++) {
        maxProduct = max(maxProduct, dp[k - 1] * dp[i + 1 - k - 1]);
      }
      dp[i] = maxProduct;
    }
    return dp[n - 1];
  }
};