from typing import List

class Solution:
    def maxSumDivThree(self, nums: List[int]) -> int:
        dp = [[0 for _ in range(3)] for _ in range(len(nums))]
        dp[0][nums[0] % 3] = nums[0]

        for i in range(1, len(nums)):
            rem = nums[i] % 3
            dp[i][rem] = max(dp[i][rem], nums[i])
    
            for k in range(3):
                dp[i][k] = max(dp[i][k], dp[i - 1][k])
                new_rem = (dp[i-1][k] + nums[i]) % 3
                dp[i][new_rem] = max(dp[i][new_rem], dp[i - 1][k] + nums[i])    


        return dp[-1][0]
