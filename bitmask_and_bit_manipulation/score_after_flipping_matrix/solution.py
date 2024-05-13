from typing import List

class Solution:
    def matrixScore(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])

        # Try to flip the row begins with 0
        for i in range(n):
            if grid[i][0] == 0:
                # Flip the row
                for j in range(m):
                    grid[i][j] = 1 - grid[i][j]
        
        # Since all rows begins with 1
        max_score = n * (1 << (m - 1))

        for j in range(1, m):
            # Try to flip the column
            c = 0
            for i in range(n):
                c += grid[i][j]
            num_ones = max(c, n - c)
            max_score += num_ones * (1 << (m - j - 1))

        return max_score
