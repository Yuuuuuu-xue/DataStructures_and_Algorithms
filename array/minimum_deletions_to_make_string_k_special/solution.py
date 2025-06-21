from collections import defaultdict

class Solution:
    def minimumDeletions(self, word: str, k: int) -> int:
        m = defaultdict(int)

        for c in word:
            m[c] += 1

        o = float('inf')
        if len(m) <= 1:
            return 0
        for c in m:
            curr = 0
            for cc in m:
                if cc != c and m[cc] < m[c]:
                    curr += m[cc]
                elif m[cc] > m[c] + k:
                    curr += m[cc] - m[c] - k
            o = min(o, curr)
        
        return o
