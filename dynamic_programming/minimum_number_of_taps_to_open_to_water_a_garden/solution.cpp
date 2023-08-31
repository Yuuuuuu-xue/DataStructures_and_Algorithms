#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minTaps(int n, vector<int>& ranges) {
    // init value is n + 1 since if the solution exists, it has <= n
    vector<int> dp(n + 1, n + 1);

    // Base case, no water needed for [0, 0]
    dp[0] = 0;

    for (int i = 0; i <= n; i++) {
      int leftEnd = max(0, i - ranges[i]);
      int rightEnd = min(n, i + ranges[i]);
      for (int k = leftEnd; k <= rightEnd; k++) {
        dp[k] = min(dp[k], 1 + dp[leftEnd]);
      }
    }

    return dp[n] == n + 1 ? -1 : dp[n];
  }
};