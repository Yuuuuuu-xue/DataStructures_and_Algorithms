from typing import List, Set, Tuple

class Solution:
    def dfs(self, grid: List[List[int]], visited: Set[Tuple[int, int]], i: int, j: int):
        # Loop over the neighbor
        for dir_x, dir_y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            x = i + dir_x
            y = j + dir_y
            if x >= 0 and x < len(grid) and y >= 0 and y < len(grid[0]):
                if grid[x][y] == 1 :
                    if (x, y) not in visited:
                        visited.add((x, y))
                        self.dfs(grid, visited, x, y)
                else:
                    self.parameter += 1
            else:
                self.parameter += 1
                
    
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        visited = set()
        self.parameter = 0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1 and (i, j) not in visited:
                    visited.add((i, j))
                    self.dfs(grid, visited, i, j)
                    return self.parameter
        return 0
