class Solution:
    def makeGood(self, s: str) -> str:
        n = len(s)
        stack = []
        
        for c in s:
            if len(stack) == 0:
                stack.append(c)
                continue
            # bad pair
            if (stack[-1].islower() and c.isupper() and stack[-1] == c.lower()) or \
                    (stack[-1].isupper() and c.islower() and stack[-1].lower() == c):
                stack.pop()
            else:
                stack.append(c)
        
        o = ""
        for c in stack:
            o += c
        return o
