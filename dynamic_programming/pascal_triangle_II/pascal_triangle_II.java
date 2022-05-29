import java.util.LinkedList;
import java.util.List;

class Solution {
  public List<Integer> getRow(int rowIndex) {
    LinkedList<Integer> dp = new LinkedList<>();
    dp.add(1);
    if (rowIndex == 0) {
      return dp;
    }   
    dp.add(1);
    for (int i = 2; i <= rowIndex; i++) {
      int len = dp.size();
      int prev = dp.pollFirst();
      dp.add(1);
      for (int j = 1; j < len; j++) {
        int curr = dp.pollFirst();
        dp.add(prev + curr);
        prev = curr;
      }
      dp.add(1);
    }
    return dp;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.getRow(3));
    System.out.println(s.getRow(0));
    System.out.println(s.getRow(1));
  }
}