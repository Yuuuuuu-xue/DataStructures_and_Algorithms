from typing import List
from collections import defaultdict

class Solution:
    def bfs(self, graph, n, start):
        min_distance = [float('inf') for _ in range(n)]
        q = [start]
        visited = {start}
        dist = 0

        while q:
            next_q = []

            for item in q:
                min_distance[item] = dist

                for neighbor in graph[item]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        next_q.append(neighbor)
            q = next_q
            dist += 1
        
        return min_distance

    def closestMeetingNode(self, edges: List[int], node1: int, node2: int) -> int:
        graph = defaultdict(list)
        n = len(edges)

        for i in range(n):
            if edges[i] != -1:
                graph[i].append(edges[i])
        
        min_dist_1 = self.bfs(graph, n, node1)
        min_dist_2 = self.bfs(graph, n, node2)

        min_dist = float('inf')
        min_dist_i = -1
        for i in range(n):
            curr_dist = max(min_dist_1[i], min_dist_2[i])
            if curr_dist < min_dist:
                min_dist = curr_dist
                min_dist_i = i
        
        return min_dist_i

