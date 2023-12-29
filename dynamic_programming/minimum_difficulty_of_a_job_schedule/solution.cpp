#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minDifficulty(vector<int>& jobDifficulty, int d) {
    int n = jobDifficulty.size();

    if (n < d) {
      return -1;
    }

    if (n == d) {
      int totalDifficulty = 0;
      for (int difficulty : jobDifficulty) {
        totalDifficulty += difficulty;
      }
      return totalDifficulty;
    }

    vector<vector<int>> dp(n + 1, vector<int>(d + 1));

    // Base case
    dp[0][0] = 0;
    dp[1][0] = jobDifficulty[0];
    for (int i = 2; i <= n; i++) {
      dp[i][0] = max(jobDifficulty[i - 1], dp[i - 1][0]);
    }

    for (int j = 1; j <= d; j++) {
      // i = j since we need at least i tasks for j days
      for (int i = j; i <= n; i++) {
        // Take current task in a new day and thus i - 1 tasks left with j - 1 days, the current task has difficulty jobDifficulty[i - 1]
        int currDifficulty = dp[i - 1][j - 1] + jobDifficulty[i - 1];
        int currMax = jobDifficulty[i - 1];
        // From i - 1 days back to first day, try to include it in the current day
        // Stop when number of days left is < d, since we need at least one task per day
        for (int k = i - 1; k - 1 >= j - 1; k--) {
          // Try to include kth task in the current day
          currMax = max(currMax, jobDifficulty[k - 1]);
          currDifficulty = min(currDifficulty, dp[k - 1][j - 1] + currMax);
        }

        dp[i][j] = currDifficulty;
      }
    }

    return dp[n][d];
  }
};