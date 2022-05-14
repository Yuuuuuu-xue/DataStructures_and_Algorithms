package shortest_weight_path.network_delay_time;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Queue;

class Solution {
  public int networkDelayTime(int[][] times, int n, int k) {
    int[] d = new int[n];
    Arrays.fill(d, Integer.MAX_VALUE);
    Map<Integer, List<Integer>> m = new HashMap<>();
    for (int i = 0; i < times.length; i++) {
      if (m.get(times[i][0]) == null) {
        List<Integer> lst = new ArrayList<>();
        lst.add(i);
        m.put(times[i][0], lst);
      } else {
        m.get(times[i][0]).add(i);
      }
    }      
    Queue<int[]> q = new PriorityQueue<>((a, b) -> a[0] - b[0]);
    q.add(new int[]{0, k});
    d[k - 1] = 0;
    while (!q.isEmpty()) {
      int[] u = q.remove();
      for(int i : m.getOrDefault(u[1], new ArrayList<Integer>())) {
        if (d[times[i][1] - 1] > u[0] + times[i][2]) {
          d[times[i][1] - 1] = u[0] + times[i][2];
          q.add(new int[]{d[times[i][1] - 1], times[i][1]});
        }
      }
    }
    int maxValue = Integer.MIN_VALUE;
    for (int num : d) {
      if (num == Integer.MAX_VALUE) {
        return -1;
      }
      maxValue = Math.max(maxValue, num);
    }
    return maxValue;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.networkDelayTime(new int[][]{{2, 1, 1}, {2, 3, 1}, {3, 4, 1}}, 4, 2));
    System.out.println(s.networkDelayTime(new int[][]{{1, 2, 1}}, 2, 1));
    System.out.println(s.networkDelayTime(new int[][]{{1, 2, 1}}, 2, 2));
  }
}


