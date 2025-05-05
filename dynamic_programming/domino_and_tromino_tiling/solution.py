class Solution:
    def numTilings(self, n: int) -> int:
        if n < 4:
            if n == 0 or n == 1:
                return 1
            if n == 2:
                return 2
            if n == 3:
                return 5
        MOD = 10**9 + 7
        dp = [0 for _ in range(n + 1)]
        dp[0] = 1
        dp[1] = 1
        dp[2] = 2
        dp[3] = 5

        for i in range(4, n + 1):
            dp[i] = (2 * dp[i - 1] + dp[i - 3]) % MOD
        
        return dp[-1]
