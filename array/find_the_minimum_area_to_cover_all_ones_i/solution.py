from typing import List

class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])

        i = n - 1
        j = m - 1
        x = 0
        y = 0

        for h in range(n):
            for v in range(m):
                if grid[h][v] == 1:
                    i = min(i, h)
                    j = min(j, v)
                    x = max(x, h)
                    y = max(y, v)
            
        return (x - i + 1) * (y - j + 1)
