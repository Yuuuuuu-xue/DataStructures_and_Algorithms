from typing import List

class Solution:
    def longestSquareStreak(self, nums: List[int]) -> int:
        nums_set = set(nums)
        o = 0

        for num in nums:
            curr_num = num
            curr_o = 0

            while curr_num in nums_set:
                curr_num = curr_num * curr_num
                curr_o += 1
        
            o = max(o, curr_o)
        
        return -1 if o <= 1 else o
