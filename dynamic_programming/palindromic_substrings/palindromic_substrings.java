import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

class Solution {
  public int countSubstrings(String s) {
    Set<String> p = new HashSet<>();
    int[] dp = new int[s.length()];
    for (char c : s.toCharArray()) {
      dp[0] += 1;
      p.add(String.valueOf(c));
    }
    for (int i = 1; i < s.length(); i ++) {
      for (int j = 0; j < s.length() - i; j++) {
        if (s.charAt(j) == s.charAt(j + i) && (j + 1 >= j + i || p.contains(s.substring(j + 1, j + i)))) {
          dp[i] ++;
          p.add(s.substring(j, j + i + 1));
        }
      }
      dp[i] += dp[i - 1];
    }
    // System.out.println(p);
    // System.out.println(Arrays.toString(dp));
    return dp[s.length() - 1];
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.countSubstrings("abc"));
    System.out.println(s.countSubstrings("aaa"));
  }
}