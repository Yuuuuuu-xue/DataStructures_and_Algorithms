import java.util.ArrayList;

class Solution {
  public boolean find132pattern(int[] nums) {
    ArrayList<Integer> stack = new ArrayList<>();
    Integer maxNum = Integer.MIN_VALUE;
    for (int i = nums.length - 1; i >= 0; i--) {
      // This maxNum will be our nums[k]
      while(!stack.isEmpty() && stack.get(stack.size() - 1) < nums[i]) {
        maxNum = stack.remove(stack.size() - 1);
      }
      if (nums[i] < maxNum) {
        return true;
      }
      if (nums[i] > maxNum) {
        stack.add(nums[i]);
      }
    }
    return false;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.find132pattern(new int[]{1, 2, 3, 4}));
    System.out.println(s.find132pattern(new int[]{3, 1, 4, 2}));
    System.out.println(s.find132pattern(new int[]{-1, 3, 2, 0}));
    System.out.println(s.find132pattern(new int[]{1, 0, 1, -4, -3}));
    System.out.println(s.find132pattern(new int[]{1, 4, 0, -1, -2, -3, -1, -2}));
    System.out.println(s.find132pattern(new int[]{3, 5, 0, 3, 4}));
  }
}
