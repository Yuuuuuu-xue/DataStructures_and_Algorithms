import java.util.Arrays;

class Solution {
  public int[] sortArrayByParity(int[] nums) {
    int evenPointer = 0;
    int oddPointer = 0;
    while (evenPointer < nums.length && oddPointer < nums.length) {
      if (nums[evenPointer] % 2 != 0) {
        evenPointer ++;
      } else if (nums[oddPointer] % 2 == 0) {
        oddPointer ++;
      } else {
        // evenPointer points at an even number and oddPointer points at an odd number
        if (evenPointer > oddPointer) {
          // swap them
          int temp = nums[evenPointer];
          nums[evenPointer] = nums[oddPointer];
          nums[oddPointer] = temp;
          evenPointer ++;
          oddPointer ++;
        } else {
          evenPointer ++;
        }
      }
    }
    return nums;
  }
}


class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(Arrays.toString(s.sortArrayByParity(new int[] {3, 1, 2, 4})));
    System.out.println(Arrays.toString(s.sortArrayByParity(new int[] {2, 4, 3, 1})));
    System.out.println(Arrays.toString(s.sortArrayByParity(new int[] {3, 4, 2, 1})));
    System.out.println(Arrays.toString(s.sortArrayByParity(new int[] {0})));
    System.out.println(Arrays.toString(s.sortArrayByParity(new int[] {0, 1, 2})));
  }
}
