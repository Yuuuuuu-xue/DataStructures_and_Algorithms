import java.util.AbstractMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.Set;

class Solution {
  public int shortestPathBinaryMatrix(int[][] grid) {
    if (grid[0][0] == 1 || grid[grid.length - 1][grid.length - 1] == 1) {
      return -1;
    }
    Queue<int[]> q = new LinkedList<>();
    int o = 1;
    if (grid[0][0] == 0) {
      int[] start = new int[]{0, 0};
      q.add(start);
    }
    int[][] directions = {
      {-1, -1}, {-1, 0}, {-1, 1},
      {0, -1}, {0, 1},
      {1, -1}, {1, 0}, {1, 1}
    };
    while (!q.isEmpty()) {
      int len = q.size();
      for (int i = 0; i < len; i++) {
        int[] curr = q.remove();
        // Find the last node
        if (curr[0] == grid.length - 1 && curr[1] == grid.length - 1) {
          return o;
        }
        // Find the solution
        for (int[] d : directions) {
          int[] next = new int[]{curr[0] + d[0], curr[1] + d[1]};
          if (next[1] >= 0 && next[0] >= 0 && next[0] < grid.length && next[1] < grid.length) {
            if (grid[next[0]][next[1]] == 0 && grid[next[0]][next[1]] == 0) {
              q.add(next);
            }
            grid[next[0]][next[1]] = 1;
          }
        }
      }
      o ++;
    }
    return -1;
  }
}


class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.shortestPathBinaryMatrix(new int[][]{{0, 1}, {1, 0}}));
    System.out.println(s.shortestPathBinaryMatrix(new int[][]{{0, 0, 0}, {1, 1, 0}, {1, 1, 0}}));
    System.out.println(s.shortestPathBinaryMatrix(new int[][]{{1, 0, 0}, {1, 1, 0}, {1, 1, 0}}));
    System.out.println(s.shortestPathBinaryMatrix(new int[][]{{0, 0, 0}, {1, 1, 0}, {1, 1, 1}}));
    System.out.println(s.shortestPathBinaryMatrix(new int[][]{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}));
  }
}

