#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  const int MOD = 1e9 + 7;

public:
  int numMusicPlaylists(int n, int goal, int k) {
    vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(goal + 1, 0));
    
    // Base case, empty playlist, guarantee that every song is played at least once
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
      // Note if j < i, then must be 0 since cannot guarantee that every song is played at least once
      for (int j = i; j <= goal; j++) {
        unsigned long long chooseNewSongs = i * dp[i - 1][j - 1];
        unsigned long long choosePrevSongs = max(i - k, 0) * dp[i][j - 1];
        dp[i][j] = (chooseNewSongs + choosePrevSongs) % MOD;
      }
    }

    return dp[n][goal];
  }
};