from typing import List

class Solution:
    def solve(self, grid: List[List[int]], i: int, j: int) -> int:
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return 0
        if grid[i][j] == 0:
            return 0

        curr_gold = grid[i][j]
        max_gold = 0
        grid[i][j] = 0
        
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            max_gold = max(max_gold, self.solve(grid, i + x, j + y))

        # Backtrack
        grid[i][j] = curr_gold
        return max_gold + curr_gold

    def getMaximumGold(self, grid: List[List[int]]) -> int:
        max_gold = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                max_gold = max(max_gold, self.solve(grid, i, j))
        return max_gold
