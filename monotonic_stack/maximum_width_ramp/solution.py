from typing import List

class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        # Strictly decreasing
        mono_stack = []
        for i, num in enumerate(nums):
            if not mono_stack or nums[mono_stack[-1]] > num: 
                mono_stack.append(i)

        o = 0
        for j in range(len(nums) - 1, -1, -1):
            while mono_stack and nums[j] >= nums[mono_stack[-1]]:
                o = max(o, j - mono_stack[-1])
                mono_stack.pop()

            if not mono_stack:
                break
        
        return o
