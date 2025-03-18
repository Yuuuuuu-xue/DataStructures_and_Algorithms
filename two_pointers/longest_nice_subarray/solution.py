from typing import List

class Solution:
    def longestNiceSubarray(self, nums: List[int]) -> int:
        window = 0
        o = 0

        left = 0
        for right in range(len(nums)):
            # Update the window
            while nums[right] & window != 0:
                o = max(o, right - left)
                left_num = nums[left]
                window &= ~left_num
                left += 1
            window |= nums[right]
        return max(o, right - left + 1)
