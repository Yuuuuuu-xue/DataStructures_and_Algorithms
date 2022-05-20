class Solution {
  public int uniquePathsWithObstacles(int[][] obstacleGrid) {
    for (int i = 0; i < obstacleGrid.length; i ++) {
      for (int j = 0; j < obstacleGrid[0].length; j ++) {
        if (i == 0 && j == 0) {
          if (obstacleGrid[0][0] == 1) {
            return 0;
          }
          obstacleGrid[0][0] = 1;
        } else if (obstacleGrid[i][j] == 1) {
          obstacleGrid[i][j] = 0;
        } else {
          obstacleGrid[i][j] = 0;
          if (i - 1 >= 0) {
            obstacleGrid[i][j] += obstacleGrid[i - 1][j];
          }
          if (j - 1 >= 0) {
            obstacleGrid[i][j] += obstacleGrid[i][j - 1];
          }
        }
      }
    }
    return obstacleGrid[obstacleGrid.length - 1][obstacleGrid[0].length - 1];
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.uniquePathsWithObstacles(new int[][]{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}));
    System.out.println(s.uniquePathsWithObstacles(new int[][]{{0, 1}, {0, 0}}));
  }
}