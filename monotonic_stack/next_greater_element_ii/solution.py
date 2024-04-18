from typing import List

class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        mono_stack = []
        n = len(nums)
        o = [-1 for _ in range(n)]

        for i in range(2 * n - 1, -1, -1):
            # Pop elements <= nums[i]
            while len(mono_stack) > 0 and mono_stack[-1] <= nums[i % n]:
                mono_stack.pop()
            
            if len(mono_stack) > 0:
                o[i] = mono_stack[-1]
            
            mono_stack.append(nums[i % n])

        return o

