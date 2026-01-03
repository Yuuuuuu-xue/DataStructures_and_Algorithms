from typing import List

class Solution:
    def solve(self, curr: List[int], i):
        if len(curr) == self.k:
            self.o.append(curr[::])
            return
        
        if i > self.n:
            return
        
        for i in range(i, self.n + 1):
            curr.append(i)
            self.solve(curr, i + 1)
            curr.pop()

    def combine(self, n: int, k: int) -> List[List[int]]:
        self.k = k
        self.o = []
        self.n = n

        self.solve([], 1)
        return self.o

