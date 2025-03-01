from typing import List

class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        for i in range(len(nums) - 1):
            if nums[i] == nums[i + 1]:
                nums[i] *= 2
                nums[i + 1] = 0

        o = []
        for num in nums:
            if num != 0:
                o.append(num)

        for _ in range(len(nums) - len(o)):
            o.append(0)
        return o        
