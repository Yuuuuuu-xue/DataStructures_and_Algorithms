import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
  public int[][] merge(int[][] intervals) {
    Arrays.sort(intervals, (x, y) -> x[0] - y[0]);
    List<int[]> o = new ArrayList<>();
    int i = 0;
    int j = i;
    int maxElement = intervals[i][1];
    for (; j < intervals.length - 1; j ++) {
      maxElement = Math.max(maxElement, intervals[j][1]);
      if (maxElement < intervals[j + 1][0]) {
        o.add(new int[]{intervals[i][0], maxElement});
        i = j + 1;
        maxElement = intervals[j + 1][1];
      }
    }
    o.add(new int[]{intervals[i][0], Math.max(maxElement, intervals[j][1])});
    int[][] temp = new int[o.size()][2];
    for (i = 0; i < o.size(); i++) {
      temp[i] = o.get(i); 
    }
    return temp;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(Arrays.deepToString(s.merge(new int[][]{{1, 3}, {2, 6}, {8, 10}, {15, 18}})));
    System.out.println(Arrays.deepToString(s.merge(new int[][]{{1, 4}, {4, 5}})));
    System.out.println(Arrays.deepToString(s.merge(new int[][]{{1, 4}, {2, 3}})));
    System.out.println(Arrays.deepToString(s.merge(new int[][]{{1, 4}, {0, 2}, {3, 5}})));
  }
}