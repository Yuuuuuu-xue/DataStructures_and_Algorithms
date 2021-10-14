class DisjointSet:

    def __init__(self, n):
        """
        Initialize the disjoint set with maximum length of n and value from 1 to n.
        """
        # Dummy index 0
        self.parent = [i for i in range(n + 1)]
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
            # u has a higher rank
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            # v has a higher rank
            self.parent[parent_u] = self.parent[parent_v]
        else:
            # They have the same rank, so we pick either one and increase the rank by 1
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1

        return True


if __name__ == '__main__':
    disjoint_set = DisjointSet(10)
    # So we have {1}, {2}, ..., {10} in the disjoint set.



