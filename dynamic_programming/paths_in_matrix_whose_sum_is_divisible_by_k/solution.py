from typing import List

class Solution:
    def numberOfPaths(self, grid: List[List[int]], k: int) -> int:
        n = len(grid)
        m = len(grid[0])
        dp = [[[0 for _ in range(k)] for _ in range(m)] for _ in range(n)]
        
        dp[0][0][grid[0][0] % k] = 1

        for i in range(n):
            for j in range(m):
                val = grid[i][j]
                rem = val % k

                for prev_rem in range(k):
                    new_rem = (prev_rem + rem) % k

                    if i > 0:
                        dp[i][j][new_rem] += dp[i - 1][j][prev_rem]
                    if j > 0:
                        dp[i][j][new_rem] += dp[i][j - 1][prev_rem]
        
        return dp[n - 1][m - 1][0] % (10**9 + 7)
