class DisjointSet:

    def __init__(self, n):
        """
        Initialize the disjoint set with maximum length of n and value from 1 to n.
        """
        # Dummy index 0
        self.parent = [i for i in range(n + 1)]

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

        # Union by parent
        if self.parent[parent_v] <= self.parent[parent_u]:
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.parent[parent_v] = self.parent[parent_u]

        return True


class Solution:
    def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:
        ds = DisjointSet(26)
        ord_a = ord('a')
        for i in range(len(s1)):
            ds.union(ord(s1[i]) + 1 - ord_a, ord(s2[i]) + 1 - ord_a)
        
        o = ""
        for c in baseStr:
            o += chr(ds.find(ord(c) + 1 -ord_a) - 1 + ord_a)
    
        return o
