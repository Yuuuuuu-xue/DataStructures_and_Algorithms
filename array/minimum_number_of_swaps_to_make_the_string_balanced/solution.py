class Solution:
    def minSwaps(self, s: str) -> int:
        x = 0
        for c in s:
            if c == '[':
                x += 1
            else: 
                if x > 0:
                    x -= 1
        
        return (x + 1) // 2
