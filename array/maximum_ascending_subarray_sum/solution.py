from typing import List

class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        o = 0

        curr_sum = nums[0]

        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                # Not ascending
                o = max(o, curr_sum)
                curr_sum = nums[i + 1]
            else:
                curr_sum += nums[i + 1]
        
        return max(o, curr_sum)

