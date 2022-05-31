import java.util.HashSet;
import java.util.Set;

class Solution {
  public boolean hasAllCodes(String s, int k) {
    if (s.length() < k) {
      return false;
    }

    StringBuilder sb = new StringBuilder();
    Set<String> seen = new HashSet<>();

    sb.append(s.substring(0, k));
    seen.add(sb.toString());

    for (int i = k; i < s.length(); i++) {
      sb.deleteCharAt(0); 
      sb.append(s.charAt(i));
      seen.add(sb.toString());
    }
    return seen.size() == Math.pow(2, k);
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.hasAllCodes("00110110", 2));
    System.out.println(s.hasAllCodes("0110", 1));
    System.out.println(s.hasAllCodes("0110", 2));
  }
}