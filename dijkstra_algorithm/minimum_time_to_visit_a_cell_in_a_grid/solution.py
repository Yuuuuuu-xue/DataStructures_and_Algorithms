from typing import List
import heapq

class Solution:
    def minimumTime(self, grid: List[List[int]]) -> int:
        if grid[0][1] > 1 and grid[1][0] > 1:
            return -1
        
        # time, i, j
        pq = [(0, 0, 0)]
        visited = set()
        visited.add((0, 0))

        n = len(grid)
        m = len(grid[0])

        while pq:
            time, i, j = heapq.heappop(pq)

            # Reach to target
            if i == n - 1 and j == m - 1:
                return time
            
            # Loop over neighbor
            for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                x = i + dx
                y = j + dy

                if x >= 0 and x < n and y >= 0 and y < m and (x, y) not in visited:
                    visited.add((x, y))

                    if time + 1 >= grid[x][y]:
                        # We can move to the next cell directly
                        heapq.heappush(pq, (time + 1, x, y))
                    else:
                        diff = grid[x][y] - time
                        if diff % 2 != 0:
                            # we can reach to target cell at exactly grid[x][y]
                            heapq.heappush(pq, (grid[x][y], x, y))
                        else:
                            # we can reach to target cell prev cell at exactly grid[x][y] time, need 1 extra time
                            heapq.heappush(pq, (grid[x][y] + 1, x, y))

        return -1
