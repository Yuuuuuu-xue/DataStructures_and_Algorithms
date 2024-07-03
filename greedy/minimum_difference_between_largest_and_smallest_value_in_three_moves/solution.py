from typing import List

class Solution:
    def minDifference(self, nums: List[int]) -> int:
        n = len(nums)
        if n <= 4:
            return 0

        nums.sort()

        min_diff = float('inf')

        for i in range(0, 4):
            min_diff = min(min_diff, abs(nums[i] - nums[n - (3 - i) - 1]))
        
        return min_diff
