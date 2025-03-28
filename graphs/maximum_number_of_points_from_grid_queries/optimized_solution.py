from typing import List
from collections import defaultdict

class Solution:
    def maxPoints(self, grid: List[List[int]], queries: List[int]) -> List[int]:
        queries_map = defaultdict(list)
        for i, q in enumerate(queries):
            queries_map[q].append(i)
        
        queries_key = list(queries_map.keys())
        queries_key.sort()

        o = [0 for _ in range(len(queries))]

        larger_items = set()
        larger_items.add((0, 0))
        visited = set()
        i = 0

        n = len(grid)
        m = len(grid[0])
        prev_points = 0

        while i < len(queries_key) and larger_items:
            query = queries_key[i]
            q = []

            # Store all the larger items into 
            for x, y in list(larger_items):
                if grid[x][y] < query:
                    q.append((x, y))
                    larger_items.remove((x, y))
                    visited.add((x, y))
                
            # Perform BFS
            points = prev_points

            while q:
                next_q = []
                for x, y in q:
                    points += 1

                    # Loop over neighbor
                    for dx, dy in [[1, 0], [-1, 0], [0, 1], [0, -1]]:
                        new_x = x + dx
                        new_y = y + dy

                        if new_x >= 0 and new_x < n and new_y >= 0 and new_y < m and (new_x, new_y) not in visited:
                            if grid[new_x][new_y] >= query:
                                larger_items.add((new_x, new_y))
                            else:
                                next_q.append((new_x, new_y))
                                visited.add((new_x, new_y))
                q = next_q
            
            # Update the answer
            for j in queries_map[query]:
                o[j] = points
            i += 1
            prev_points = points

        # After loop over all elements, if BFS already done, then assign to all the answer
        if i > 0 and i < len(queries_key):
            while i < len(queries_key):
                for j in queries_map[queries_key[i]]:
                    o[j] = prev_points
                i += 1
        return o
