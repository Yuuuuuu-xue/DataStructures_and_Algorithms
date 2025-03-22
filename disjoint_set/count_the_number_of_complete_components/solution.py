from typing import List
from collections import defaultdict


class DisjointSet:

    def __init__(self, n):
        """
        Initialize the disjoint set with maximum length of n and value from 1 to n.
        """
        # Dummy index 0
        self.parent = [i for i in range(n + 1)]
        # Size of the group, only the root node will contain the size and its children will have avalue of 0
        self.size = [1 for i in range(n + 1)]
        self.size[0] = 0
        # We use path compression by rank
        self.rank = [0] * (n + 1)

    def find(self, x):
        """
        Given an element x, return the representative of x in the disjoint set.
        In the process of finding the representative, we will perform path compression.
        """
        if x != self.parent[x]:
            # Path Compression
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, u, v):
        """
        Union the set that contains u and the set that contains v.
        """
        # Path Compression
        parent_u, parent_v = self.find(u), self.find(v)

        # They belongs to the same group
        if parent_u == parent_v:
            return False

        # Union by rank
        if self.rank[parent_u] > self.rank[parent_v]:
            # Update the size, only root node will contain the size, children will have a value of 0
            self.size[self.parent[parent_u]] += self.size[self.parent[parent_v]]
            self.size[self.parent[parent_v]] = 0
            # u has a higher rank
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            self.size[self.parent[parent_v]] += self.size[self.parent[parent_u]]
            self.size[self.parent[parent_u]] = 0
            # v has a higher rank
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.size[self.parent[parent_u]] += self.size[self.parent[parent_v]]
            self.size[self.parent[parent_v]] = 0
            # They have the same rank, so we pick either one and increase the rank by 1
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1

        return True

class Solution:
    def countCompleteComponents(self, n: int, edges: List[List[int]]) -> int:
        ds = DisjointSet(n)
        degree = defaultdict(int)

        for u, v in edges:
            # do not double count
            degree[u + 1] += 1
            ds.union(u + 1, v + 1)

        group_to_n_and_num_edges = {}
        for i in range(1, n + 1):
            x = ds.find(i)
            if x not in group_to_n_and_num_edges:
                group_to_n_and_num_edges[x] = [0, 0]
            group_to_n_and_num_edges[x][0] += 1
            group_to_n_and_num_edges[x][1] += degree[i]
        
        o = 0
        for key in group_to_n_and_num_edges:
            num, num_edges = group_to_n_and_num_edges[key]
            if num * (num - 1) // 2 == num_edges:
                o += 1
        return o

