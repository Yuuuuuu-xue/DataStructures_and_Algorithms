from typing import List

class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        nums.sort()
        o = 1
        curr_min = nums[0]

        for i in range(1, len(nums)):
            if nums[i] - curr_min > k:
                # New group
                curr_min = nums[i]
                o += 1
        return o
