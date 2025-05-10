from typing import List

class Solution:
    def minSum(self, nums1: List[int], nums2: List[int]) -> int:
        num_zero_1 = 0
        num_zero_2 = 0  
        sum_1 = 0
        sum_2 = 0

        for num in nums1:
            if num == 0:
                num_zero_1 += 1
                sum_1 += 1
            else:
                sum_1 += num

        for num in nums2:
            if num == 0:
                num_zero_2 += 1
                sum_2 += 1
            else:
                sum_2 += num

        # If value is smaller
        if (sum_1 < sum_2 and num_zero_1 == 0) or (sum_2 < sum_1 and num_zero_2 == 0):
            return -1
        
        return max(sum_1, sum_2)
