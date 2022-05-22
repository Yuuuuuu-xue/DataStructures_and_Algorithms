class Solution {
  public int percentageLetter(String s, char letter) {
    int o = 0;
    for (char c : s.toCharArray()) {
      if (c == letter) {
        o += 1;
      }
    }
    return o * 100 / s.length();
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.percentageLetter("foobar", 'o'));
  }
}