from typing import List
from collections import defaultdict


class Solution:
    def dfs(self, graph, values: List[int], k: int, visited, curr: int):
        curr_val = values[curr]

        for neighbor in graph[curr]:
            if neighbor not in visited:
                visited.add(neighbor)
                curr_val += self.dfs(graph, values, k, visited, neighbor)
        
        if curr_val % k == 0:
            self.num_divisible_components += 1
            return 0
        return curr_val

    def maxKDivisibleComponents(self, n: int, edges: List[List[int]], values: List[int], k: int) -> int:
        self.num_divisible_components = 0

        graph = defaultdict(list)

        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        
        visited = set()
        visited.add(0)

        self.dfs(graph, values, k, visited, 0)
        return self.num_divisible_components
