from typing import List

class Solution:
    def highestPeak(self, isWater: List[List[int]]) -> List[List[int]]:
        n = len(isWater)
        m = len(isWater[0])

        graph = [[0 for _ in range(m)] for _ in range(n)]

        q = []
        
        for i in range(n):
            for j in range(m):
                if isWater[i][j] == 1:
                    q.append((i, j))
                    # Mark as visited
                    isWater[i][j] = -1
        
        level = 0
        while q:
            next_q = []

            for i, j in q:
                for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                    x = i + dx
                    y = j + dy

                    if x >= 0 and x < n and y >= 0 and y < m and isWater[x][y] >= 0:
                        isWater[x][y] = -1
                        next_q.append((x, y))
            
                graph[i][j] = level

            level += 1
            q = next_q

        return graph
