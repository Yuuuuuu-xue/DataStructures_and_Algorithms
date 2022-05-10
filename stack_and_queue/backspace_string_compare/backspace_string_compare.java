import java.util.ArrayList;

class Solution {

    private void helper(ArrayList<Character> stack, String x) {
        for (char ch: x.toCharArray()) {
            if (ch == '#') {
                if (stack.size() > 0) {
                    stack.remove(stack.size() - 1);
                }
            } else {
                stack.add(ch);
            }
        }
    }

    public boolean backspaceCompare(String s, String t) {
        ArrayList<Character> stackS = new ArrayList<>();
        ArrayList<Character> stackT = new ArrayList<>();
        helper(stackS, s);
        helper(stackT, t);
        return stackS.equals(stackT);
    }
}

class Main {
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.backspaceCompare("ab#c", "ad#c"));
        System.out.println(s.backspaceCompare("ab##", "c#d#"));
        System.out.println(s.backspaceCompare("a#c", "b"));
    }
}





