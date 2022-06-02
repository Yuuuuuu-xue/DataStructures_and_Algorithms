import java.util.Arrays;

class Solution {
  public int[][] transpose(int[][] matrix) {
    int[][] dp = new int[matrix[0].length][matrix.length];
    for (int i = 0; i < matrix.length; i ++) {
      for (int j = 0; j < matrix[0].length; j++) {
        dp[j][i] = matrix[i][j];
      }
    }
    return dp;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(Arrays.deepToString(s.transpose(new int[][]{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    })));
    System.out.println(Arrays.deepToString(s.transpose(new int[][]{
      {1, 2, 3},
      {4, 5, 6}
    })));
  }
}