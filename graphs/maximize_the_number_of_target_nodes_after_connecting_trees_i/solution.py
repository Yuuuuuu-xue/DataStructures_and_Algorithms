from typing import List
from collections import defaultdict

class Solution:
    def bfs(self, graph, start_node, k):
        q = [start_node]
        o = 0
        visited = {start_node}
        k += 1
        while k and q:
            k -= 1
            
            next_q = []

            for item in q:
                o += 1
                for neighbor in graph[item]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        next_q.append(neighbor)
            
            q = next_q

        return o

    def maxTargetNodes(self, edges1: List[List[int]], edges2: List[List[int]], k: int) -> List[int]:
        max_target_tree2 = 0

        graph1 = defaultdict(list)
        for u, v in edges1:
            graph1[u].append(v)
            graph1[v].append(u)

        graph2 = defaultdict(list)
        for u, v in edges2:
            graph2[u].append(v)
            graph2[v].append(u)

        for item in range(len(edges2) + 1):
            max_target_tree2 = max(max_target_tree2, self.bfs(graph2, item, k - 1))

        o = []
        for item in range(len(edges1) + 1):
            o.append(self.bfs(graph1, item, k) + max_target_tree2)

        return o          
