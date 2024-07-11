class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack = []

        for c in s:
            if c != ')':
                stack.append(c)
            else:
                reverse_s = ""
                while stack and stack[-1] != '(':
                    reverse_s += stack.pop()
                # Pop the (
                stack.pop()

                # Append back to stack
                for c in reverse_s:
                    stack.append(c)
        
        return "".join(stack)
