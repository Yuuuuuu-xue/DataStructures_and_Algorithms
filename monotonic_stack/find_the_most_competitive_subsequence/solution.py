from typing import List

class Solution:
    def mostCompetitive(self, nums: List[int], k: int) -> List[int]:
        mono_stack = []
        n = len(nums)
        for i in range(n):
            while len(mono_stack) > 0 and len(mono_stack) - 1 + (n - i) >= k and mono_stack[-1] > nums[i]:
                mono_stack.pop()
            
            if len(mono_stack) < k:
                mono_stack.append(nums[i])
        return mono_stack
