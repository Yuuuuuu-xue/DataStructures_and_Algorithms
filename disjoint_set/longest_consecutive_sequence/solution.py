from typing import List


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

    def get_largest_size(self):
        return max(self.size)


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # We use index as the value in disjoint set, thus, we need a map to map num to its index
        ds = DisjointSet(len(nums))
        num_to_i = {}
        for i, item in enumerate(nums):
            num_to_i[item] = i
        
        # nums may contain duplicate, thus, we only need to iterate over num_to_i
        for num in num_to_i:
            # i + 1 because disjoint set is implemented as 1-index based
            if num - 1 in num_to_i:
                ds.union(num_to_i[num] + 1, num_to_i[num - 1] + 1)
            if num + 1 in num_to_i:
                ds.union(num_to_i[num] + 1, num_to_i[num + 1] + 1)
        
        return ds.get_largest_size()
