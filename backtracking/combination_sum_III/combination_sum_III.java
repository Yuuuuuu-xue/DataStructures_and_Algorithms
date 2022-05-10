import java.util.ArrayList;
import java.util.List;

class Solution {
  private List<List<Integer>> s;

  private void backtrack(int k, int n, List<Integer> lst, int curr_k, int curr_n, int i) {
    // System.out.println(k + ", " + n + ", " + lst + ", " + curr_k + ", " + curr_n + ", " + i);
    if (curr_k == k && curr_n == n) {
      s.add(new ArrayList<>(lst));
      return;
    } 
    
    for (int j = i; j <= Math.min(n, 9); j++) {
      if (curr_k + 1 <= k && curr_n + j <= n) {
        lst.add(j);
        backtrack(k, n, lst, curr_k + 1, curr_n + j, j + 1);
        lst.remove(lst.size() - 1);
      }
    }

  }
  
  public List<List<Integer>> combinationSum3(int k, int n) {
    this.s = new ArrayList<>();
    backtrack(k, n, new ArrayList<>(), 0, 0, 1);
    return this.s;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.combinationSum3(3, 7));
    System.out.println(s.combinationSum3(3, 9));
    System.out.println(s.combinationSum3(4, 1));
    System.out.println(s.combinationSum3(9, 45));
  }
}