from typing import List

class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        s = set()
        for num in banned:
            if num <= n:
                s.add(num)

        curr_sum = 0
        o = 0

        for i in range(1, n + 1):
            if i not in s and curr_sum + i <= maxSum:
                curr_sum += i
                o += 1
            if curr_sum >= maxSum:
                return o

        return o     
