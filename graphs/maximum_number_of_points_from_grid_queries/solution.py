from typing import List

class Solution:
    def maxPoints(self, grid: List[List[int]], queries: List[int]) -> List[int]:
        queries_with_i = [(q, i) for i, q in enumerate(queries)]
        queries_with_i.sort()

        o = [0 for _ in range(len(queries))]

        larger_items = set()
        larger_items.add((0, 0))
        visited = set()
        i = 0

        n = len(grid)
        m = len(grid[0])

        while i < len(queries) and larger_items:
            query = queries_with_i[i][0]
            q = []

            # Store all the larger items into 
            for x, y in list(larger_items):
                if grid[x][y] < query:
                    q.append((x, y))
                    larger_items.remove((x, y))
                    visited.add((x, y))
                
            # Perform BFS
            points = 0
            if i > 0:
                points = o[queries_with_i[i - 1][1]]
                if query == queries_with_i[i - 1][0]:
                    o[queries_with_i[i][1]] = points
                    i += 1
                    continue
                    
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
            o[queries_with_i[i][1]] = points
            i += 1
        
        # After loop over all elements, if BFS already done, then assign to all the answer
        if i > 0 and i < len(queries_with_i):
            while i < len(queries_with_i):
                o[queries_with_i[i][1]] = o[queries_with_i[i - 1][1]]
                i += 1
        return o
