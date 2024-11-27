from typing import List
from collections import defaultdict

class Solution:
    def bfs(self, n: int, graph) -> int:
        q = [0]
        step = 0
        visited = set()
        visited.add(0)
    
        while q:
            next_q = []

            for item in q:
                if item == n - 1:
                    return step

                for neighbor in graph[item]:
                    if neighbor not in visited:
                        visited.add(neighbor)
                        next_q.append(neighbor)
            
            q = next_q
            step += 1
        
        return step

    def shortestDistanceAfterQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        graph = defaultdict(list)
        answer = []

        for i in range(n - 1):
            graph[i].append(i + 1)

        for u, v in queries:
            graph[u].append(v)  
            # Perform bfs
            answer.append(self.bfs(n, graph))

        return answer
