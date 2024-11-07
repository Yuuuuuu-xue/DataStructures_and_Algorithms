from typing import List

class Solution:
    def largestCombination(self, candidates: List[int]) -> int:
        o = 0

        for i in range(24):
            curr = 0
            for num in candidates:
                # ith bit is 1
                if num & (1 << i):
                    curr += 1
            o = max(o, curr)
        
        return o
