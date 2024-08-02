from typing import List

class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        num_ones = 0
        for num in nums:
            if num == 1:
                num_ones += 1
        if num_ones == 0:
            return 0
        
        circular_nums = nums + nums
        
        num_zeroes_window = 0
        for i in range(num_ones):
            if circular_nums[i] == 0:
                num_zeroes_window += 1

        min_num_zeroes = num_zeroes_window
        
        for i in range(num_ones, len(circular_nums)):
            if circular_nums[i] == 0:
                num_zeroes_window += 1
            if circular_nums[i - num_ones] == 0:
                num_zeroes_window -= 1
            
            min_num_zeroes = min(min_num_zeroes, num_zeroes_window)
        
        return min_num_zeroes