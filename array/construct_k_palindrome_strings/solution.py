from collections import defaultdict

class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        if k > len(s):
            return False

        m = defaultdict(int)
        for c in s:
            m[c] += 1
        
        num_odd = 0
        for c in m:
            if m[c] % 2 != 0:
                num_odd += 1
        
        return num_odd <= k
