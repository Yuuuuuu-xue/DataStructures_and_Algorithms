from typing import List
from math import ceil

class Solution:
    def solve(self, n: int, quantities: List[int], k: int) -> bool:
        o = 0
        for q in quantities:
            o += ceil(q / k)
            if o > n:
                return False
        return o <= n

    def minimizedMaximum(self, n: int, quantities: List[int]) -> int:
        left = 1
        right = max(quantities)
        o = right

        while left <= right:
            mid = (left + right) // 2
            if self.solve(n, quantities, mid):
                # mid works, we can check the left side
                right = mid - 1
                o = min(o, mid)
            else:
                left = mid + 1
        
        return o
