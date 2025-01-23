from typing import List
from collections import defaultdict

class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
        self.size = [1 for _ in range(n + 1)]
        # 0 is the dummy node
        self.size[0] = 0
        self.rank = [0 for _ in range(n + 1)]
    
    def find(self, x):
        if x != self.parent[x]:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, u, v):
        parent_u, parent_v = self.find(u), self.find(v)

        if parent_u == parent_v: 
            return False
        
        if self.rank[parent_u] > self.rank[parent_v]:
            # Update size
            self.size[self.parent[parent_u]] += self.size[self.parent[parent_v]]
            self.size[self.parent[parent_v]] = 0
            # Parent u has a higher rank
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            self.size[self.parent[parent_v]] += self.size[self.parent[parent_u]]
            self.size[self.parent[parent_u]] = 0
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.size[self.parent[parent_u]] += self.size[self.parent[parent_v]]
            self.size[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1
        return True
    
    def get_largest_size(self):
        return max(self.size)
    
class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])

        servers = []
        m_row = defaultdict(list)
        m_col = defaultdict(list)

        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1:
                    servers.append((i, j))
                    # + 1 index since it's 1 index based
                    m_row[i].append(len(servers))
                    m_col[j].append(len(servers))
        
        k = len(servers)
        ds = DisjointSet(k)

        # Loop over the same row and group them together
        for r in m_row:
            for i in range(1, len(m_row[r])):
                ds.union(m_row[r][0], m_row[r][i])
        for c in m_col:
            for i in range(1, len(m_col[c])):
                ds.union(m_col[c][0], m_col[c][i])
        
        o = 0
        for s in ds.size:
            if s > 1:
                o += s
        return o
        

