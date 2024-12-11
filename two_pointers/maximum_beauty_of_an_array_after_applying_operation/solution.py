from typing import List

class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        nums.sort()

        left = 0
        o = 0
        for right in range(len(nums)):
            while left <= right and nums[left] + k < nums[right] - k:
                # Pop from the window
                left += 1
            
            o = max(o, right - left + 1)
        
        return o
