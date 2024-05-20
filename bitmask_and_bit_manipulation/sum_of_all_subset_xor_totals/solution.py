from typing import List

class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        subarrays = []
        total_sum = 0
    
        for i in range(len(nums) - 1, -1, -1):
            for j in range(len(subarrays)):
                curr_num = subarrays[j] ^ nums[i]
                total_sum += curr_num
                subarrays.append(curr_num)
            total_sum += nums[i]
            subarrays.append(nums[i])    
        return total_sum
