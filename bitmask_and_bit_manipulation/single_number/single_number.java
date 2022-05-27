class Solution {
    public int singleNumber(int[] nums) {
        int num = 0;
        for (int n : nums) {
            num ^= n;
        }
        return num;
    }
}

class Test {
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.singleNumber(new int[]{2, 2, 1}));
        System.out.println(s.singleNumber(new int[]{4, 1, 2, 1, 2}));
        System.out.println(s.singleNumber(new int[]{1}));
    }
}