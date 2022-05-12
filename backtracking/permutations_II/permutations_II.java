import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;

class Solution {

  private HashSet<List<Integer>> o;

  private void backtrack(List<Integer> nums, int i) {

    if (i >= nums.size()) {
      this.o.add(new ArrayList<>(nums));
      return;
    }
    for (int j = i; j < nums.size(); j ++) {
      // swap
      Collections.swap(nums, i, j);
      this.backtrack(nums, i + 1);
      // backtrack
      Collections.swap(nums, j, i);

    }
  }
  
  public List<List<Integer>> permuteUnique(int[] nums) {
    this.o = new HashSet<>();
    List<Integer> lst = new ArrayList<>();
    Arrays.stream(nums).forEach(lst::add);
    this.backtrack(lst, 0);
    return new ArrayList<>(this.o);   
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.permuteUnique(new int[]{1, 1, 2}));
    System.out.println(s.permuteUnique(new int[]{1, 2, 3}));
    // System.out.println(s.permuteUnique(new int[]{-1,2,0,-1,1,0,1}));
  }
}