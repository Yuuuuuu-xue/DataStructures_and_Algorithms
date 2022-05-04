import java.util.HashMap;
import java.util.Map;

class Solution {
  public int maxOperations(int[] nums, int k) {
    Map<Integer, Integer> m = new HashMap<>();
    int o = 0;
    for(int num : nums) {
      if (m.containsKey(k - num) && m.get(k - num) > 0) {
        o ++;
        m.put(k - num, m.get(k - num) - 1);
      } else {
        m.put(num, m.getOrDefault(num, 0) + 1);
      }
    }
    return o;
  }
}



class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.maxOperations(new int[] {1, 2, 3, 4}, 5));
    System.out.println(s.maxOperations(new int[] {3, 1, 3, 4, 3}, 6));
    System.out.println(s.maxOperations(new int[] {2,5,4,4,1,3,4,4,1,4,4,1,2,1,2,2,3,2,4,2}, 3));
  }
}