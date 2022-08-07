#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countVowelPermutation(int n) {
    vector<unsigned int>dp(5, 1);
    int MOD = 1e9 + 7;
    for (int i = 2; i <= n; i++) {
      unsigned int prevA = dp[0];
      unsigned int prevE = dp[1];
      unsigned int prevI = dp[2];
      unsigned int prevO = dp[3];
      unsigned int prevU = dp[4];
      dp[0] = (prevE + prevI + prevU) % MOD;
      dp[1] = (prevA + prevI) % MOD;
      dp[2] = (prevE + prevO) % MOD;
      dp[3] = prevI % MOD;
      dp[4] = (prevI + prevO) % MOD;
    }
    int o = 0;
    for (int i = 0; i < 5; i++) o = (o + dp[i]) % MOD;
    return o;
  }
};