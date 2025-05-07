from typing import List
import heapq

class Solution:
    def minTimeToReach(self, moveTime: List[List[int]]) -> int:
        n = len(moveTime)
        m = len(moveTime[0])
        directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

        # (time, i, j)
        pq = [(0, 0, 0)] 
        seen = {(0, 0)}

        while len(pq) > 0:
            time, i, j = heapq.heappop(pq)

            if i == n - 1 and j == m - 1:
                return time

            # Loop over neighbor
            for dx, dy in directions:
                x = i + dx
                y = j + dy
                
                if x >= 0 and x < n and y >= 0 and y < m and (x, y) not in seen:
                    new_time = max(time, moveTime[x][y]) + 1
                    heapq.heappush(pq, (new_time, x, y))
                    seen.add((x, y))
        
        return -1
            
