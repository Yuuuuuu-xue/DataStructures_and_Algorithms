from typing import List
import heapq

class Solution:
    def minTimeToReach(self, moveTime: List[List[int]]) -> int:
        n = len(moveTime)
        m = len(moveTime[0])
        direction = [[1, 0], [-1, 0], [0, 1], [0, -1]]

        # (time, i, j, index)
        pq = [(0, 0, 0, 0)]
        seen = {(0, 0)}

        while pq:
            time, i, j, index = heapq.heappop(pq)

            if i == n - 1 and j == m - 1:
                return time
            
            for dx, dy in direction:
                x = i + dx
                y = j + dy

                if x >= 0 and x < n and y >= 0 and y < m and (x, y) not in seen:
                    seen.add((x, y))
                    new_time = max(time, moveTime[x][y]) + (1 if index % 2 == 0 else 2)
                    heapq.heappush(pq, (new_time, x, y, index + 1))
            
        return -1
            
