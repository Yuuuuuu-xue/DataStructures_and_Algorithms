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


def kruskal_algorithm(vertices, edges, weight) -> list:
    """
    Implement the Kruskal's Algorithm.
    Assume <vertices> is a list of vertices from 1 to n.
    Assume <edges> is a map that maps a vertex u to a vertices v such that (u, v) is incident to u and v.
    Assume <weight> is a map that maps a weight to a list of edges that has this edge weight.
    """
    disjoint_set = DisjointSet(len(vertices))
    output = []
    # We need the w(e1) <= w(e2) <= ... <= w(em)
    sorted_keys = sorted(weight.keys())
    # If we have (u, v) then we don't need (v, u)
    visited = set()

    for key in sorted_keys:
        for edge in weight[key]:
            if edge not in visited:
                u, v = edge
                # Belong to different connected components
                if disjoint_set.find(u) != disjoint_set.find(v):
                    # Union them
                    disjoint_set.union(u, v)
                    # Include in our solution
                    output.append(edge)

                # Add to visited so we won't have (v, u)
                visited.add(edge)
                visited.add((v, u))
    return output


if __name__ == '__main__':
    test_vertices = [0, 1, 2, 3, 4]
    test_edges = {
        0: [1, 2, 3],
        1: [0, 4],
        2: [0, 3],
        3: [0, 2, 4],
        4: [1, 3]
    }
    test_weight = {
        1: [(0, 2), (2, 0)],
        4: [(0, 3), (3, 0)],
        3: [(2, 3), (3, 2)],
        2.5: [(4, 3), (3, 4)],
        2: [(1, 4), (4, 1)],
        5: [(0, 1), (1, 0)]
    }
    # [(0, 2), (2, 3), (3, 4), (4, 1)]
    print(kruskal_algorithm(test_vertices, test_edges, test_weight))

