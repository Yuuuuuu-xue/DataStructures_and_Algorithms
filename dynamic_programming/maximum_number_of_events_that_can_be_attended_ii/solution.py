from typing import List
from bisect import bisect_left
from functools import lru_cache

class Solution:
    @lru_cache(maxsize=None)
    def binary_search(self, i):
        # search smallest start time j <= end time i + 1
        return bisect_left(self.events, self.events[i][1] + 1, key=lambda e : e[0])

    @lru_cache(maxsize=None)
    def dp(self, i, k):
        # Base case
        if i >= len(self.events) or k <= 0:
            return 0
        
        skip_value = self.dp(i + 1, k)
        # j is the next available index
        j = self.binary_search(i)
        take_value = self.events[i][2] + self.dp(j, k - 1)
        return max(skip_value, take_value)

    def maxValue(self, events: List[List[int]], k: int) -> int:
        self.events = sorted(events)
        return self.dp(0, k)
