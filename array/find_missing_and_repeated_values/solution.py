from typing import List
from collections import defaultdict

class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        m = defaultdict(int)

        for lst in grid:
            for item in lst:
                m[item] += 1

        a = 0
        b = 0

        # Since index 1 based
        for i in range(len(grid) * len(grid) + 1):
            if m[i] == 2:
                a = i
            elif m[i] == 0:
                b = i

            if a != 0 and b != 0:
                return [a, b]
        return [a, b]
