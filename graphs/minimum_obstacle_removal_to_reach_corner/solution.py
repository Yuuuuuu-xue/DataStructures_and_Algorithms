from typing import List
from collections import deque

class Solution:
    def minimumObstacles(self, grid: List[List[int]]) -> int:
        # (x, y, num_obstacles_removed)
        q = deque([(0, 0, 0)])

        n = len(grid)
        m = len(grid[0])

        visited = set()
        visited.add((0, 0))

        while q:
            x, y, num_obstacles_removed = q.popleft()
            if x == n - 1 and y == m - 1:
                return num_obstacles_removed
            
            # Loop over neighbor
            for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                new_x = x + dx
                new_y = y + dy

                if new_x >= 0 and new_x < n and new_y >= 0 and new_y < m and (new_x, new_y) not in visited:
                    visited.add((new_x, new_y))
                    if grid[new_x][new_y] == 0:
                        q.appendleft((new_x, new_y, num_obstacles_removed))
                    else:
                        q.append((new_x, new_y, num_obstacles_removed + 1))
        
        return 0
