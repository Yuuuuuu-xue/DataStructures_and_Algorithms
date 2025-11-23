from typing import List

class Solution:
    def maxSumDivThree(self, nums: List[int]) -> int:
        dp = [0, 0, 0]
        dp[nums[0] % 3] = nums[0]

        for i in range(1, len(nums)):
            dp_copy = dp[:]
            for k in range(3):
                new_rem = (dp_copy[k] + nums[i]) % 3
                dp[new_rem] = max(dp[new_rem], dp_copy[k] + nums[i]) 

        return dp[0]
