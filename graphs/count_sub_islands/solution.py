from typing import List, Set, Tuple

class Solution:
    def dfs(self, grid1: List[List[int]], grid2: List[List[int]], visited: Set[Tuple[int, int]], i: int, j: int) -> bool:
        is_subisland = True
        if grid1[i][j] != '1':
            is_subisland = False
        
        # Loop over neighbors
        for dir in [[1, 0], [-1, 0], [0, 1], [0, -1]]:
            x = dir[0] + i
            y = dir[1] + j
            if x >= 0 and x < len(grid1) and y >= 0 and y < len(grid1[0]) and grid2[x][y] == 1 and (x, y) not in visited:
                visited.add((x, y))
                if not self.dfs(grid1, grid2, visited, x, y):
                    is_subisland = False
        
        return is_subisland

            

    def countSubIslands(self, grid1: List[List[int]], grid2: List[List[int]]) -> int:
        visited = set()
        num_islands = 0
        for i in range(len(grid2)):
            for j in range(len(grid2[0])):
                if grid2[i][j] == 1 and (i, j) not in visited:
                    visited.add((i, j))
                    if self.dfs(grid1, grid2, visited, i, j):
                        num_islands += 1
        return num_islands
