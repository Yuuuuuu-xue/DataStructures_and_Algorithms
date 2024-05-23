from typing import List
from collections import defaultdict

class Solution:
    def solve(self, nums: List[int], k: int, i: int, curr) -> int:
        if i >= len(nums):
            return 1

        # Skip curr num
        num_beautiful_subsets = self.solve(nums, k, i + 1, curr)

        if curr[nums[i] - k] <= 0 and curr[nums[i] + k] <= 0:
            curr[nums[i]] += 1
            
            num_beautiful_subsets += self.solve(nums, k, i + 1, curr)

            # Backtrack
            curr[nums[i]] -= 1

        return num_beautiful_subsets

    def beautifulSubsets(self, nums: List[int], k: int) -> int:
        curr = defaultdict(int)
        # -1 to empty subset
        return self.solve(nums, k, 0, curr) - 1
