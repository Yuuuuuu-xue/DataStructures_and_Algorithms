from typing import List

class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        n = len(nums)

        left = 0
        zero_i = -1
        o = 0

        for right in range(n):
            if nums[right] == 1:
                if zero_i == -1:
                    o = max(o, right - left + 1)
                else:
                    o = max(o, right - left)
                continue

            # nums[right] is zero
            if zero_i == -1:
                # We set the first zero
                zero_i = right
                o = max(o, right - left)
                continue

            # We see second zero in the window, need to update zero pointer
            left = zero_i + 1
            zero_i = right
            o = max(o, right - left)
        
        if zero_i == -1:
            return n - 1

        return o
