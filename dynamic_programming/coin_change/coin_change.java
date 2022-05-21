class Solution {
  public int coinChange(int[] coins, int amount) {
    int[] dp = new int[amount + 1];
    for (int i = 1; i <= amount; i++) {
      int minNum = Integer.MAX_VALUE;
      for (int c : coins) {
        if (i - c >= 0 && dp[i - c] >= 0) {
          minNum = Math.min(minNum, dp[i - c]);
        }
      }
      if (minNum == Integer.MAX_VALUE) {
        dp[i] = -1;
      } else {
        dp[i] = minNum + 1;
      }
    }
    return dp[amount];
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.coinChange(new int[]{1, 2, 5}, 11));
    System.out.println(s.coinChange(new int[]{2}, 3));
    System.out.println(s.coinChange(new int[]{1}, 0));
  }
}