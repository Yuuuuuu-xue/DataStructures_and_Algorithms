class Solution:
    def strangePrinter(self, s: str) -> int:
        n = len(s) 
        dp = [[0 for _ in range(n)] for _ in range(n)]

        for i in range(n - 1, -1, -1):
            # Base case
            dp[i][i] = 1

            for j in range(i + 1, n):
                if s[i] == s[j]:
                    # Same character, then no need extra operation
                    dp[i][j] = dp[i][j - 1]
                else:
                    # Max operations
                    dp[i][j] = dp[i][j - 1] + 1
                    # Tries with different combination
                    for k in range(i, j):
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j])
        
        return dp[0][n - 1]
