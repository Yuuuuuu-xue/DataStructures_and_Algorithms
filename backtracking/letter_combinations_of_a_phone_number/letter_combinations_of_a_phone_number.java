import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map;

class Solution {

  private Map<Character, Character[]> m = new HashMap<Character, Character[]>(){{
    put('2', new Character[]{'a', 'b', 'c'});
    put('3', new Character[]{'d', 'e', 'f'});
    put('4', new Character[]{'g', 'h', 'i'});
    put('5', new Character[]{'j', 'k', 'l'});
    put('6', new Character[]{'m', 'n', 'o'});
    put('7', new Character[]{'p', 'q', 'r', 's'});
    put('8', new Character[]{'t', 'u', 'v'});
    put('9', new Character[]{'w', 'x', 'y', 'z'});
  }}; 

  private List<String> o;

  private void backtrack(char[] digits, int i, StringBuilder curr_s) {
    if (i > 0 && i == digits.length) {
      o.add(curr_s.toString());
    } else if (i < digits.length) {
      for (char c : m.get(digits[i])) {
        curr_s.append(c);
        backtrack(digits, i + 1, curr_s);
        curr_s.deleteCharAt(curr_s.length() - 1);
      }
    }
  }

  public List<String> letterCombinations(String digits) {
    this.o = new ArrayList<>();
    backtrack(digits.toCharArray(), 0, new StringBuilder());
    return this.o;
  }
}

class Test {
  public static void main(String[] args) {
    Solution s = new Solution();
    System.out.println(s.letterCombinations("23"));
    System.out.println(s.letterCombinations(""));
    System.out.println(s.letterCombinations("2"));
  }
}