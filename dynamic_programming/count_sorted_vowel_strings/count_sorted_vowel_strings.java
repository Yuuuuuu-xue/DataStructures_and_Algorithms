import java.util.Arrays;

class Solution {
  public int countVowelStringsNotEfficient(int n) {
    int [][]dp = new int[n][5];
    // Fill the base case
    dp[0] = new int[]{1, 1, 1, 1, 1};
    // Construct the dp
    for (int i = 1; i < n; i++) {
      // u must only containing u
      dp[i][4] += dp[i - 1][4];
      for (int j = 3; j >= 0; j--) {
        dp[i][j] += dp[i - 1][j] + dp[i][j + 1];
      }
    }
    return Arrays.stream(dp[n - 1]).sum();
  }

  public int countVowelStrings(int n) {
    // Fill the base case
    int []dp = new int[]{1, 1, 1, 1, 1};
    for (int i = 1; i < n; i++) {
      for (int j = 3; j >= 0; j--) {
        dp[j] += dp[j + 1];
      }
    }
    return dp[0] + dp[1] + dp[2] + dp[3] + dp[4];
  }
}


class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.countVowelStrings(1));
    System.out.println(s.countVowelStrings(2));
    System.out.println(s.countVowelStrings(33));
  }
}