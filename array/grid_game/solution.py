from typing import List

class Solution:
    def gridGame(self, grid: List[List[int]]) -> int:
        prefix = [[], []]

        n = len(grid[0])

        for i in range(len(grid)):
            curr_sum = 0
            for j in range(n):
                curr_sum += grid[i][j]
                prefix[i].append(curr_sum)
        
        o = float('inf')

        for i in range(n):
            # First robot moves down at index i

            # Robot 2 wants to maximize its points
            curr_choice = 0

            # Second robot goes down and then goes all the way to the right
            # Collect all points grid[1][j] where j < i
            if i > 0:
                curr_choice = max(curr_choice, prefix[1][i - 1])
        
            # Second robot goes all the way to the right and goes down
            # Collect all points grid[0][j] where j > i
            curr_choice = max(curr_choice, prefix[0][n - 1] - prefix[0][i])

            # Robot 1 wants to minimize Robot 2's points
            o = min(o, curr_choice)
        
        return o


