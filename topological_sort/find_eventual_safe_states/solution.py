from typing import List
from collections import defaultdict

class Solution:
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        m = defaultdict(list)
        n = len(graph)
        in_degree = [0 for _ in range(n)]

        for i in range(n):
            for j in graph[i]:
                # Reverse the graph
                m[j].append(i)
                in_degree[i] += 1
        
        q = []
        # Loop over leaf nodes
        for i in range(n):
            if in_degree[i] == 0:
                q.append(i)
        
        o = []
        
        while q:
            next_q = []

            for safe_node in q:
                o.append(safe_node)

                for neighbor in m[safe_node]:
                    if in_degree[neighbor] == 1:
                        # Remove edge and visit it
                        in_degree[neighbor] = 0
                        next_q.append(neighbor)
                    elif in_degree[neighbor] > 1:
                        in_degree[neighbor] -= 1

            q = next_q
        
        o.sort()
        return o
