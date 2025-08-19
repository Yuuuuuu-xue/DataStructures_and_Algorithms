from typing import List

class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        o = 0

        i = 0
        while i < len(nums):
            j = i
            while j < len(nums) and nums[j] == 0:
                o += j - i + 1
                j += 1
            
            i = j + 1
        return o
            

