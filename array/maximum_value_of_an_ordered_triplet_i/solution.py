from typing import List

class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        max_i = 0
        max_diff = 0
        o = 0

        for k in range(len(nums)):
            o = max(o,  max_diff * nums[k])
            max_diff = max(max_diff, max_i - nums[k])
            max_i = max(max_i, nums[k])

        return o        
