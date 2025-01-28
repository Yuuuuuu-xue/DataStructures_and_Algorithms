from typing import List

class DisjointSet:
    def __init__(self, grid):
        n = len(grid) * len(grid[0])
        self.parent = [i for i in range(n + 1)]
        self.rank = [0] * (n + 1)
        self.points = [0] * (n + 1)

        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] > 0:
                    # + 1 since index 1 based
                    k = i * len(grid[0]) + j + 1
                    self.points[k] = grid[i][j]
    
    def find(self, x):
        if x != self.parent[x]:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, u, v):
        parent_u, parent_v = self.find(u), self.find(v)

        if parent_u == parent_v:
            return False
        
        if self.rank[parent_u] > self.rank[parent_v]:
            self.points[self.parent[parent_u]] += self.points[self.parent[parent_v]]
            self.points[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            self.points[self.parent[parent_v]] += self.points[self.parent[parent_u]]
            self.points[self.parent[parent_u]] = 0
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.points[self.parent[parent_u]] += self.points[self.parent[parent_v]]
            self.points[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1
        return True

    def max_points(self):
        return max(self.points)


class Solution:
    def findMaxFish(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        ds = DisjointSet(grid)

        def get_neighbor(i, j):
            for dx, dy in directions:
                x = i + dx
                y = j + dy

                if 0 <= x < n and 0 <= y < m and grid[x][y] > 0:
                    yield(x, y)
        
        for i in range(n):
            for j in range(m):
                # + 1 since 1 index based
                k = i * m + j + 1
                if grid[i][j] > 0:
                    for x, y in get_neighbor(i, j):
                        neighbor_k = x * m + y + 1
                        ds.union(k, neighbor_k)
        
        return ds.max_points()
