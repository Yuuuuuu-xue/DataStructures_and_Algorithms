#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int getLengthOfOptimalCompression(string s, int k) {
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= i && j <= k; j++) {
        int needToRemove = 0;
        int sameGroupCount = 0;
        dp[i][j] = INT_MAX;

        if (j > 0) {
          // Simply remove the last character
          dp[i][j] = dp[i - 1][j - 1];
        }

        for (int idx = i; idx >= 1; idx --) {
          if (s[idx - 1] != s[i - 1]) {
            needToRemove ++;
          } else {
            sameGroupCount ++;
          }

          // Since we can remove at most j characters
          if (needToRemove > j) {
            break;
          }

          // The min cost from index 0 to idx - 1, with k = j - needToRemove
          // Since we need to remove needToRemove characters from index idx to i.
          int prevDpCount = dp[idx - 1][j - needToRemove];
          
          // Find the group count and update prevDpCount
          // We group, we need to know after compressed, what will be the compressed value
          if (sameGroupCount == 1) {
            // Single character and thus length of 1
            prevDpCount += 1;
          } else if (sameGroupCount < 10) {
            // Single character followed by single digit
            prevDpCount += 2;
          } else if (sameGroupCount < 100) {
            // Single character followed by two digits
            prevDpCount += 3;
          } else {
            // Single character followed by three digits
            prevDpCount += 4;
          }

          dp[i][j] = min(dp[i][j], prevDpCount);
        }
      }
    }

    return dp[n][k];
  }
};