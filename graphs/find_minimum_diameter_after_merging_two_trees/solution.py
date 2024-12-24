from typing import List
from collections import defaultdict
from math import ceil

class Solution:
    def convert_to_graph(self, edges: List[List[int]]):
        graph = defaultdict(list)
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        return graph

    def get_furthest_node_or_dist(self, graph, init_node, furthest_node_flag):
        q = [init_node]
        visited = set()
        visited.add(init_node)
        furthest_node = init_node
        dist = 0

        while q:
            next_q = []

            for curr in q:
                for neighbor in graph[curr]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        next_q.append(neighbor)

                furthest_node = curr
            q = next_q
            dist += 1
        
        if furthest_node_flag:
            return furthest_node
        return dist - 1 # We + 1 at the end before we break the loop

    def minimumDiameterAfterMerge(self, edges1: List[List[int]], edges2: List[List[int]]) -> int:
        graph1 = self.convert_to_graph(edges1)
        graph2 = self.convert_to_graph(edges2)

        # We can start with any node
        furthest_node_1 = self.get_furthest_node_or_dist(graph1, 0, True)
        maximum_dist_1 = self.get_furthest_node_or_dist(graph1, furthest_node_1, False)

        furthest_node_2 = self.get_furthest_node_or_dist(graph2, 0, True)
        maximum_dist_2 = self.get_furthest_node_or_dist(graph2, furthest_node_2, False)

        return max(maximum_dist_1, maximum_dist_2, ceil(maximum_dist_1 / 2) + ceil(maximum_dist_2 / 2) + 1)
