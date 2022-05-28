import java.util.Arrays;

class Solution {
  public void sortColors(int[] nums) {
    int i = 0;
    int j = nums.length - 1;
    int n = nums.length;
    while (i < n && nums[i] == 0) {
      i++;
    }
    while (j >= 0 && nums[j] == 2) {
      j--;
    }
    int k = i;
    while (k <= j) {
      if (nums[k] == 1) {
        k ++;
      } else if (nums[k] == 0) {
        nums[k] = nums[i];
        nums[i++] = 0;
        if (k < i) {
          k = i;
        }
      } else {
        nums[k] = nums[j];
        nums[j--] = 2;
      }
    }
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    int[] a = {2, 0, 2, 1, 1, 0};
    s.sortColors(a);
    System.out.println(Arrays.toString(a));
    int[] b=  {2, 0, 1};
    s.sortColors(b);
    System.out.println(Arrays.toString(b));
  }
}