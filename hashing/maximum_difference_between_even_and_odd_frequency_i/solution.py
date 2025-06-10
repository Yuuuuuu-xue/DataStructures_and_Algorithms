from collections import defaultdict

class Solution:
    def maxDifference(self, s: str) -> int:
        m = defaultdict(int)
        for c in m:
            m[c] += 1
        
        max_odd = 0
        min_even = float('inf')

        for k in m:
            if m[k] % 2 == 0:
                min_even = min(min_even, m[k])
            else:
                max_odd = max(max_odd, m[k])
        return max_odd - min_even
