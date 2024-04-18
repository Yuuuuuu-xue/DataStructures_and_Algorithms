from typing import List

class Solution:
    def maxSumMinProduct(self, nums: List[int]) -> int:
        mod = int(1e9 + 7)
        mono_stack = []
        curr_sum = 0
        o = 0
        nums.append(0)
        for i in range(len(nums)):
            while len(mono_stack) > 0 and nums[mono_stack[-1][0]] >= nums[i]:
                idx, _ = mono_stack.pop()
            
                actual_sum = curr_sum
                if len(mono_stack) > 0:
                    actual_sum -= mono_stack[-1][1]
                o = max(o, actual_sum * nums[idx])
            
            curr_sum += nums[i]
            mono_stack.append((i, curr_sum))
        return o % mod
            
