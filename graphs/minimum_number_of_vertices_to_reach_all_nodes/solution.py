from typing import List

class Solution:
  def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
    s = set()
    for i in range(n):
      s.add(i)
    
    for edge in edges:
      if edge[1] in s:
        s.remove(edge[1])
    
    return s
