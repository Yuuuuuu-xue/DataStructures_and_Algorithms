from typing import List

class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        s = set()
        for i in range(n):
            s.add(i)

        for _, v in edges:
            if v in s:
                s.remove(v)

        if len(s) == 1:
            return s.pop()
        return -1        
