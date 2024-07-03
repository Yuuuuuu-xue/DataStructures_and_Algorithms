from typing import List, Set

class Solution:
  def dfs(self, graph, seen: Set[int], ancestors, i, curr):
    for node in graph[curr]:
      if node not in seen:
        seen.add(node)
        ancestors[node].append(i)
        self.dfs(graph, seen, ancestors, i, node)

  def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
    graph = [[] for _ in range(n)]
    for u, v in edges:
      graph[u].append(v)
    
    ancestors = [[] for _ in range(n)]

    for i in range(n):
      seen = set()
      self.dfs(graph, seen, ancestors, i, i)
    
    return ancestors
