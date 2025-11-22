from typing import List

class Solution:
    def waysToMakeFair(self, nums: List[int]) -> int:
        even_sum = 0
        odd_sum = 0

        even_prefix = []
        odd_prefix = []

        for i in range(len(nums)):
            if i % 2 == 0:
                even_sum += nums[i]
            else:
                odd_sum += nums[i]
            even_prefix.append(even_sum)
            odd_prefix.append(odd_sum)

        
        o = 0
        for i in range(len(nums)):
            even_sum_before_i = 0
            odd_sum_before_i = 0
            if i > 0:
                even_sum_before_i = even_prefix[i - 1]
                odd_sum_before_i = odd_prefix[i - 1]
            
            even_sum_after_i = 0
            odd_sum_after_i = 0
            if i < len(nums) - 1:
                # i is even, if i is removed, then i + 1 is even
                even_sum_after_i = odd_prefix[-1] - odd_prefix[i]
                odd_sum_after_i = even_prefix[-1] - even_prefix[i]
            
            if even_sum_before_i + even_sum_after_i == odd_sum_before_i + odd_sum_after_i:
                o += 1
        
        return o