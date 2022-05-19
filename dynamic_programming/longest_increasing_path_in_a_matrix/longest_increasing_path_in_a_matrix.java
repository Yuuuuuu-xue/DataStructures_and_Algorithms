import java.util.HashMap;
import java.util.Map;

class Solution {

  int[][] dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  private int dfs(int[][] matrix, int[] dp, int i, int j) {
    int p = i * matrix[0].length + j;
    if (dp[p] > 0) {
      return dp[p];
    } else {
      int v = 1;
      for (int[] d : dir) {
        if (i + d[0] >= 0 && i + d[0] < matrix.length && j + d[1] >= 0 && j + d[1] < matrix[0].length 
            && matrix[i + d[0]][j + d[1]] > matrix[i][j]) {
          v = Math.max(v, 1 + dfs(matrix, dp, i + d[0], j + d[1]));
        } 
      }
      dp[p] = v;
      return v;
    }
  }

  public int longestIncreasingPath(int[][] matrix) {
    int[] dp = new int[matrix.length * matrix[0].length];
    int o = 0;
    for (int i = 0; i < matrix.length; i ++) {
      for (int j = 0; j < matrix[0].length; j ++) {
        o = Math.max(o, dfs(matrix, dp, i, j));
      }
    }
    // System.out.println(dp);
    return o;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.longestIncreasingPath(new int[][]{{9, 9, 4}, {6, 6, 8}, {2, 1, 1}}));
    System.out.println(s.longestIncreasingPath(new int[][]{{3, 4, 5}, {3, 2, 6}, {2, 2, 1}}));
    System.out.println(s.longestIncreasingPath(new int[][]{{1}}));
    System.out.println(s.longestIncreasingPath(new int[][]{
      {17,4,6,11,4,0,17,12,19,12,12,0},{0,6,4,4,5,9,15,1,11,13,18,0},{4,2,13,1,2,7,15,5,14,6,8,6}
    }));
  }
}