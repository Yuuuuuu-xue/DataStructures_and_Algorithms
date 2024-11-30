from typing import List
from collections import defaultdict

class Solution:
    def validArrangement(self, pairs: List[List[int]]) -> List[List[int]]:
        graph = defaultdict(list)
        in_degree = defaultdict(int)
        out_degree = defaultdict(int)

        for u, v in pairs:
            graph[u].append(v)
            out_degree[u] += 1
            in_degree[v] += 1
        
        visited_list = []

        start_node = -1

        for node in out_degree:
            if out_degree[node] > in_degree[node]:
                start_node = node
                break
    
        if start_node == -1:
            # Use any node, i.e. first node
            start_node = pairs[0][0]

        def dfs(curr):
            while graph[curr]:
                next = graph[curr].pop()
                dfs(next)
            visited_list.append(curr)

        dfs(start_node)

        o = []

        # Need to reverse it
        for i in range(len(visited_list) - 1, 0, -1):
            o.append((visited_list[i], visited_list[i - 1]))
        
        return o
