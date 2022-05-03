class Solution {
  public int findUnsortedSubarray(int[] nums) {
      int left = 0;
      int right = nums.length - 1;
      // Find the left and right pointer
      while (left < nums.length - 1) {
        if (nums[left] <= nums[left + 1]) {
          left ++;
        } else {
          break;
        }
      }
      while (right > 0) {
        if (nums[right] >= nums[right - 1]) {
          right --;
        } else {
          break;
        }
      }
      // No need to sort
      if (right <= left) {
        return 0;
      }
      // Find the minimum value and maximum value
      int i = left;
      int min_ = nums[left];
      int max_ = nums[right];
      while (i <= right) {
        if (nums[i] < min_) {
          min_ = nums[i];
        }
        if (nums[i] > max_) {
          max_ = nums[i];
        }
        i ++;
      }

      // Find the correct left and right pointer by comparing to the min_ and max_ values
      while (left > 0 && nums[left - 1] > min_) {
        left --;
      }
      while (right < nums.length - 1 && nums[right + 1] < max_) {
        right ++;
      }
      return right - left + 1;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.findUnsortedSubarray(new int[] {2, 6, 4, 8, 10, 9, 15}));
    System.out.println(s.findUnsortedSubarray(new int[] {1, 2, 3, 4}));
    System.out.println(s.findUnsortedSubarray(new int[] {1}));
  }
}