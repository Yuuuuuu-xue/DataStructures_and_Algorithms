from typing import List

class Solution:
    def maxIncreasingSubarrays(self, nums: List[int]) -> int:
        dp = []
        n = len(nums)

        if n <= 1:
            return 0
        if n == 2:
            return 1

        for i in range(n):
            if i == 0 or nums[i] <= nums[i - 1]:
                dp.append(1)
            else:
                dp.append(dp[i - 1] + 1)
        
        left = 0
        right = n // 2
        o = 0
        while left <= right:
            k = (left + right) // 2

            # print(dp, k)
            is_good = False
            for i in range(n - 2 * k + 1):
                # print(dp, i, k, i + k - 1, dp[i + k - 1], i + 2 * k - 1, dp[i + 2 * k - 1])
                if dp[i + k - 1] >= k and dp[i + 2 * k - 1] >= k:
                    is_good = True
                    break

            if is_good:
                o = max(o, k)
                left = k + 1
            else:
                right = k - 1
        
        return o

