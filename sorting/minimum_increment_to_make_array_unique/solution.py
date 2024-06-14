from typing import List

class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        nums.sort()
        num_increments = 0
        curr_num = 0

        for num in nums:
            # Move num to `curr_num`
            if num < curr_num:
                num_increments += curr_num - num
            else:
                curr_num = num
            curr_num += 1
        
        return num_increments
    
