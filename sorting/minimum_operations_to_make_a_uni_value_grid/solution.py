from typing import List

class Solution:
    def minOperations(self, grid: List[List[int]], x: int) -> int:
        lst = []
        for row in grid:
            lst.extend(row)

        lst.sort()

        median = lst[len(lst) // 2]
        o = 0

        for item in lst:
            diff = abs(item - median)
            if diff % x != 0:
                return -1
            o += diff // x
        return o
