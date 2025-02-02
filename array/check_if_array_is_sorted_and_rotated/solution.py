from typing import List

class Solution:
    def check(self, nums: List[int]) -> bool:
        # Assume 1 <= nums[i] <= 100
        smallest_element = 0
        for i in range(len(nums) - 1):
            if nums[i] <= nums[i + 1]:
                if smallest_element != 0 and nums[i] > nums[0]:
                    return False
                continue
            
            if smallest_element != 0:
                return False
            
            smallest_element = nums[i + 1]
        
        if smallest_element != 0 and nums[-1] > nums[0]:
            return False
        return True
