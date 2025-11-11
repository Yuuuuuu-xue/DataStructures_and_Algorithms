from typing import List
from functools import lru_cache

class Solution:
    @lru_cache(None)
    def solve(self, i, curr_0, curr_1) -> int:
        if i >= len(self.lst):
            return 0
        # Returns the number of ways we can construct with nums[i:] and curr_0, curr_1
        o = 0
        if self.lst[i][0] + curr_0 <= self.m and self.lst[i][1] + curr_1 <= self.n:
            # We can take index i
            o = max(o, 1 + self.solve(i + 1, self.lst[i][0] + curr_0, self.lst[i][1] + curr_1))
        return max(o, self.solve(i + 1, curr_0, curr_1))

    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        self.lst = []
        for str in strs:
            num_0 = 0
            num_1 = 1
            for c in str:
                if c == '0':
                    num_0 += 1
                else:
                    num_1 += 1
            
            self.lst.append((num_0, num_1))
        
        self.m = m
        self.n = n
        return self.solve(0, 0, 0)

