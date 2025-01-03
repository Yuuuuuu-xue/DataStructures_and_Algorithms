from typing import List

class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        left_sum = 0
        right_sum = sum(nums)
        o = 0

        for i in range(len(nums) - 1):
            left_sum += nums[i]
            right_sum -= nums[i]

            if left_sum >= right_sum:
                o += 1
        
        return o
