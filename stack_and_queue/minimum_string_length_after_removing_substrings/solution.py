class Solution:
    def minLength(self, s: str) -> int:
        stack = []
        for c in s:
            if c == 'B' and stack and stack[-1] == 'A':
                stack.pop()
            elif c == 'D' and stack and stack[-1] == 'C':
                stack.pop()
            else:
                stack.append(c)
        
        return len(stack)
