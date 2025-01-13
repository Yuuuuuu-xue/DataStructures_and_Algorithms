from collections import defaultdict

class Solution:
    def minimumLength(self, s: str) -> int:
        m = defaultdict(int)
        for c in s:
            m[c] += 1
        
        o = 0
        for c in m:
            if m[c] % 2 == 0:
                o += 2
            else:
                o += 1
        
        return o
