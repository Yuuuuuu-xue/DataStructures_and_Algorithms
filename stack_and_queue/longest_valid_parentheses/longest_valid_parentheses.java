import java.util.Stack;

class Solution {
    public int longestValidParentheses(String s) {
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push(i);
            } else {
                if (!stack.empty() && s.charAt(stack.peek()) == '(') {
                    stack.pop();
                } else {
                    stack.push(i);
                }
            }
        }
        if (stack.isEmpty()) {
            return s.length();
        }
        int o = 0;
        System.out.println(stack);
        int curr = s.length(); // assume s.length is valid index
        while (!stack.isEmpty()) {
            int next = stack.pop();
            o = Math.max(o, curr - next - 1);
            curr = next;
        }
        if (curr > 0) {
            o = Math.max(o, curr - 0); // assume 0 is valid index
        }
        return o;
    }
}

class Test {
    public static void main(String[] args) {
        Solution s = new Solution();
        // System.out.println(s.longestValidParentheses("(()"));
        // System.out.println(s.longestValidParentheses(")()())"));
        // System.out.println(s.longestValidParentheses(""));
        // System.out.println(s.longestValidParentheses("(()(((()"));
        // System.out.println(s.longestValidParentheses("()(()"));
        System.out.println(s.longestValidParentheses("(()))())("));
    }
}