from typing import List

class Solution:
  def findCenter(self, edges: List[List[int]]) -> int:
    s = set()
    for node in edges:
      if node[0] in s:
        return node[0]
      s.add(node[0])
      if node[1] in s:
        return node[1]
      s.add(node[1])
    return -1
