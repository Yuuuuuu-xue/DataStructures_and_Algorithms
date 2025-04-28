from typing import List

class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        curr_sum = 0
        i = 0
        n = len(nums)
        o = 0

        for j in range(n):
            curr_sum += nums[j]

            # Updating the window until the score is less than k
            while curr_sum * (j - i + 1) >= k:
                # Remove i from window
                curr_sum -= nums[i]
                i += 1

            o += j - i + 1

        return o
