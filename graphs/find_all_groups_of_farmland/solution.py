from typing import List

class Solution:
    def bfs(self, land: List[List[int]], i: int, j: int):
        # mark cell as visited
        land[i][j] = -1
        q = [(i, j)]
        target_x = i
        target_y = j

        # BFS
        while len(q) > 0:
            next_q = []

            for t_i, t_j in q:
                # Loop over neighbors
                for dir_x, dir_y in [(0, 1), (1, 0)]:
                    x = t_i + dir_x
                    y = t_j + dir_y
                    if x >= 0 and x < len(land) and y >= 0 and y < len(land[0]) and land[x][y] == 1:
                        next_q.append((x, y))
                        land[x][y] = -1
                        target_x = x
                    target_y = y

            q = next_q
        
        # Finish bfs, we find a group
        self.groups.append([i, j, target_x, target_y])
        

    def findFarmland(self, land: List[List[int]]) -> List[List[int]]:
        self.groups = []
        for i in range(len(land)):
            for j in range(len(land[0])):
                if land[i][j] == 1:
                    self.bfs(land, i, j)

        return self.groups
