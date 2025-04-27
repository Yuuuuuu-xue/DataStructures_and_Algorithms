from typing import List

class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        o = 0

        for i in range(len(nums) - 2):
            if (nums[i] + nums[i + 2]) * 2 == nums[i + 1]:
                o += 1
        
        return o
