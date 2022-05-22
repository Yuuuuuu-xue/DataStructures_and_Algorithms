import java.util.Arrays;

// TLE FFFFFF
class Solution {
  public int totalStrength(int[] strength) {
    int o = 0;
    int[][] dp = new int[strength.length][3];
    for (int i = 0; i < strength.length; i++) {
      dp[i] = new int[]{strength[i], strength[i], strength[i]};
      o += strength[i] * strength[i] % (Math.pow(10, 9) + 7);
    }

    for (int i = 2; i <= strength.length; i ++) {
      for (int j = 0; j <= strength.length - i; j++) {
        dp[j][0] = Math.min(dp[j][0], dp[j + 1][0]);
        dp[j][1] = dp[j][1] += dp[j + 1][2];
        dp[j][2] = dp[j + 1][2];
        o += dp[j][0] * dp[j][1] % (Math.pow(10, 9) + 7);
        System.out.println(Arrays.deepToString(dp));
      }
    }
    return o;
  }
}