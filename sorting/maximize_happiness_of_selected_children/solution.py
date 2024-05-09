from typing import List

class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        happiness.sort(reverse=True)
        total_happiness = 0

        for i, item in enumerate(happiness):
            if item - i <= 0 or i >= k:
                return total_happiness
            total_happiness += item - i
        
        return total_happiness
        