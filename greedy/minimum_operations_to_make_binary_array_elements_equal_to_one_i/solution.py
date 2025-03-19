from typing import List

class Solution:
    def minOperations(self, nums: List[int]) -> int:
        o = 0
        for i in range(len(nums) - 2):
            if nums[i] == 0:
                nums[i] = 1
                # Flip the value
                nums[i + 1] ^= 1
                nums[i + 2] ^= 1
                o += 1
        
        if nums[-1] == 0 or nums[-2] == 0:
            # Not possible
            return -1
        return o
