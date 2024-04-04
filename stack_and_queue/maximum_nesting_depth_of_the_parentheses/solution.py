class Solution:
    def maxDepth(self, s: str) -> int:
        o = 0
        stack = 0
        for c in s:
            if c == '(':
                stack += 1
                o = max(o, stack)
            elif c == ')':
                stack -= 1
        return o        
