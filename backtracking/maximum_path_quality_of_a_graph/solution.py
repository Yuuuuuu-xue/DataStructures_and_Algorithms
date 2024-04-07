from typing import List
from collections import defaultdict

class Solution:
    def solve(self, values: List[int], graph, m, max_time, curr_score, curr_node, curr_time):
        if curr_time > max_time:
            return
        
        # If node we visit is 0, then valid path
        if curr_node == 0:
            self.max_score = max(self.max_score, curr_score)
        
        # Try each neighbor
        for edge in graph[curr_node]:
            if edge[1] + curr_time > max_time:
                continue

            # First node in the path
            if edge[0] not in m or m[edge[0]] == 0:
                m[edge[0]] = 1
                curr_score += values[edge[0]]
            else:
                m[edge[0]] += 1

            self.solve(values, graph, m, max_time, curr_score, edge[0], curr_time + edge[1])
        
            # Backtracking, remove from the path
            m[edge[0]] -= 1
            if m[edge[0]] == 0:
                # Last node in the path
                curr_score -= values[edge[0]]
    
    def maximalPathQuality(self, values: List[int], edges: List[List[int]], maxTime: int) -> int:
        self.max_score = 0
        m = {0 : 1}

        # Build the graph
        graph = defaultdict(list)
        for edge in edges:
            graph[edge[0]].append((edge[1], edge[2]))
            graph[edge[1]].append((edge[0], edge[2]))

        self.solve(values, graph, m, maxTime, values[0], 0, 0)
        return self.max_score
        

