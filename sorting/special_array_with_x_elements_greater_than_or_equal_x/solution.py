from typing import List

class Solution:
    def specialArray(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        i = 0
        
        for x in range(0, n + 1):
            while i < n and nums[i] < x:
                i += 1
            
            # nums[i] >= x for i, ..., len - 1
            if x == n - i:
                return x
        
        return -1
