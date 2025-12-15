from typing import List

class Solution:
    def getDescentPeriods(self, prices: List[int]) -> int:
        # We skip the first day
        o = 1
        prev_counter = 1

        for i in range(1, len(prices)):
            if prices[i] == prices[i - 1] - 1:
                prev_counter += 1
            else:
                prev_counter = 1
            o += prev_counter
        return o
