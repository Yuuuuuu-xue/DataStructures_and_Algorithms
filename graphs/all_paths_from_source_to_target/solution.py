from typing import List, Set

class Solution:
    def dfs(self, graph: List[List[int]], curr, path: List[int], visited: Set[int]):
        if curr == len(graph) - 1:
            # last node
            self.o.append(path[::])
            return
        
        # Traverse the neighbor
        for neighbor in graph[curr]:
            if neighbor not in visited:
                visited.add(neighbor)
                path.append(neighbor)
                self.dfs(graph, neighbor, path, visited)

                # Backtrack
                path.pop()
                visited.remove(neighbor)

    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        self.o = []
        self.dfs(graph, 0, [0], {0})
        return self.o
