from typing import List

class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        num_chalk = 0
        for c in chalk:
            num_chalk += c

        k = k % num_chalk
        for i, c in enumerate(chalk):
            k -= c
            if k < 0:
                return i
        return -1       
