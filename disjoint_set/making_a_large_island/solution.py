class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
        self.freq = [1] * (n + 1)
        self.rank = [0] * (n + 1)
    
    def find(self, x):
        if x != self.parent[x]:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, u, v):
        parent_u, parent_v = self.find(u), self.find(v)

        # Belongs to the same group
        if parent_u == parent_v:
            return False

        # Union by rank
        if self.rank[parent_u] > self.rank[parent_v]:
            # Assign parent_v -> parent_u
            # Thus clear the freq of parent_v and increment the freq for parent_u
            # When we call find() and then get its frequency, by union find, it will point to parent_u
            self.freq[self.parent[parent_u]] += self.freq[self.parent[parent_v]]
            self.freq[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            self.freq[self.parent[parent_v]] += self.freq[self.parent[parent_u]]
            self.freq[self.parent[parent_u]] = 0
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.freq[self.parent[parent_u]] += self.freq[self.parent[parent_v]]
            self.freq[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1
        return True

    def max_freq(self):
        return max(self.freq)

class Solution:
    def largestIsland(self, grid: List[List[int]]) -> int:
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        n = len(grid)
        ds = DisjointSet(n * n)

        def get_neighbor_pos(i, j):
            for dir_x, dir_y in directions:
                x = i + dir_x
                y = j + dir_y

                if 0 <= x < n and 0 <= y < n and grid[x][y] == 1:
                    yield (x, y)
        
        # Build the disjoint set
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1:
                    for x, y in get_neighbor_pos(i, j):
                        # + 1 since disjoint set begins with a dummy index 
                        ds.union(i * n + j + 1, x * n + y + 1)

        o = ds.max_freq()
        
        # Update 0 to 1
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 0:
                    # Since grid[i][j] will turn to 1
                    freq = 1
                    visited = set()
                    for x, y in get_neighbor_pos(i, j):
                        pos = ds.find(x * n + y + 1)
                        if pos not in visited: 
                            visited.add(pos)
                            freq += ds.freq[pos]
                    o = max(o, freq)
        return o
