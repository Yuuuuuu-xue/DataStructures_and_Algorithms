import java.util.Arrays;

class Solution {
    public int findMaxForm(String[] strs, int m, int n) {
        int[][] lst = new int[strs.length][2];
        for (int i = 0; i < strs.length; i ++) {
            for (int j = 0; j < strs[i].length(); j ++) {
                if (strs[i].charAt(j) == '0') {
                    lst[i][0] ++;
                } else {
                    lst[i][1] ++;
                }
            }
        }
        int[][][] dp = new int[strs.length][m + 1][n + 1];
        for (int i = 0; i < strs.length; i ++) {
            for (int j = 0; j <= m; j ++) {
                for (int k = 0; k <= n; k ++) {
                    if (i > 0) {
                        dp[i][j][k] = dp[i - 1][j][k];
                        if (j >= lst[i][0] && k >= lst[i][1]) {
                            dp[i][j][k] = Math.max(1 + dp[i - 1][j - lst[i][0]][k - lst[i][1]], dp[i][j][k]);
                        }
                       
                    } else {
                        if (j >= lst[i][0] && k >= lst[i][1]) {
                            dp[i][j][k] = 1;
                        }
                    }
                }
            }
        }
        // System.out.println(Arrays.deepToString(lst));
        // System.out.println(Arrays.deepToString(dp));
        return dp[strs.length - 1][m][n];
    }
}


class Test {
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.findMaxForm(new String[]{"10", "0001", "111001", "1", "0"}, 5, 3));
        System.out.println(s.findMaxForm(new String[]{"10", "0", "1"}, 1, 1));
    }
}