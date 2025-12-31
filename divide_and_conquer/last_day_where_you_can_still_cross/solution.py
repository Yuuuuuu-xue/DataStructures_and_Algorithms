from typing import List

class Solution:
    def latestDayToCross(self, row: int, col: int, cells: List[List[int]]) -> int:
        left = 0
        right = len(cells)
        # Cover to index-0 based
        cells = [(cell[0] - 1, cell[1] - 1) for cell in cells]
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        o = 0
        while left <= right:
            mid = (left + right) // 2

            # Perform bfs
            water = set(cells[:mid])
            q = []
            visited = set()
            for j in range(col):
                if (0, j) not in water:
                    q.append((0, j))
                    visited.add((0, j))
            
            reach_bottom = False
            while q and not reach_bottom:
                next_q = []

                for i, j in q:
                    if i == row - 1:
                        reach_bottom = True
                        break

                    for dx, dy in directions:
                        x = i + dx
                        y = j + dy

                        if x >= 0 and x < row and y >= 0 and y < col and (x, y) not in water and (x, y) not in visited:
                            next_q.append((x, y))
                            visited.add((x, y))

                q = next_q

            if reach_bottom:
                # Solution works
                o = max(o, mid)
                left = mid + 1
            else:
                right = mid - 1
        return o
