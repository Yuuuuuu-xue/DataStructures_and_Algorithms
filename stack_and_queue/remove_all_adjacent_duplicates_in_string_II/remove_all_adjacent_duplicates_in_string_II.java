import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;

class Solution {
  public String removeDuplicates(String s, int k) {
    ArrayList<Map.Entry<Character, Integer>> stack = new ArrayList<>();
    for (char c : s.toCharArray()) {
      if (!stack.isEmpty() && stack.get(stack.size() - 1).getKey() == c) {
        int counter = stack.get(stack.size() - 1).getValue() + 1;
        stack.get(stack.size() - 1).setValue(counter);
        if (counter >= k) {
          stack.remove(stack.size() - 1);
        }
      } else {
        stack.add(new AbstractMap.SimpleEntry<>(c, 1));
      }
    }
    StringBuilder sb = new StringBuilder();
    for (Map.Entry<Character, Integer> p : stack) {
      char[] arr = new char[p.getValue()];
      Arrays.fill(arr, p.getKey());
      sb.append(arr);
    }
    return sb.toString();
  }
}


class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.removeDuplicates("abcd", 2));
    System.out.println(s.removeDuplicates("deeedbbcccbdaa", 3));
    System.out.println(s.removeDuplicates("pbbcggttciiippooaais", 2));
  }
}