from typing import List
from collections import defaultdict

class Solution:
    def bfs(self, graph, curr, comp) -> int:
        visited = {curr}
        i = 0
        o = 0
        q = [curr]

        while q:
            next_q = []
            if i % 2 == comp:
                o += len(q)
            for item in q:
                for neighbor in graph[item]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        next_q.append(neighbor)

            q = next_q
            i += 1
        
        return o

    def maxTargetNodes(self, edges1: List[List[int]], edges2: List[List[int]]) -> List[int]:
        graph1 = defaultdict(list)
        for u, v in edges1:
            graph1[u].append(v)
            graph1[v].append(u)


        graph2 = defaultdict(list)
        for u, v in edges2:
            graph2[u].append(v)
            graph2[v].append(u)

        largest_odd = 0
        for i in range(len(graph2)):
            largest_odd = max(largest_odd, self.bfs(graph2, i, 1))
        
        o = []
        for i in range(len(graph1)):
            o.append(self.bfs(graph1, i, 0) + largest_odd)
        return o
