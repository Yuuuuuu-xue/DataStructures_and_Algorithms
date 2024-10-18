from typing import List

class Solution:
    def solve(self, nums: List[int], max_or: int, i: int, curr: int):
        if i >= len(nums):
            return
        if curr | nums[i] == max_or:
            self.o += 1
        # Include current element
        self.solve(nums, max_or, i + 1, curr | nums[i])
        # Not include the current element
        self.solve(nums, max_or, i + 1, curr)

    def countMaxOrSubsets(self, nums: List[int]) -> int:
        max_or = 0
        for num in nums:
            max_or |= num

        self.o = 0
        self.solve(nums, max_or, 0, 0)
        return self.o
