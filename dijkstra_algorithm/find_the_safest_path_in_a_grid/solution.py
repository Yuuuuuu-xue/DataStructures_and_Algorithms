from typing import List
import heapq

class Solution:
    def maximumSafenessFactor(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])
        q = []
        # -1 not visited
        dist = [[-1 for _ in range(m)] for _ in range(n)]

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    q.append((i, j))
                    dist[i][j] = 0

        # BFS to build dist
        depth = 0
        while len(q):
            depth += 1
            next_q = []

            for i, j in q:
                for dir_x, dir_y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                    x = i + dir_x
                    y = j + dir_y
                    if x >= 0 and x < n and y >= 0 and y < m and dist[x][y] == -1:
                        dist[x][y] = depth
                        next_q.append((x, y))
        
            q = next_q

        pq = []
        visited = set()
        heapq.heappush(pq, (-dist[0][0], 0, 0))
    
        while len(pq) > 0:
            d, i, j = heapq.heappop(pq)
            if (i, j) in visited:
                continue
            visited.add((i, j))
            
            # If bottom right
            if i == n - 1 and j == m - 1:
                return -d

            # Loop over neighbors
            for dir_x, dir_y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                x = i + dir_x
                y = j + dir_y
                if x >= 0 and x < n and y >= 0 and y < m and (x, y) not in visited:
                    new_d = -min(-d, dist[x][y])
                    heapq.heappush(pq, (new_d, x, y))
        
        return -1
